#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
	if(n<2)
	  return 0;
	 if( n<4)
	  return 1;
	  if( n%2 == 0 || n%3 == 0)
	     return 0;
		 for(int k = 5;k*k <= n;k=k+6)
		  if( n%k == 0 ||  n%(k+2) == 0)
		    return 0;
			
			return 1; 
}

int main()
{
	int n,rem,k,sum=0;
	cin>>n;
	
	while(n!=0)
	{
		rem = n%10;
		k = isprime(rem);
		if(k == 1)
		sum = sum + rem;
		n = n/10;
	}
	cout<<sum;
}
