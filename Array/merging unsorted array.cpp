#include<stdio.h>

int main()
{
	int i, n1, n2, m, index=0, arr1[10], arr2[10], arr3[10];
	printf("Enter no of elements in Array1 : ");
	scanf("%d",&n1);
	printf("\nEnter elements of array1 : ");
	for(i=0;i<n1;i++)
	{
		printf("\n arr1[%d] = ", i);
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter no of elements in Array2 : ");
	scanf("%d",&n2);
	printf("\nEnter elements of array2 : ");
	for(i=0;i<n2;i++)
	{
		printf("\n arr2[%d] = ", i);
		scanf("%d",&arr2[i]);
	}
	
	m = n1+n2;
	for(i=0;i<n1;i++)
	{
		arr3[index] = arr1[i];
		index++; 
	}
	
	for(i=0;i<n2;i++)
	{
		arr3[index] = arr2[i];
		index++;
	}
	printf("\n\n The merged array is");
	for(i=0;i<m;i++)
	{
		printf("\n arr[%d] = %d", i, arr3[i]);
	}
		
	return 0;
}
