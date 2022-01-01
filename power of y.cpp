#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x , y , n = 1, flag = 0;
	cin>>x>>y;
	
     for(int i = 0;i<10;i++)
     {
     	  n = n * x;
     	  
     	  if( n == y)
     	  {
     	  	cout<<"1";
     	  	flag = 1;
     	  	break;
		   }
		   else
		    flag = 0;
		   
	 }
	 if(flag == 0)
	  cout<<"-1";
}
