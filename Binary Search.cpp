/*
Binary Search

This is the Array : -3 9 22 33 55 77 91
             Index : 0 1  2  3  4  5  6

Now Enter a Number to Search : 33

33 Found at Position : 3

*/

#include<iostream>
using namespace std;

Binary_Search(int *arr, int n, int key)
{
    int si = 0;
    int ei = n-1;
    int mid;

    while(ei >= si)
    {
        mid = si + (ei-si)/2;

        if(arr[mid] == key)
        {
            return mid;
        }

        else if(arr[mid] < key)
        {
            si = mid + 1;
        }

        else if(arr[mid] > key)
        {
            ei = mid - 1;
        }
    }

    return -1;
}

int main()
{
    //for user input
//    int n;
//    cout<<"Enter Array Elements Number : ";
//    cin<< n;
//
//    int arr[n];
//    cout<<"Enter values for Array : ";
//    for(int i=0; i<n; i++)
//        cin<< arr[i];

    int arr[] = {-3,9,22,33,55,77,91};
    int n = sizeof(arr)/sizeof(int);

    cout<<"This is the Array : ";
    for(int i=0; i<n; i++)
        cout<< arr[i] << " ";

    int key;
    cout<<"\nNow Enter a Number to Search : ";
    cin>> key;

    int result = Binary_Search(arr, n, key);

    if(result != -1)
    {
        cout<<key<<" Found at Position : "<<result<<endl;
    }
    else cout<<key<<" Not Found"<<endl;

    return 0;
}
