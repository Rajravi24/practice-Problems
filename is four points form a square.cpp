#include<bits/stdc++.h>
using namespace std;

int distance( int x1, int y1, int x2 , int y2 )
{
	int p,q,d;
	p = (x2 - x1) * (x2 - x1);
	q = (y2 - y1) * (y2 - y1);
	
	d = sqrt(p + q);
	return d;
}

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4,d1,d2;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	
	d1 = distance( x1,y1,x2,y2 );
	d2 = distance( x3,y3,x4,y4 );
	
	if( d1 == d2)
	cout<<"YES";
	else
	cout<<"NO";
}
