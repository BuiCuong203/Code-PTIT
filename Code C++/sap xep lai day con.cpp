#include<bits/stdc++.h> 
using namespace std; 

int main() { 
int test; 
cin >> test; 
while(test--){ 
int n; 
cin >> n; 
int t1, t2; 
int a[n+5], b[n+5]; 
for( int i=0; i < n; i++){ 
cin >> a[i]; b[i] = a[i]; 
} 
sort(a,a+n); 
for(int i=0; i<n;i++){ 
if(a[i] != b[i]){ 
t1 = i; 
} 
} 
for(int i = n-1; i>= 0;i--){ 
if(a[i] != b[i]){ 
t2 = i; 
}
} 
cout << t2 + 1 << " " << t1 + 1 << endl; 
} 
return 0; 
}
