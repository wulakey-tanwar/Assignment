#include <bits/stdc++.h>
using namespace std;

void printArray(int A[], int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
  
void mergeSortedParts(int A[], int start, int end, int mid){
	int Ans[end-start+1];
	int i=start,j=mid+1, k=0;
	while(i<=mid && j<=end){
		if(A[i]<A[j]){
			Ans[k] = A[i];
			i++; 
			k++;
		}
		else{
			Ans[k] = A[j];
			j++; 
			k++;
		}
	}
	while(i<=mid){
		Ans[k] = A[i];
		i++; 
		k++;
	}
	
	while(j<=end){
		Ans[k] = A[j];
		j++; 
		k++;
	}
	
	for(i=0;i<k;i++){
		A[start+i]= Ans[i];
	}
} 

void sort(int A[], int start, int end){
	if(start == end){
		return;
	}
	
	int mid = (start+end)/2;
	sort(A,start,mid);
	sort(A,mid+1,end);
	mergeSortedParts(A,start, end, mid);
}

int main() {
    int A[10] ={6,7,2,8,9,5,3,7,1,6};
    printArray(A,10);
    sort(A,0,9);
    cout<<"final sorted Array: \n";
    printArray(A, 10);
    
	return 0;
}
