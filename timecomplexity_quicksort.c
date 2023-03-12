#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
int partition(int arr[], int low, int high)
{
int pivot = arr[high];
int i = (low - 1);
for(int j = low; j <= high - 1; j++)
{
if(arr[j] < pivot)
{
i++;
swap(&arr[i], &arr[j]);
}
}
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}
void quicksort(int arr[], int low, int high)
{
if(low < high)
{
int pIndex = partition(arr, low, high);
quicksort(arr, low, pIndex - 1);
quicksort(arr, pIndex + 1, high);
}
}
int main()
{
int size,arr[size];
printf("Enter the size of the array: ");
scanf("%d",&size);
printf("Enter the elements of the array:");
for(int i = 0; i < size; i++)
scanf("%d",&arr[i]);
clock_t t1,t2;
t1 = clock();
quicksort(arr, 0, size - 1);
t2 = clock();
double time = (double)(t2 - t1)/CLOCKS_PER_SEC;
printf("Sorted array is: ");
for(int i = 0; i < size; i++)
printf("%d ", arr[i]);
printf("\nTime taken by QuickSort is %lf seconds", time);
return 0;
}