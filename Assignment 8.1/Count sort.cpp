/*
	Count Sort Algorithm
	**Time Complexity: O(n)
	**Space Complexity: O(max_number-min_number)
*/

#include <bits/stdc++.h>
using namespace std;

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>M)
{
	//traverse all the element and print th
	for(int i=0;i<M.size();i++)
	{
		cout<<M[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&M)
{ 	vector<int>N(100);
	for(int i=0;i<M.size();i++){
		N[M[i]]++;
	}
	int k=0;
	for(int i=0;i<N.size();i++){
		for(int j=0;j<N[i];j++){
			M[k]=i;
			k++;
		}
	}
}

int main() {
	vector<int>M= {6,1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(M);
	cout<<"sorted vector: ";
	printVector(M);
	
	return 0;
}
