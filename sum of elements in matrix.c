#include<stdio.h>

int main()
{
	 int a[3][3],i,j,n,m,add =0;
	 
	 scanf("%d %d", &n, &m);
	 
	 for(i=0;i<n;i++)
	 {
	 	  for(j=0;j<m;j++)
	 	     scanf("%d",&a[i][j]);
     }
	 
	 for(i=0;i<n;i++)
	 {
	 	  for(j=0;j<m;j++)
	 	     add = add + a[i][j];
	 }
	 
	 printf("%d ", add);
	 
	 return 0;
}

