#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//void swap( char &str[//], int i ,int j);

void swap( char *str, int i , int j)
{
	char temp;
	temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}


int main()
{
	char str[20];
	int i,j,n;
	cin>>str;
	n = strlen(str);
	
	i = 0;
	j = n-1;
	
	while( i!=j)
	{
		if(  ( str[i] >= 'a' && str[i] <= 'z')  &&  ( str[j] >= 'a' &&  str[j]<='z')  )
		{
			swap( str,i,j);
			i++;
			j--;
		}
		else if( ( str[j] >= 'a' &&  str[j]<='z'))
		{
			 i++;
			 swap(str,i,j);
			 i++;
			 j--;
		}
		else if( ( str[i] >= 'a' && str[i] <= 'z') )
		{
			 j--;
			 swap(str,i,j);
			 i++;
			 j--;
		}
	}
	puts(str);
}
