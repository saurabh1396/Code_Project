#include<iostream>
using namespace std;
int main(){
  int n,k,s,l=0;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
       s= k-arr[i];
      for(int j=i+1;j<n;j++){
        if(s=arr[j]){
          j=10000000;
          i=10000000;
          l=1;
          cout<<"YES";
          break;
        }
      }
    }
    if(l!=1){
      cout<<"NO";
    }
}
