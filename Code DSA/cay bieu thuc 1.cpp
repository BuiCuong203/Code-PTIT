#include<bits/stdc++.h>
using namespace std;

struct node{
	char data;
	node *left;
	node *right;
};

typedef node* tree;

bool dau(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/') return true;
	return false;
}

tree newnode(char x){
	node *p=new node;
	p->data=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}

void LNR(tree &t){
	if(t!=NULL){
		LNR(t->left);
		cout<<t->data;
		LNR(t->right);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<tree> st;
		for(int i=0;i<s.size();i++){
			if(!dau(s[i])){
				tree t=newnode(s[i]);
				st.push(t);
			}
			else{
				tree t=newnode(s[i]);
				tree t1,t2;
				if(!st.empty()){
					t1=st.top();
					st.pop();
				}
				if(!st.empty()){
					t2=st.top();
					st.pop();
				}
				t->left=t2;
				t->right=t1;
				st.push(t);
			}
		}
		LNR(st.top());
		cout<<endl;
	}
}
