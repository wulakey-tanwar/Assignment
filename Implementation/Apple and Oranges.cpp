
#include<iostream>
using namespace std;
int main()
{
    int s,t,a,b,m,n,x,apple=0,orange=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>x;
      if(x+a>=s && x+a<=t)
      apple++;
          
    }
    for(int i=0;i<n;i++){
        cin>>x;
        if(x+b>=s && x+b<=t)
        orange++;
    }
    cout<<apple<<"\n"<<orange;
}
