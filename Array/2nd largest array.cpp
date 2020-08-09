#include<stdio.h>

int main()
{
	int i, n, arr[10], largest , second_largest;
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	largest = arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
		}
	}
	
	second_largest = arr[1];
	for(i=0;i<n;i++)
	{
		if(arr[i] != largest)
		{
			if(arr[i]>second_largest)
			{
				second_largest = arr[i];
			}
		}
	}
	
	printf("Largest number : %d\n",largest);
	printf("Second largest : %d\n",second_largest);
	return 0;
}
