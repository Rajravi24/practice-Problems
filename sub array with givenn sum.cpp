#include<bits/stdc++.h>
using namespace std;

int main()
{
	 int a[20],n,sum=0,x,flag=0;
	 cin>>n;
	 cin>>x;
	 for(int i = 0;i<n;i++)
	  cin>>a[i];
	  
	  for(int i = 0;i<n-1;i++)
	  {
	  	sum=a[i];
	  	for(int j = i+1;j<n;j++)
	  	{
	  		  sum = sum + a[j];
	  		  
	  		  if(sum == x)
	  		  {
	  		  	flag=1;
	  		  	   cout<<"yes found"<<endl<<i<<"  "<<j<<endl;
	  		  	   break;
				}
		  }
		  
	  }
	  if(flag == 0)
		   cout<<"Not found";
}
