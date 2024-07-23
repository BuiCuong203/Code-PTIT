#include<bits/stdc++.h>
using namespace std;

void insertsort(int a[],int n){
	for(int i=0;i<n;i++){
		int key=a[i];
		int j=i-1;
		cout<<"Buoc "<<i<<": ";
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		for(int k=0;k<=i;k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertsort(a,n);
}
