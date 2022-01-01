#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10],b[10] ={0},n,k,num,p=0,flag;
	
	cin>>n;
	for(int i = 0;i<n;i++)
	  cin>> a[i];
	  
	  for(int i = 0;i<n;i++)
	  {
	  	 k = a[i];
	  	  while( k!=0)
	  	  {
	  	  	 num = k % 10;
	  	  	 flag = 0;
	  	  	 for(int j = 0;j<=p;j++)
	  	  	 {
	  	  	 	if( b[j] == num)
	  	  	 	   flag = 1;
		     }
		     if(flag == 0)
		      {
		      	b[p] = num;
		      	p++;
			  }
			  k = k/10;
		  }
	  }
	  
	  for(int i = 0;i<p;i++)
	  cout<<b[i]<<" ";
	  
}
