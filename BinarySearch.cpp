//Binary Search - In this array must be sorted.
#include<iostream>
using namespace std;

int BinarySearch(int a[],int n,int key)
{
    int s = 0;
    int e = n;
    int mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>key)
            e = mid-1;
        else
            s = mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cout<<"Enter "<<i+1<<" th element=";
        cin>>a[i];
    }
    int key;
    cout<<"Enter no. you want to search for:";
    cin>>key;
    cout<<BinarySearch(a,n,key);
    return 0;
}