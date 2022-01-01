#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[20],c=0,n,i,j,p,flag=0;
	
	cin>>n;
	for(i = 0;i<n;i++)
     cin>>a[i];
     
     for( i = 1;i<n-1;i++)
     {
     	 c=0;
     	 for(j = 0;j<i;j++)
     	 {
     	 	if( a[j] < a[i])
     	 	  c++;
		 }
		 
		 if( c == i)
		 {
		 	c++;
		 	 for(p = i+1;p<n;p++)
		 	 {
		 	 	if( a[i] < a[p] )
		 	 	 c++;
			  }
		 }
		 if( c == n)
		 {
		 	flag = 1;
		 	cout<<i;
		 	break;
		 }
	 }
	 
	 if(flag == 0)
       cout<<"-1";
 
}
