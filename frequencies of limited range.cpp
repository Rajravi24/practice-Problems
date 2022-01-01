#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[10],n,max=0,k,c;
	cin>>n;
	for(int i = 0;i<n;i++)
	cin>> a[i];
	
	for(int i = 0;i<n;i++)
	 {
	 	if(max < a[i])
	 	 max = a[i];
	 }
	 
	 for(int i = 1;i<=max;i++)
	 {
	 	 k = i;
	 	 c = 0;
	 	 for(int j = 0;j<n;j++)
	 	 {
	 	 	if( k == a[j])
	 	 	  c++;
		  }
		  
		  cout<<c<<" ";
	 }
}
