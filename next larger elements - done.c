#include<stdio.h>

int main()
{
  int a[10],n,i,j,flag;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
  	
	for(i=0;i<n;i++)
	{
		flag = 0;
		for(j=i+1;j<n;j++)
		
		{
			if(a[i]<a[j])
			 {
			 	printf("%d ",a[j]);
			 	flag = 1;
			 	break;
			 }
			 
			
		}
		if( flag == 0)
		  printf("-1");
	}
}
