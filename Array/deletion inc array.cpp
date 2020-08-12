#include<stdio.h>

int main()
{
	int i, j, n, arr[10], number;
	printf("Enter no of elements in array : ");
	scanf("%d",&n);
	printf("\nEnter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter number to be deleted : ");
	scanf("%d",&number);
	
	for(i=0;i<n;i++)
	{
		if(arr[i] == number)
		{
			for(j=i;j<n-1;j++)
			{
				arr[j] = arr[j+1];
			}
		}
	}
	
	n = n-1;
	
	printf("Array after deletion :");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d",i,arr[i]);
	}
	return 0;
	
}
