#include<bits/stdc++.h>
using namespace std;

int s1[10],s2[10];
int top1 = -1, top2 = -1;

void push1(int n)
{
	s1[++top1] = n;
	
}
void push2(int n)
{
	s2[++top2] = n;
}

void pop()
{
	if( top2 != -1)
	{
	     top2--;
	     
	}
	     else
	     {
	     	while( top1>=0)
	     	{
	     		 push2( s1[top1] );
	     		 top1 --;
			 }
			 top2--;
		 }
}

void print()
{
	cout<<"\n";
	if(top2 != -1)
	{
	for(int i = top2;i>=0;i--)
	  cout<<s2[i]<<" ";
   }
	  if(top1 != -1)
	  {
	  for(int i = 0 ; i<=top1;i++)
	  cout<<s1[i]<<" "; 
      }
      cout<<"\n";
}

int main()
{
	int n,k;
	
  label:
  	cout<<"1.Insert:\n2.Delete";
  	cin>>k;
	
	if(k == 1)
	{
		cout<<"enter element"<<endl;
		cin>>n;
		push1(n);
		print();
		goto label;
	}
	else if(k == 2)
	{
		pop();
		print();
		goto label;
	}
	
	
}
