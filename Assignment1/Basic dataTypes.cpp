#include <iostream>

using namespace std;

int main() {
    int a ;
    cin>>a ;
    long b ;
    cin>>b ;
    char c ;
    cin>>c ;
    float d ;
    cin>>d ;
    double e;
    cin>>e;
  
    /*cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    */

printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",*&a,*&b,*&c,*&d,*&e);   
  return 0;
}
