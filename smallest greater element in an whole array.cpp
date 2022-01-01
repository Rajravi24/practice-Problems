#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20],b[20],c[20],n,flag=0,q,k,temp;
	cin>>n;
	for(int i = 0;i<n;i++)
	 cin>>a[i];
	for(int i = 0;i<n;i++) 
	     b[i] = a[i];
    
	 
	 
	 for(int i=0;i<n;i++)
    {
	 	for(int j = 0;j<n-1;j++)
	 	{
	 		if( b[j+1] < b[j] )
	 		{
	 		 temp = b[j];
	 		 b[j] = b[j+1];
	 		 b[j+1] = temp;
	 	   }
		 }
	}
	b[n]='_';
	 	
	 
	 for(int i = 0;i<n;i++)
	  {
	  	 k = a[i];
	  	 for(int j = 0;j<n;j++)
	  	 {
	  	 	if(b[j] == k )
	  	 	{
	  	 		c[i] = b[j+1];
			}
		}
	  }
	  
	  
	 free(b);
	  for(int i = 0;i<n;i++)
	  {
	  	if( c[i] != '_')
	  	  cout<<c[i]<<" ";
	  	 else
		  printf("%c ",c[i]);
	  }
}
