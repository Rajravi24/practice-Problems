	#include<stdio.h>

int main()
{
	int arr[10],b[10],p,q,i,j,n,k;
	
	printf("enter the N value");
	scanf("%d", &n);  // get the no of element to be entered
	
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]); // get the element in the array
	  
	  for(i = 0;i<n;i=i+2)
	  {
	  	 k = arr[n-1];
	  	 
	  	 for(j = n - 2;j>=i;j--)
	  	  arr[j+1] = arr[j];
	  	  
	  	  arr[i] = k;
	  }
	  
	  for(i=0;i<n;i++)
	    printf("%d ", arr[i]);
	  
	  return 0;
}
