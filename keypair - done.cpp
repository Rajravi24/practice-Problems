#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[10],x;
	
	cin>>n;
	for(int i = 0;i<n;i++)
	  cin>>a[i];
	  
	  cin>>x;
	  int flag;
	  for(int i = 0;i<n;i++)
	  {
	  	flag = 0;
	  	for(int j = i+1;j<n;j++)
	  	{
	  		if(a[i] + a[j] == x)
	  		 {
	  		 	flag = 1;
	  		 	cout<<"yes";
			   }
		  }
		  if(flag == 1)
		   break;
	  }
	  if(flag == 0)
	    cout<<"No";
}
