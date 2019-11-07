#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int first=0,second=1,sum=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cout<<first<<" ";
	    sum=first+second;
	    first=second;
	    second=sum;
	}
	return 0;
}
