#include<stdio.h>

	int main()
	{
        int i,j,k,m,n,a[10],b[10],c[10];
		
		printf("enter 1st array n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  scanf("%d",&a[i]);
		  
		  printf("enter 2st array m");
		scanf("%d",&m);
		for(i=0;i<m;i++)
		  scanf("%d",&b[i]);
		  

		for(i=0,j=0,k=0; i<n && j<m;)
		{
			 if( a[i]<b[j])
			 {
			 	c[k]=a[i];
			 	i++;
			 	k++;
			 }
			 else if(a[i]>b[j])
			 {
			 	c[k]=b[j];
			 	j++;
			 	k++;
	  	    }
			 	else
			 	 {
			 	 	c[k]=a[i];
			 	 	  k++;
			 	 	  i++;
			 	 	  j++;
				  }
	  }
			 
			 if(i<n)
			 {
			 	 for(;i<n;i++)
			 	 {
			 	 	c[k]=a[i];
			 	 	k++;
				  }
			}
				  else
				  {
				  	for(;j<m;j++)
				  	{
				  		c[k] = b[j];
				  		 k++;
					  }
				  }
		
		printf("%d",k);	
	///	for(i=0;i<k;i++)
	//	printf("%d ",c[i]);
		
		return 0;	 
		
		
}


/*  get the array a of n elemenets n=5
   
    get the array  b of m elements m = 3;
    
    creat a empty array c[];
    
    i is for a, j is for b, k is for c arrays resply,
    
    1. if a[1] < b[1]
          put c[1] = a[1];
             i++;
             k++;
        else if a[1]> b[1];
		  put c[1] = b[1];
		  j++;
		  k++;
		 else
		     c[1]= a[1];
		     i++;
		     j++;
		     k++;
		     
 and, if n and m becomes same, if aarrays elements are remaining means	
 
 put them in c array. and finnaly print you can get the requied output........*/	     
		    
