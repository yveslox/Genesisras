class twodimensionarray
{
public static void main(String args[])
{
int arr[][]={{1,2,3},{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int i,j;
for(i=0;i<4;i++)
{
  System.out.print("Row "+i+" : ");
  for(j=0;j<3;j++)
  {
  System.out.print(arr[i][j]+",  ");
  }
 System.out.println();
}
}
}
