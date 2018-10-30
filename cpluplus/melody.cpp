#include<iostream>
using namespace std;
int main(){
  int t,n,temp,sum;
  cin>>t;
  while(t--){
    sum=0;
    cin>>n;
    int arr[n];
    for(int j = 0 ; j<n;j++){
      cin>>arr[j];
    }
    for(int i =0;i<(n-1);i++){
      temp = arr[i]+arr[i+1];
      if(temp>=sum){
        sum=temp;
        }
      }
    cout<<sum;
  }
}
