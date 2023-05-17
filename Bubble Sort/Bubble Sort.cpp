/*
Bubble Sort

Enter Array Size : 5
Enter Your Array : 5 3 8 1 -3

Sorted Array is : -3 1 3 5 8

*/

#include<iostream>
using namespace std;

void Bubble_Sort(int *arr, int n)
{
    int x = 1;

    while(n > x)
    {
        for(int i=0; i<n-x; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
        x++;
    }

    printf("Sorted Array is : ");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

}

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

    Bubble_Sort(Arr, N);


    return 0;
}
