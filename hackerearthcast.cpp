#include<iostream>
using namespace std;
int main()
{
  int t, x;
  double m1, m2;
   double x1, x2, x3, x4, y1, y2, y3, y4;
  cin >> t;
  while(t--){
    cin >> x1>>y1>>x2>>y2;
    cin >> x3>>y3>>x4>>y4;
   //cout << y1 << y2;
    if((x1==x2 && y1==y2) || (x3==x4 && y3==y4))
    {
      cout << "INVALID" <<endl;
      continue;
    }
    // cout << x1 << x2;
    m1= (y2-y1)/(x2-x1);
    m2= (y4-y3)/(x4-x3);
    // cout << x1 << x2;
    x= m1*m2;
     //cout <<  m1;
    if(x==-1){
      cout << "YES" << endl;
    }
    else cout << "NO" << endl;
  }
}
