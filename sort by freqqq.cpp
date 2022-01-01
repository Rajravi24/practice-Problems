#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a[10] , b[10][2],n;
	
	cout<<"enter the N"<<endl;
	cin>>n;
	for(int i = 0;i<n;i++)
	  cin>> a[i];
	  
	  int num,count,x=0,y=0;
	  
	  for(int i=0;i<n;i++)
	  {
	  	if(a[i] != '*')
	  	{
		       num = a[i];
	  	       count = 0;
	  	  
	  	       for(int j=0; j<=n;j++)
	  	      {
	  	         	 if(num == a[j])
	  	     	  {
	  	  	  	
	  	  	        	count++;
	  	  	        	a[j] = '*';
	  	  	      }
			  }
			  
			  b[x][y] = num;
			  y++;
			  b[x][y] = count;
			  
			  x++;
			  y=0;
			  
	    }
	}
	

	
	
}
