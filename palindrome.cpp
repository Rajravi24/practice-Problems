#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,rem,revint=0,k;
	cin>>n;
	k = n;
	while(n!=0)
	{
		rem = n%10;
		revint = revint * 10 + rem;
		n = n/10;
	}
	if( revint == k)
	 cout<<"Yes Palindrome";
	else
	 cout<<"Not Palindrime";
	 
	  
}
