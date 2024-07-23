#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000],b[1000];

struct node{
	int data;
	node *left;
	node *right;
};
typedef struct node* tree;

tree newnode(int x){
	tree p=new node;
	p->data=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}

void LRN(tree &t){
	if(t!=NULL){
		LRN(t->left);
		LRN(t->right);
		cout<<t->data<<" ";
	}
}

tree buildtree(int s,int e,int &bIndex,map<int,int> &mp){
	if(s>e) return NULL;
	tree t=newnode(b[bIndex]);
	bIndex++;
	if(s==e) return t;
	int aIndex=mp[t->data];
	t->left=buildtree(s,aIndex-1,bIndex,mp);
	t->right=buildtree(aIndex+1,e,bIndex,mp);
	return t;
}

tree build(){
	map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[a[i]]=i;
	}
	int bIndex=0;
	return buildtree(0,n-1,bIndex,mp);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		tree t=build();
		LRN(t);
		cout<<endl;
	}
}
