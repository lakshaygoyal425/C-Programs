#include<stdio.h>

int main()
{
	int i, j, n ,arr[10];
	printf("Enter no of elements in array : ");
	scanf("%d",&n);
	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				printf("%d\n",arr[j]);
			}
		}
	}
}
