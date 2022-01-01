#include<bits/stdc++.h>
using namespace std;

int main()
{
	 int a[20],n,k,m,max=0;
	 
	 cin>>k;
	 cin>>n;
	 for(int i = 0;i<n;i++ )
	   cin>>a[i];
	  
	  m = k;
	   
	   for(int i = 0;i<=n-k;i++ )
	   {
	   	     max= 0;
	   	  for(int j = i ;j<m ; j++  )
	   	  {
	   	  	  if( max < a[j] )
	   	  	    max = a[j];
		  }
		  m++;
		  cout<<max<<" ";
	   }
	   
	   
	   if(n<k)
	    cout<<" Array must be larger than subarray";
}
