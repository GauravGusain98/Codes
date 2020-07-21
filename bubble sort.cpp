//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,34,42,4,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    
    for(int i=0;i<5;i++)
        cout << arr[i]<< ", ";
}