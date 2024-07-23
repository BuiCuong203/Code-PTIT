#include<bits/stdc++.h>
using namespace std;

struct NODE{
	int data;
	struct NODE* left;
	struct NODE* right;
};

typedef struct NODE node;
typedef node* tree;

void khoitao(tree &t){
	t=NULL;
}

void thempt(tree &t,int x){
	if(t==NULL){
		node *p= new node;
		p->data=x;
		p->left=NULL;
		p->right=NULL;
		t=p;
	}
	else{
		if(t->data<x){
			thempt(t->right,x);
		}
		if(t->data>x){
			thempt(t->left,x);
		}
	}
}

void duyet(tree &t){
	if(t!=NULL){
		cout<<t->data<<" ";
		duyet(t->left);
		duyet(t->right);
	}
}

//neu node co ton tai trong cay thi tra ve node do - con khong thi tra ve NULL
node* timkiem(tree t,int x){
	if(t==NULL) return NULL;
	else{
		if(x<t->data){
			timkiem(t->left,x);
		}
		else if(x>t->data){
			timkiem(t->right,x);
		}
		else if(x==t->data) return t;
	}
}

void Node_co_2_con(tree t){
	if(t!=NULL){
		if(t->left!=NULL&&t->right!=NULL) cout<<t->data<<" ";
		Node_co_2_con(t->left);
		Node_co_2_con(t->right);
	}
}
	

void Node_co_1_con(tree t){
	if(t!=NULL){
		if((t->left!=NULL&&t->right==NULL)||(t->left==NULL&&t->right!=NULL)) cout<<t->data<<" ";
		Node_co_1_con(t->left);
		Node_co_1_con(t->right);
	}
}

void Node_la(tree t){
	if(t!=NULL){
		if(t->left==NULL&&t->right==NULL) cout<<t->data<<" ";
		Node_la(t->left);
		Node_la(t->right);
	}
}

int tim_max(tree t){
	if(t->right==NULL){
		return t->data;
	}
	return tim_max(t->right);
}

void Menu(tree &t){
	while(1){
		system("cls");
		cout<<"\n\n\t\t===============MENU===================";
		cout<<"\n\n\t\t\t1. Nhap du lieu";
		cout<<"\n\t\t\t2. Duyet cay";
		cout<<"\n\t\t\t3. Tim kiem phan tu trong cay";
		cout<<"\n\t\t\t4. Node co 2 con";
		cout<<"\n\t\t\t5. Node co 1 con";
		cout<<"\n\t\t\t6. Node la";
		cout<<"\n\t\t\t7. Tim MAX";
		cout<<"\n\t\t\t0. Ket thuc";
		cout<<"\n\n\t\t======================================";
		int luachon;
		
		cout<<"\n\nNhap lua chon: ";
		cin>>luachon;
		if(luachon < 0 || luachon > 7){
			cout<<"\nLua chon khong hop le\n";
			system("pause");
		}
		else{
			if(luachon==1){
				int x;
				cout<<"\nNhap gia tri x: ";
				cin>>x;
				thempt(t,x);
			}
			else if(luachon==2){
				cout<<"\nCay duoc duyet: ";
				duyet(t);
				cout<<endl;
				system("pause");
			}
			else if(luachon==3){
				int x;
				cout<<"\nNhap phan tu can tim kiem: ";
				cin>>x;
				node* p=timkiem(t,x);
				if(p==NULL){
					cout<<"\nPhan tu "<<x<<" khong ton tai trong cay\n";
				}
				else{
					cout<<"\nPhan tu "<<x<<" co ton tai trong cay\n";
				}
				system("pause");
			}
			else if(luachon==4){
				cout<<"\nNode co 2 con: ";
				Node_co_2_con(t);
				cout<<endl;
				system("pause");
			}
			else if(luachon==5){
				cout<<"\nNode co 2 con: ";
				Node_co_1_con(t);
				cout<<endl;
				system("pause");
			}
			else if(luachon==6){
				cout<<"\nNode co 2 con: ";
				Node_la(t);
				cout<<endl;
				system("pause");
			}
			else if(luachon==7){
				cout<<"\nMAX: "<<tim_max(t);
				cout<<endl;
				system("pause");
			}
			else{
				break;
			}
		}
	}
}
int main(){
	tree t;
	khoitao(t);
	Menu(t);
}
