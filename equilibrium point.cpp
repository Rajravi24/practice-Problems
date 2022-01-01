#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[20],n,i,j,k,sum1,sum2,flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   for(i = 1;i<n-1;i++ )
	   {
	   	   sum1 = 0 , sum2 = 0;
	   	   
	   	    for(j=0;j<i;j++)
	   	        sum1 = 	sum1 + a[j];
			
			for( k = i+1;k<n;k++ )
				sum2 = sum2 + a[k];
		
			if(sum1 == sum2)
			{
				flag = 1;
				cout<<i+1;
				break;
			}
			
	   }
	   s
	   if(flag == 0)
	   cout<<"there is no such index is there";
}
