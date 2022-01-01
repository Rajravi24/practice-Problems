#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j,a[20],n,temp;
	
	cin>>n;
	for(i = 0;i<n;i++ )
	cin>>a[i];
	
	for(i = 0;i<n-1;i++)
	{
		if( a[i] == a[i+1] )
		{
			 a[i] = a[i] + a[i+1];
			 a[i+1] = 0;
		}
	}
	
	for(i = 0;i<n;i++ )
	{
		  if( a[i] == 0)
		  {
		  	 j = i;
		  	  while( a[j] == 0 && j<=n)
		  	    j++;
		  	    
		  	    if(j<n)
		  	    {
		  	    	temp = a[i];
		  	    	a[i] = a[j];
		  	    	a[j] = temp;
				  }
		  }
	}
	
	for(i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
