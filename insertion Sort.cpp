//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,34,42,4,23};
    int n=sizeof(arr)/sizeof(arr[0]), key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
    for(int i=0;i<5;i++)
        cout << arr[i]<< ", ";
}