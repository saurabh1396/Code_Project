#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int odd(vector<int>,int);
int even(vector<int>,int);
int main(){
  vector <int> g1;
    vector <int> :: iterator i;
  int n,k,h=2,Alex=0,Bob=0;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>k;
      g1.push_back(k);
    }
    while(n--){
        int k= g1.size();
       if(h%2==0){
        if(n%2==0){
          Alex= Alex+even(g1,k);
          g1.erase(g1.begin()+(k/2-1));
        }
        else{
          Alex=Alex+odd(g1,k);

          g1.erase(g1.begin()+k/2-2);
        }
       }
       else{
         if(n%2==0){
           Bob= Bob+even(g1,k);
           g1.erase(g1.begin()+(k/2-1));
         }
         else{
           Alex=Alex+odd(g1,k);
          g1.erase(g1.begin()+k/2-2);
         }
       }
       h=h+1;
    }
    if(Bob<=Alex){
      int j= Alex-Bob;
      cout<<"Alex"<<" "<<j<<endl;
    }
    else{
      int j= Bob-Alex;
      cout<<"Bob"<<" "<<j<<endl;
    }
  }

int even(vector<int>g1,int k){
//int k= g1.size();
return max(g1[k/2-1],g1[(k/2+1)-1]);
/*if(g1[k/2-1]>g1[(k/2+1)-1]){
return g1[k/2-1];
}
else{
  return g1[(k/2+1)-1];
}*/
}
int odd(vector<int>g1,int k){
//int k= g1.size();
 return g1[k/2-1];


}
