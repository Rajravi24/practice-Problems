#include<bits/stdc++.h>
using namespace std;

int main()
{
	 char str[20];
	 int n,max=0,index,count,k,i,j,charc;
	 gets(str);
	 
	 n = strlen(str);
	 //cout<<n<<endl;
	 for(i = 0;i<n;i++ )
	 {
	 	if( str[i] != '*')
	 	{  
	 	charc = str[i];
	 		count = 0;
	 		index = i;
	 		for(j = i+1;j<n;j++ )
	 		{
	 			if( str[j] == charc )
	 			  {
	 			  	str[j] = '*';
	 			  	  index = j;
				   }
			 }
			 k = i;
			 while( k != index)
			  {
			  	 count++;
			  	 k++;
			  }
			  count = count - 1;
			  
			  if( max < count)
			      max = count;
		 }
	 }
	 
	 cout<<max;
}

