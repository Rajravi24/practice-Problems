#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10],b[10],n,m,temp;
	
	cin>>n;
	for(int i = 0;i<n;i++)
	cin>>a[i];
	cin>>m;
	for(int i = 0;i<m;i++)
	cin>>b[i];
	
	for(int j = 0;j<m;j++)
	{
		for(int i = 0;i<n;i++)
		{
			if( b[j] < a[i])
			{
				temp = b[j];
				b[j] = a[i];
				a[i] = temp;
			}
		}
	}
	
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n-1;j++)
		{
			if(b[i+1] < b[i] )
			{
				temp = b[i+1];
				b[i+1] = b[i];
				b[i] = temp;
			}
		}
	}
	
	for(int i = 0;i<n;i++)
	cout<<a[i]<<" ";
	for(int i = 0;i<m;i++)
	cout<<b[i]<<" ";
}
