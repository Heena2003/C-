#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubbleSort(int arr[], int n)
 {
 int i, j;
 for(i = 0; i < n-1; i++)
   {
   for(j = 0; j < n-i-1; j++)
    {
     if(arr[j] > arr[j+1])
     {
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
     }
    }
   }
 }
int main()
{
int n, i;
clock_t start, end;
double time_taken;
printf("Enter the number of elements:\n");
scanf("%d", &n);
int arr[n];
printf("The array is:") ;
for(i = 0; i < n; i++)
scanf("%d", & arr[i]);
start = clock(); 
bubbleSort(arr, n);
end = clock();
time_taken = ((double) (end - start)) / CLOCKS_PER_SEC; 
printf("Sorted array is: ");
for(i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\nTime taken: %f seconds\n", time_taken);
return 0;
}