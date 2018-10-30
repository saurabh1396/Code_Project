#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n],f,s;string str="No";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
       f= arr[i]*arr[i];
       for(int k=i+1;k<n-1;k++){
       s= arr[k]*arr[k];
      for(int j=i+2;j<n;j++){
       if(arr[i]+arr[k]>arr[j]){
         if((f+s)==arr[j]*arr[j]){
             str= "Yes";
             i=1000;
              break;
          }
       }
     }
   }
    }
   cout<<str<<endl;
  }
}
