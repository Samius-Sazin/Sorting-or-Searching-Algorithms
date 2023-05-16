#include<stdio.h>

void Selection_Sort(int *arr, int n); //n = Array Size

int main()
{
    int N, i;
    printf("Enter Array Size : ");
    scanf("%d",&N);

    int Arr[N];
    printf("Enter Your Array : ");
    for(i=0; i<N; i++)
        scanf("%d",&Arr[i]);
    printf("\n");

    Selection_Sort(Arr, N);

    return 0;
}

void Selection_Sort(int *arr, int n)
{
    int i, j, temp, min;
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
            if(arr[min] > arr[j])
                min = j;

        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

    }
    printf("Sorted Array is : ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
}

/*
void Selection_Sort(int *arr, int n)
{
    int i, j, temp, min, index;
    for(i=0; i<n-1; i++)
    {
        min = arr[i];
        for(j=i; j<n; j++)
        {
            if(min >= arr[j])
            {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }
    printf("Sorted Array is : ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
}
*/
