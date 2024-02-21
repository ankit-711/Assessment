#include<stdio.h>

int main()
{
	printf("\t\t\t\tMatrix Multiplication");
  int a[2][2],b[2][2],m[2][2];
  int i,j,t,k;
  
  printf("\n----------Matrix: 1-----------\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
       printf("Enter elements : ");
       scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n");
  }

    printf("\n----------Matrix: 2-----------\n");

  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
       printf("Enter elements : ");
       scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
       printf("\t%d",b[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      t=0;
      for(k=0;k<2;k++)
      {
         t+=(a[i][k]*b[k][j]);
      }
      m[i][j]=t;
    }
  }
  printf("\n----------Result : Multiplication Matrix-----------\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
       printf("\t%d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
