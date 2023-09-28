#include<stdio.h>
int main()
{
  int a,z=0;
  printf("Enter no");
  scanf("%d",&a);
  for(int u=a;u>=1;u--)
    {
       for(int v=1;v<=u;v++)
        {
         printf("%d ",v);
        } 
        printf("\n");
        z=z+2;
        for(int w=1;w<=z;w++)
        {
           printf(" "); 
        }
      
    }
}
