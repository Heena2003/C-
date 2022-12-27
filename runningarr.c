#include <stdio.h>
findprefixsum(i,ps[],arr)
{
    ps[0] = arr[0];
    for(i=0;i<size;i++)
    {
        ps[i]=ps[i-1]+[i];
    }
}
int main()
{
    int arr[100], size, i, sum = 0;
    printf("Enter array size\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
          sum = sum + arr[i];
    printf("Sum of the array = %d\n",sum);
    return 0;
    findprefixsum(i,ps,arr)

}