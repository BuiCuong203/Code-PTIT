#include<bits/stdc++.h>
using namespace std;
int n;
string s[10001];

struct node{
	string data;
	node *left;
	node *right;
};

typedef node* tree;

tree newnode(string x){
	tree p=new node;
	p->data=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}

int biendoi(string x){
	int num=0;
	for(int i=0;i<x.size();i++) num=num*10+x[i]-'0';
	return num;
}

int tinh(tree &t){
	if(t==NULL) return 0;
	if(t->left==NULL&&t->right==NULL) return biendoi(t->data);
	else{
		int l=tinh(t->left);
		int r=tinh(t->right);
		if(t->data=="+") return l+r;
		if(t->data=="-") return l-r;
		if(t->data=="*") return l*r;
		return l/r;
	}
}

tree insertnode(tree t, int i){
	if(i<n){
		node *p=newnode(s[i]);
		t=p;
		t->left=insertnode(t->left,i*2+1);
		t->right=insertnode(t->right,i*2+2);
	}
	return t;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>s[i];
		node *t=new node;
		t=insertnode(t,0);
		cout<<tinh(t)<<endl;
	}
}
