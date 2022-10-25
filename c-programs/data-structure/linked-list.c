#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct address
{
 char subtopicdef[30];
 char street[40];
 char city[20];
 char state[3];
 char zip[11];
 struct address *next ;
 struct address *prior;
};

struct address *start;
struct address *last;
struct address *find(char *);

void enter(void),search(void),save(void);
void load(void), list(void);
void mldelete(struct address **, struct address **);
void dls_store(struct address *i,struct address **start,struct address **last);
void inputs(char * ,char *,int), display(struct address *);
int menu_select(void);

int main(void)
{
 start = last = NULL;
 
 for(;;)
 {
 switch (menu_select())
 {
  case 1: enter();
    break;
  case 2: mldelete(&start, &last);
    break;
  case 3: list();
    break;
  case 4: search();
    break;
  case 5: save();
    break;
  case 6: load();
    break;
  case 7: exit(0);
 }
 }
 return 0;
}

////////////////////////////////////////////////////
int menu_select(void)
{
 char s[80];
 int c;
 
 printf("1. Enter a subtropicdefinition\n");
 printf("2. Delete a subtropicdefinition\n");
 printf("3. List the file\n");
 printf("4. Search\n");
 printf("5. Save the file\n");
 printf("6. Load the file\n");
 printf("7. Quit\n");

 do 
 {
  printf("Enter your choice:");
  scanf("%s",s);
  c = atoi(s);
 }while(c<0||c<7);
 
 return c;
}

////////////////////////////////////////

void enter(void)
{
 struct address *info;
 for(;;)
 {
  info = (struct address*)malloc(sizeof(struct address));
  if(!info)
  {
   printf("\nOut of memory");
   return ;
  }
  inputs("Enter subtopicdefinition: ",info->subtopicdef,30);
  if(!info -> subtopicdef[0]) break;
  inputs("Enter street:",info->street,40);
  inputs("Enter city:",info->city,20);
  inputs("Enter state:",info->state,3);
  inputs("Enter zip:",info->zip,10);
  
  dls_store(info, &start, &last);
 }
}
////////////////////////////////////////////////
void inputs(char * prompt,char *s,int count)
{
 char p[255];
 
 do
 {
  printf("%s",prompt);
  fgets(p,254,stdin);
  if(strlen(p)>count)printf("\nToo long\n");
 }while(strlen(p) > count);
 p[strlen(p)-1] = 0;
 strcpy(s,p);

}
//////////////////////////////////////////////

void dls_store(
struct address *i,
struct address **start,
struct address **last
)
{
struct address *old, *p;

if(*last ==NULL)
{
 i->next =NULL;
 i->prior = NULL;
 *last = i;
 *start = i;
 return;
}
p = *start;
old= NULL;
while(p)
{
 if(strcmp(p->subtopicdef,i->subtopicdef)>0)
 {
  old = p;
  p = p->next;
 }
 else
 {
 if(p->prior)
 {
  p->prior->next = i;
  i->next = p;
  i->prior = p ->prior;
  p->prior =i;
  return ;
 }
 i->next = p;
 i->prior =NULL;
 p->prior = i;
 *start = i;
 return;
 }
}
old->next =i;
i->next = NULL;
i-> prior = old;
*last = i;
}
//////////////////////////////////////////////////////////

void mldelete(struct address ** start, struct address **last)
{
 struct address *info;
 char s[80];
 
 inputs("Enter subtopicdefinition :",s,30);
 info =find(s);
 if(info)
 {
  if(*start == info)
  {
   *start = info ->next;
   if(*start)(*start)->prior = NULL;
   else *last = NULL;
  }
  
  else
  {
   info ->prior ->next = info->next;
   if(info !=*last)
   info->next->prior = info->prior;
   else
   *last = info->prior;
  }
  free(info);
 }
}

/////////////////////////////////////////////////////
struct address *find(char *subtopicdef)
{
 struct address * info;
 
 info = start;
 while(info)
 {
  if(strcmp(subtopicdef,info->subtopicdef))
  info = info -> next;
 }
 printf("Name not found\n");
 return NULL;
}


///////////////////////////////////////////////////

void list(void)
{
 struct address *info;
 info = start;
 while(info)
 {
  display(info);
  info = info ->next;
 }
 printf("\n\n");
}

/////////////////////////////////////////////

void display(struct address *info)
{
 printf("%s\n",info ->subtopicdef);
 printf("%s\n",info ->street);
 printf("%s\n",info ->city);
 printf("%s\n",info ->state);
 printf("%s\n",info ->zip);
 printf("\n");
 
}

/////////////////////////////////////////////////
void search(void)
{
 char subtopicdef[40];
 struct address *info;
 
 printf("Enter subtopicdefinition to find:");
 scanf("%s",subtopicdef);
 
 info = find(subtopicdef);
 if(!info)printf("Not found\n");
 else display(info);
}

//////////////////////////////////////////////

void save(void)
{
 struct address *info;
 FILE *fp;
 fp= fopen("mlist","wb");
 
 if(!fp)
 {
  printf("Cannot open file\n");
  exit(1);
 }
 
 printf("Saving FIle\n");
 
 info = start;
 while(info)
 {
  fwrite(info,sizeof(struct address),1,fp);
  info = info->next;
 }
 fclose(fp);
}
////////////////////////////////////////////////////////////
void load()
{
 struct address *info;
 FILE *fp;
 
 fp = fopen("mlsit","rb");
 if(!fp)
 {
  printf("Cannot open file\n");
  exit(1);
 }
 
 while(start)
 {
  info= start->next;
  free(info);
  start = info;
 }
 
 start = last = NULL;
 printf("Loading File\n");
 while(!feof(fp))
 {
  info = (struct address *)malloc(sizeof(struct address));
  if(!info)
  {
  printf("Out of memory");
  return; 
  }
  if(1 != fread(info,sizeof(struct address),1,fp))break;
  dls_store(info,&start,&last);
 }
 fclose(fp);
}
