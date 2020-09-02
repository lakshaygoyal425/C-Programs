#include<stdio.h>

int main()
{
	int arr1[10], arr2[10], arr3[10], i, n1, n2;
	int m , index = 0;
	int index_first = 0, index_second = 0;
	
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
	while(index_first < n1 && index_second < n2)
	{
		if(arr1[index_first] < arr2[index_second])
		{
			arr3[index] = arr1[index_first];
			index_first++;
		}
		
		else
		{
			arr3[index] = arr2[index_second];
			index_second++;
		}
		index++;
	}
	
	// if elements of the first array are over and the second array has some elements
	if(index_first == n1)
	{
		while(index_second < n2)
		{
			arr3[index] = arr2[index_second];
			index_second++;
			index++;
		}
	}
	
	// if elements of the second array are over and the first array has some elements
	else if(index_second == n2)
	{
		while(index_first < n1)
		{
			arr3[index] = arr1[index_first];
			index_first++;
			index++;
		}
	}
	
	printf("\n\n The merged array is");
	for(i=0;i<m;i++)
	{
		printf("\n arr[%d] = %d", i, arr3[i]);
	}
	
	return 0;
}
