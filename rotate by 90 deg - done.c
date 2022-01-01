#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	
	int a[n][n], b[n][n],i,j,k,m;
	
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		scanf("%d", &a[i][j]);
		 }
	 }
	
	k=n-1;
	m = n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		//	b[i][j] = a[j][k];        // 90 deg
			b[i][j] = a[k][m];          //180 deg
			m--;
		}
		
		k--;
		m = n-1;
	}
	
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d  ", b[i][j]);
		 }
		 printf("\n");
	 }
	 
	 return 0;
}
