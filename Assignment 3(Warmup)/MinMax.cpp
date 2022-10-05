#include <iostream>

using namespace std;

int main(){
  long int a[5],min,max,sum=0;
  for(int i=0;i<5;i++){
      cin>>a[i];
      sum+=a[i];
      
  }
  min=a[0];
  for(int i=0;i<5;i++){
      if(min>a[i])
      min=a[i];
  }
  max=a[0];
  for(int i=0;i<5;i++){
      if(max<a[i])
      max=a[i];
  }
  cout<<sum-max<<" "<< sum-min;
  return 0;
}
