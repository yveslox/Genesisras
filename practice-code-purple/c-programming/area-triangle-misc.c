 #include<stdio.h>

 int main()
 {
    int h,b;
    float area;

    printf("Enter the height of the triangle: ");
    scanf("%d",&h);

    printf("Enter the base of the triangle: ");
    scanf("%d",&b);

    area = (h*b)/(float)2;
    
    printf("The area of the triangle is : %f\n",area);
    
    return (0);
 }