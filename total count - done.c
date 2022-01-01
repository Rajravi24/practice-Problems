#include<stdio.h>

int main()
{
	int a[10],n,sum=0,d=0,r=0,i,k;
	
	scanf("%d",&n);
	
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	
	 for(i=0;i<n;i++)
	 {
	
	 	 d = a[i]/k;
	 	 r = a[i]%k;
	 	  
	 
	 if( r != 0)
	    sum = sum + d + 1;
	    else
	     sum = sum +d;
	 }
	 
	 
	 
	 printf("\n %d", sum );
	 
	 return 0;
}
