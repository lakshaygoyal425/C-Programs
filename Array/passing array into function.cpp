#include <stdio.h>

void read_array(int arr[], int n);
int find_small(int arr[], int n);

int main()
{
	int num[10], n, smallest;
	printf("\n Enter the size of the array : ");
	scanf("%d", &n);
	read_array(num, n);
	smallest = find_small(num, n);
	printf("\n The smallest number in the array is = %d", smallest);
	
	return 0;
}
void read_array(int arr[10], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("\n arr[%d] = ", i);
	scanf("%d", &arr[i]);
	}
}

int find_small(int arr[10], int n)
{
	int i = 0, small = arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i] < small)
		small = arr[i];
	}
	return small;
}
