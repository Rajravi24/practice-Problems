//////   elements present in first array will not present in second array   ////////////

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int p[10], q[10], i,j,n,m;
	
   cin>>n;
   for(i = 0;i<n;i++)
      cin>>p[i];
      
    cin>>m;
   for(j = 0;j<m;j++)
   cin>>q[j];   

for(i = 0;i<n;i++)
{
	for(j = 0;j<m;j++)
	{
		if( p[i] == q[j])
		{
			p[i] = 0;
		}
	}
}

for(i=0;i<n;i++)
{
	 if(p[i]!= 0)
	      cout<<p[i]<<" ";  //OUTPUT - 6
} 

return 0;
}
