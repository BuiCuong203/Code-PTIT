#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	vector<string> v;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		string tmp="";
		tmp+="Buoc ";
		tmp+=to_string(i);
		tmp+=": ";
		for(int k=0;k<=i;k++){
			tmp+=to_string(a[k]);
			tmp+=" ";
		}
		v.push_back(tmp);
	}
	reverse(v.begin(),v.end());
	for(string x:v){
		cout<<x<<endl;
	}
}
