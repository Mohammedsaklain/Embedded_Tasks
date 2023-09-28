#include<stdio.h>
int main()
{
  int a,c,l;
  printf("Enter the size of array");
  scanf("%d",&a);
  int b[a];
  printf("Enter the array");
  for(int i=0;i<a;i++)
    {
      scanf("%d",&b[i]);
    }
  printf("Enter no. to find ");
  scanf("%d",&c);
  for(int j=0;j<a;j++)
    {
      if(c==b[j])
      {
        l=j;
      }
    }
  printf("element found in %d position",l);
}
