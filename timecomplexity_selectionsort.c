#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selection_sort(int arr[], int n)
{
 int i, j, min_index, temp;
 for (i = 0; i < n - 1; i++)
 {
  min_index = i;
  for (j = i + 1; j < n; j++)
  {
   if (arr[j] < arr[min_index])
   {
    min_index = j;
   }
  }
  temp = arr[i];
  arr[i] = arr[min_index];
  arr[min_index] = temp;
 }
}
int main()
{
int n, i;
printf("Enter the size of array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]);
 }
clock_t start_time = clock();
selection_sort(arr, n);
clock_t end_time = clock();
double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
printf("Sorted array:\n");
for (i = 0; i < n; i++)
 {
   printf("%d ", arr[i]);
 }
printf("\nTime taken: %f seconds\n", time_taken);
printf("Number of comparisons: %d\n", (n*(n-1))/2);
printf("Number of swaps: %d\n", n-1);
return 0;
}