#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	 string str;
	 int i,j,k,n,index,count,max = 0;
	 cin>>str;
	 n = str.length();
	 
	 for(i = 0;i<n;i++)
	 {
	 	cout<<"hai";
	 	 if( str[i] != '*')
	 	 {
	 	 	index = 0;
	 	 	count = 0;
	 	     for(j = i+1;j<n;j++)
			  {
			     if( str[j] == str[i] )
				 {
				 	  str[j] = '*';
				 	   index = j;
				 }	
			  }
			  k = i;
			  while( k!=index)
			  {
			  	count++;
			  	k++;
			  }
			  if(max < count)  
			  max = count;	
		 }
	 }
	 cout<<max;
}
