#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int count = 0,k,c,n;
	cin>>str;
	cin>>k;
	n = str.length();
	for(int i = 0;i<n;i++)
	{
		if(str[i] != '*')
		{
		c = 1;
		for(int j = i+1;j<n;j++)
		{
			 if(str[i] == str[j])
			 {
			 	c++;
			 	str[j] = '*';
			 }
		}
		if( c >= k)
		 count++;
	}
}
	
	cout<<count;
}
