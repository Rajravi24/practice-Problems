#include<iostream>

using namespace std;

int main()
{
	int a[10],b[10],n,temp,k=0;
	
	cin>>n;
	for(int i = 0;i<n;i++)
	   cin>>a[i];
	   
	   for(int j = 0;j<n;j++)
	   {
	   for(int i = 0;i<n-1;i++)
	   {
	   	  if( a[i+1] < a[i] )
	   	    {
	   	    	temp = a[i+1];
	   	    	a[i+1] = a[i];
	   	    	a[i] = temp;
			}
		}
	}
			
		for(int i = n - 1;i>=0;i--)
		{
			if( a[i]%2 != 0 )
			{
				b[k] = a[i];
				k++;
			}
		}
		for(int i = 0;i<n;i++)
		{
			if( a[i]%2 == 0 )
			{
				b[k] = a[i];
				k++;
			}
		}
		for(int i = 0;i<k;i++)
		 cout<<b[i]<<" ";

}
