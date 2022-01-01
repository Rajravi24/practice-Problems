#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10],n,x,count=0;
	cin>>n;
	for(int i = 0;i<n;i++)
	  cin>>a[i];
	 cin>>x;
	 
	 for(int i = 0; i<n;i++)
	 {
	 	 if( x == a[i])
	 	 count ++;
	  } 
	  if(count!=0)
	    cout<<count;
	  else
	    cout<<"-1";  
}
