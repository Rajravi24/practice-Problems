#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[20],n,first,second;
	cin>>n;
	for(int i = 0;i<n;i++)
	 cin>>a[i];
	 
	 first = a[0];
	 
	 for(int i = 1;i<n;i++)
	 {
	 	 if( first < a[i] )
	 	 {
	 	 	second = first;
	 	 	first = a[i];
		  }
	 }
	 
	 cout<<second;
}
