#include<stdio.h>


void removeduplicate(int arr[] , int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				arr[j]= '*';
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]!= '*')
		printf("%d ", arr[i]);
	}
	

}
