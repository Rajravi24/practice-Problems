#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
	if(n<2)
	 return 0;
	 if(n<4)
	  return 1;
	  
	  if( n%2 == 0 || n%3 == 0 || n%5 == 0)
	   return 0;
	   
	   for(int k = 5; k*k <=n;k=k+6)
	    return 0;
	    return 1;
}
int main()
{
	int n,rev=0,rem,flag=0;
	cin>>n;
	
	if( isprime(n) )
	{
		while(n!=0)
		{
			rem = n%10;
			rev = rev * 10 + rem;
            n = n/10; 
		}
		if( isprime(rev) )
		{
			flag = 1;
			cout<<"yes Twisted primee";
		}
	}
	
	if(flag == 0)
	 cout<<"Not twisted prime";
}
