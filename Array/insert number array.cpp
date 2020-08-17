#include<stdio.h>

int main()
{
	int i, n, number, position, arr[10];
	printf("Enter no of elements in array : ");
	scanf("%d",&n);
	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter number to be inserted : \n");
	scanf("%d",&number);
	printf("Enter the position to be inserted : \n");
	scanf("%d",&position);
	for(i=n-1;i>=position;i--)
	{
		arr[i+1] = arr[i];
	}
	
	arr[position] = number;
	n = n+1;
	printf("Array after insertion : \n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = %d\n",i ,arr[i]);
	}
	return 0;
}
