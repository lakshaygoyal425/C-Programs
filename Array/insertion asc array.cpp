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
	
	printf("\nEnter number to be inserted : ");
	scanf("%d",&number);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>number)
		{
			for(j=n-1;j>=i;j--)
			{
				arr[j+1] = arr[j];
			}
			arr[i] = number;
			break;
		}
	}
	
	n = n+1;
	printf("Array after insertion : ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d ",i,arr[i]);
	}
	return 0;
}
