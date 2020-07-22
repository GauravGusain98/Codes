//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,34,42,4,23};
    int n=sizeof(arr)/sizeof(arr[0]), key;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }
    
    for(int i=0;i<5;i++)
        cout << arr[i]<< ", ";
}