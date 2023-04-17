#include<stdio.h>

void Insertion_Sort(int *arr, int n); //n = arr size

int main()
{
    int N, i;
    printf("Enter Array Size : ");
    scanf("%d",&N);

    int Arr[N];
    printf("Enter Your Array : ");
    for(i=0; i<N; i++)
        scanf("%d",&Arr[i]);
    printf("\n\n");

    Insertion_Sort(Arr, N);

    return 0;
}

void Insertion_Sort(int *arr, int n)
{
    int i, j, temp;
    for(i=1; i<n; i++)
    {
        temp = arr[i];
        for(j=i-1; j>=0; j--)
        {
            if(arr[j] > temp)
                arr[j+1] = arr[j];
            else break;
        }
        arr[j+1] = temp;
    }

    printf("Sorted Array is : ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
}
