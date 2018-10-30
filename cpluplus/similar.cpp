#include<iostream>
using namespace std;
int main(){
  int t,n,x;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n],c=0;
    for(int i =0;i<n;i++){
      cin>>arr[i];
    }
    cin>>x;
    for(int i=0;i<n;i++){
      if(arr[i]<=x){
        c=c+1;
      }
    }
    cout<<c<<endl;
  }
}
