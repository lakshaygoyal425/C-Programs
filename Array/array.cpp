#include<stdio.h>

int main()
{
	int i, n, arr[5];
	printf("Enter the no of elements in array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n The array elements are : ");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
}
