#include<bits/stdc++.h>
using namespace std;

int count( int n )
{
	int count=0;
	while(n!=0)
	{
		 count++;
		 n = n/10;
	}
	return count;
}

int main()
{
	int a[20],n,hund1,hund2,num1,num2,temp,k,l;
	cin>>n;
	for(int i = 0;i<n;i++)
	  cin>>a[i];
	  
	  for(int i = 0;i<n;i++)
	  {
	  	 for(int j = i+1;j<n;j++)
	  	 {
	  	 	  hund1 = 1;
	  	 	  hund2 = 1;
	  	 	  
	  	 	  k = count( a[j]) ;
	  	 	  
	  	 	    while(k!=0)
	  	 	    {
	  	 	    	 hund1 = hund1 * 10;
	  	 	    	 k--;
				}
			 num1 = a[i] * hund1 + a[j];	
	  	 	 
	  	 	   l = count( a[i] );
	  	 	    
	  	 	     while(l!=0)
	  	 	     {
	  	 	     	hund2 = hund2 * 10;
	  	 	     	l--;
				 }
			  num2 =  a[j] * hund2 + a[i];
			  
			  if(num2>num1)
			   {
			   	  temp = a[i];
			   	  a[i] = a[j];
			   	  a[j] = temp;
				} 
		 }
	  }
	  
	  for(int i = 0;i<n;i++)
	   cout<<a[i];
}
