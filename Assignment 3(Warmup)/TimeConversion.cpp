#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    char s[10];
    
    cin>>s;
    if(s[8]=='A'){
        if(s[0]=='1'&& s[1]=='2'){
            s[0]=s[1]='0';
        }
    }
    else{
        if(s[1]=='8'){
            s[0]='2';
            s[1]='0';
        }
        else if(s[2]=='9'){
            s[0]='2';
            s[1]='1';
        }
        else if(!(s[0]=='1'&& s[1]=='2')){
            s[0]+=1;
            s[1]+=2;
        }
    }
    s[8]='\0';
    cout<<s;
}
