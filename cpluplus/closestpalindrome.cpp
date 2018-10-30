#include<iostream>
using namespace std;
int check(int);
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x=1;
    cin>>n;
    int ne=n,po=n;
    if(check(n)!=1){
while(x<10000){
  
  ne = ne-1;
if(check(ne)==1){
  cout<<ne<<endl;
  break;
}else{
po= po+1;
if(check(po)==1){
  cout<<po<<endl;
  break;
}
}
x=x+1;;
}

}
else{
  cout<<n<<endl;
}
}
}
int check(int n){

  int m=n,c=0,s,r;
  while(n>0){
  s=n%10;
  c= c*10+s;
  n=n/10;
}
if(c==m)
return 1;
else
return 0;
}
