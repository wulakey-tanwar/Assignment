#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string a;
    cin>>a;
    string f;
    cin>>f;
    string d =a+f;
    int len = a.length();
    int e =f.length();

    cout<<len<<" "<<e<<endl;
    cout<<d<<"\n";
    char s1=a[0];
    char s2=f[0];
     a[0]=s2;
     f[0]=s1;
    cout<<a<<" "<<f;
    return 0;
}
