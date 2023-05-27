#include<stdio.h>

void Merge_Sort(int *arr, int si, int ei);
void Merge(int *arr, int si, int mid, int ei);

int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter value : ");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    Merge_Sort(arr,0,n-1);

    printf("sorted   : ");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

    return 0;
}

void Merge_Sort(int *arr, int si, int ei)
{
    if(si >= ei)
    {
        return;
    }

    int mid = si+ (ei-si)/2; //(si + ei)/2

    Merge_Sort(arr, si, mid);
    Merge_Sort(arr, mid+1, ei);
    Merge(arr, si, mid, ei);
}

//Function for merge
void Merge(int *arr, int si, int mid, int ei)
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
