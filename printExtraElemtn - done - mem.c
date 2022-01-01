#include<stdio.h>
#include<conio.h>

int main()
{
	int start = 0, end,n, index, a[10],b[10],i,mid;
	printf("enter the n Elementss");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n-1;i++) 
	  scanf("%d",&b[i]);
	  
	  end = n -1;
	  
while(start<=end)
{
	mid = (start+end)/2;
	if( a[mid] == b[mid])
	{
		start = mid+1;
	}
	else
	  {
	  	index = mid;
	  	end = mid - 1;
	  }
}
	  printf("%d is extra element index", a[index]);
	  
	  return 0;
}

/*      do while loop from starting index to end index;
        
        find the middle element of array a;
        
        if middle element of both arrays a and b are equal means,
                     -> set starting index to be midle + 1;
             
			 else
			     set index as middle index;
				 and, end as middle - 1;
				 
	* after completion of while loop,
	            the extra index element will be stored in the VARIABLE index , print it. */  
   
