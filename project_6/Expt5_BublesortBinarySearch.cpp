#include <iostream>
using namespace std;
int *bubble_sort(int arr[], int size)
{
    int i, j;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}
int BinarySearch (int n[], int low, int high, int val)
{
    int mid;
    if(high >= low)
    {
        mid = (low + high)/2;
        if(n[mid] == val)
        {
            return mid;
        }
        else if(n[mid] < val)
        {
            return BinarySearch(n, mid+1, high, val);
        }
        else
        {
            return BinarySearch(n, low, mid-1, val);
        }
    }
    return -1;
}
int main()
{
    int s, i;
    cout<<"\n\nenter the number of elements in the array:";
    cin>>s;
    int a[s];
    cout<<"enter the elements of the array:"<<endl;
    for(i=0; i<s; i++)
    {
        cin>>a[i];
    }
    int* srtArr = bubble_sort(a, s);
    cout<<"\nsorted array:"<<endl;
    for(i=0; i<s; i++)
    {
        cout<<srtArr[i]<<" ";
    }
    int l= 0, pos, elem;
    cout<<"\n\nenter the element to be search: ";
    cin>>elem;
    pos = BinarySearch(srtArr, l, s, elem);
    if (pos == -1)
    {
        cout<<elem<<" was not found";
    }
    else
    {
        cout<<"\n";
        cout<<elem<<" was found at position "<<pos<<endl;
    }
    return 0;
}