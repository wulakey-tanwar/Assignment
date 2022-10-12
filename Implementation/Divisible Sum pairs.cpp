#include<iostream>
using namespace std;
int main(){
    int n,k,sum,p=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(sum%k==0)
            p++;
        }
    }
    cout<<p;
    return 0;
}
