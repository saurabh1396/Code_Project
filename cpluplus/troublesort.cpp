#include<iostream>
using namespace std;
bool arraySortedOrNot(int arr[],int n);
int check(int arr[],int n);
int main(){
  int t,te,n;
  cin>>t;
  te=t;
  while (t--) {
    int c=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    while(c>0){
      c=0;
    for(int i=0;i<(n-2);i++){
      if(arr[i]>arr[i+2]){
        swap(arr[i],arr[i+2]);
        c++;
      }
      }
    }
    if(arraySortedOrNot(arr,n))
    {
      cout<<"Case #"<<te-t<<":"<<" "<<"OK"<<endl;
    }
    else
    {
      int in = check(arr,n);
      cout<<"Case #"<<te-t<<":"<<" "<<in<<endl;
    }

  }
}
int check(int arr[],int n){
int k;
for( k=0;k<n;k++){
  if(arr[k]>arr[k+1]){
    return k ;
  }else{
    continue;
  }

}
return 0;
}
bool arraySortedOrNot(int arr[], int n)
{

    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)


        if (arr[i-1] > arr[i])
            return false;


    return true;
}
