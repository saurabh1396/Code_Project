#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
int n,m, k;
int i, j;
int count;
  cin>> t;
  while(t--){
    count =0;
    cin >> n >>m >>k;
    int arr1[n];
    int arr2[m];
    for(i=0; i<n;i++ ){
      cin >> arr1[i];
    }
    sort(arr1, arr1+n);
    for(i=0; i<m; i++){
      for(j=0; j<n; j++){
        if(arr2[i]>=arr1[j] && arr2[i] <= (arr1[j]+k) && arr1[j]!= -1){
          count+1;
          arr1[j]= -1;
          break;
        }
      }
    }
    cout << count<<endl;
  }
}
