#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
     key = arr[i];
     j = i-1;
     while (j >= 0 && arr[j] > key)
      {
        arr[j+1] = arr[j];
        j = j-1;
      }
    arr[j+1] = key;
    }
}
int main()
{
int arr[100], i, n;
clock_t start, end;
double time_taken;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\nEnter %d integers:\n", n);
for(i = 0; i < n; i++)
scanf("%d", &arr[i]);
start = clock();
insertionSort(arr, n);
end = clock();
time_taken = ((double) (end - start)) / CLOCKS_PER_SEC; 
printf("\nSorted array is:\n");
for(i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\nTime taken: %f seconds\n", time_taken);
return 0;
}