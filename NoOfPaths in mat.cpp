#include<iostream>

using namespace std;

int main()
{
	int m,n,a[5][5]={0};
	
	cin>>m>>n;
	for(int i = 0;i<m;i++)
	  a[0][i] = 1;
	for(int i = 0;i<n;i++)
	  a[i][0] = 1;
	  
	  for(int i = 1;i<m;i++)
	  {
	  	for(int j = 1;j<n;j++)
	  	{
	  		a[i][j] = a[i-1][j] + a[i][j-1];
		  }
	  }
	  cout<<a[m-1][n-1];
}
