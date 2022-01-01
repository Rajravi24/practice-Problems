#include<stdio.h>

int main()
{
   int a[10],odd[10],even[10],j,i,m=0,n,evn,od,t;
   
   //printf("enter the element");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
      for(i=0;i<n;i++)
      {
      	  if(a[i] % 2 == 0)
      	   {
      	   	
      	   	   even[m] = a[i];
      	   	   m++;
      	   	   
			 }
			 else
			 {
			 	 
			    odd[n] = a[i];
			    n++;
			   
			     
			 }
	  }
	  
	  
	  evn = sizeof(even)/ sizeof(even[0]);
	  od = sizeof(odd)/ sizeof(odd[0]);
	  
	  for(i=0;i<n;i++)
	  {
	   for(j=i+1;j<n;j++)
	     {

	     	if(odd[i]<odd[j])
	     	 {
	     	 	t=odd[i];
	     	 	odd[i]= odd[j];
	     	 	odd[j]=t;
			  }
		 }
	    
    }    
    
    for(i=0;i<n;i++)
      printf("%d ",odd[i]);
      
      
      
      for(i=0;i<m;i++)
	  {
	   for(j=i+1;j<m;j++)
	     {
	     	if(even[i]>even[j])
	     	 {
	     	 	t=even[i];
	     	 	even[i]= even[j];
	     	 	even[j]=t;
			  }
		 }
	    
    }    
    
    for(i=0;i<m;i++)
      printf("%d ",even[i]);
      
      
      
      return 0 ;
  }
