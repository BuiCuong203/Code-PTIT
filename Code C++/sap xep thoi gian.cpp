#include<bits/stdc++.h>
using namespace std;

struct Time{
	int h,m,s;
};

bool kt(Time a,Time b){
	return a.h*3600+a.m*60+a.s<b.h*3600+b.m*60+b.s;
}

int main(){
	int n;
	cin>>n;
	Time a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].h>>a[i].m>>a[i].s;
	}
	sort(a,a+n,kt);
	for(int i=0;i<n;i++){
		cout<<a[i].h<<" "<<a[i].m<<" "<<a[i].s<<endl;
	}
}
