//program to generate all combinations of 1,2 and 3//
#include<stdio.h>
void main()
{
  int i=1,j=1,k=1;
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
    {
      for(k=1;k<=3;k++)
      {
        if(i!=j && i!=k && j!=k)
        {
          printf("%d%d%d\n",i,j,k);
        }
      }
    }
  }
}
