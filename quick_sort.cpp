#include <iostream>
using namespace std;

int partition(int arr[],int lb, int ub)
{
    int key=arr[lb], start=lb, end=ub;
    while(start<=end)
    {
        while(arr[start]<=key)
            start++;
        while(arr[end]>key)
            end--;
        if(start<=end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    arr[lb]=arr[end];
    arr[end]=key;
    return end;
}

void quicksort(int arr[],int lb,int ub)
{ 
    if(lb<ub)
    {
    int loc= partition(arr,lb,ub);
    quicksort(arr,lb,loc-1);
    quicksort(arr,loc+1,ub);
    }
}


int main() {
  int n,arr[10];
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>arr[i];
    
  quicksort(arr,0,n-1);
  
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
	
}
