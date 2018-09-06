#include<bits/stdc++.h>
//#include<algorithm.h>
using namespace std;
int main()
{
	int n;
cin>>n;
long int arr[n];
for(int i=0; i<n;i++){
cin >>arr[i];
}
sort(arr, arr+n);
int64_t s = arr[n-1]*arr[n-2];
cout <<s;
	return 0;
}
