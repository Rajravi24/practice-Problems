#include<bits/stdc++.h>
using namespace std;

int hundred( int n)
{
	int hund=1;
	while(n!=0)
	{
		hund = hund * 10;
		n--;
	}
	return hund;
}


int arrtonum(int a[],int n)
{
	int k,num=0,i=0,hund;
	hund = hundred(n-1);
	
	while(hund != 0)
	{
		num = num + hund * a[i];
		i++;
		hund = hund/10;
	}
	return num;
}

int main()
{
	int a[10],b[10],n,m,num1,num2,result=0;
	cin>>n;
	for(int i = 0;i<n;i++)
	  cin>>a[i];
	cin>>m;
    for(int i = 0;i<m;i++)
	  cin>>b[i];	    
	  
	  num1 = arrtonum(a,n);
	  num2 = arrtonum(b,m);
	  result = num1 + num2;
	  
	  cout<<result;
}
