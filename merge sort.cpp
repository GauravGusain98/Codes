//g++  5.4.0

#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
    int nl=mid-lb+1;
    int nr=ub-mid;
    int left[nl], right[nr];   //making two temp sub arrays
    for(int i=0;i<nl;i++)      
        left[i]=arr[lb+i];
    for(int i=0;i<nr;i++)
        right[i]=arr[mid+1+i];
    int i=0, j=0, k=lb;
    while(i<nl && j<nr)       //sorting the array
    {
        if(left[i]<right[j])
           arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    
    while(j<nr)      // filling extra elements
       arr[k++]=right[j++];
    while(i<nl)
        arr[k++]=left[i++];
    
}

void partition(int arr[], int lb, int ub)
{
    if(lb<ub)
    {
        int mid= (ub+lb)/2;
        partition(arr, lb, mid);
        partition(arr, mid+1, ub);
        merge(arr,lb, mid, ub);
    }   
}


int main()
{
    int arr[10], n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    partition(arr,0,n-1);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}