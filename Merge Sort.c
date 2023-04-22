#include<stdio.h>

void MergeSort(int *arr, int si, int ei)
{
    if(si >= ei) return;
    int mid = si+ (ei-si)/2; //(si + ei)/2
    MergeSort(arr, si, mid);
    MergeSort(arr, mid+1, ei);
    merge(arr, si, mid, ei);
}

void merge(int *arr, int si, int mid, int ei)
{
    int i, j, k;
    i = si;
    j = mid+1;
    k = si;
    int temp[(ei-si)+1];

    while(i <= mid && j<= ei)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j<=ei)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i=si; i<=ei; i++)
        arr[i] = temp[i];

    return;
}

int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter value : ");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    MergeSort(arr,0,n-1);

    printf("sorted   : ");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

    return 0;
}


