#include<bits/stdc++.h>

using namespace std;

long long snt(long long n){
	if(n==1) return 1;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

main(){
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		long long dem=0;
		for(long long i=sqrt(l);i<=sqrt(r);i++){
			if(snt(i)==1) dem++;
		}
		cout<<dem-1<<endl;
	}
}

