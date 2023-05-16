/*
Selection Sort Efficient way
*/

#include<iostream>
using namespace std;

void Selection_Sort(int *arr, int n) //n = Array Size
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Array is : ";
    for(i=0; i<n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int N, i;
    cout<<"Enter Array Size : ";
    cin >> N;

    int Arr[N];
    cout << "Enter Your Array : ";
    for(i=0; i<N; i++)
        cin >> Arr[i];
    cout<< endl;

    Selection_Sort(Arr, N);

    return 0;
}
