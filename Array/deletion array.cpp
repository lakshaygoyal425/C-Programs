#include<stdio.h>

int main()
{
	int i, j, n, arr[10], position;
	printf("Enter no of elements in array : ");
	scanf("%d",&n);
	printf("\nEnter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the position from which the number has to be deleted : ");
	scanf("%d",&position);
	
	for(i=position;i<n-1;i++)
	{
		arr[i] = arr[i+1];
	}
	
	n--;
	printf("Array after deleted : ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d",i,arr[i]);
	}
	return 0;
}
