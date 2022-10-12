#include<iostream>

using namespace std;
int main(){
    int n,max,min,increase=0,decrease=0;
    cin>>n;
   int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        min=a[0];
        max=a[0];
      
        for(int i =0;i<n;i++){
            if(max<a[i]){
                max=a[i];
                increase++;
            }
          else  if(min>a[i]){
                min=a[i];
                decrease++;
            
        }
    }
    cout<<increase<<" "<<decrease;
    return 0;
}
