#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *pLeft;
	struct node *pRight;
};
typedef struct node NODE;
typedef NODE* TREE;

bool snt(int x){
	if(x<2) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}

//khoi tao cay
void khoitaocay(TREE &t){
	t=NULL;
}

//ham them phan tu vao cay
void themnodevaocay(TREE &t,int x){
	//neu cay rong
	if(t==NULL){
		NODE *p=new NODE;
		p->data=x;
		p->pLeft=NULL;
		p->pRight=NULL;
		t=p; //node p chinh la node goc <=> x chinh la node goc
	}
	else{ // cay co ton tai phan tu
		//neu phan tu them vao ma nho hon node goc => them vao ben trai 
		if(t->data > x){
			themnodevaocay(t->pLeft, x);
		}
		else{
			if(t->data < x){//neu phan tu them vao ma lon hon node goc => them vao ben phai
				themnodevaocay(t->pRight, x);
			}
		}
	}
}
int dem=0;
void dem_snt(TREE t,int dem){
	if(t!=NULL){
		if(snt(t->data)==true){
			dem++;
		}
		dem_snt(t->pLeft,dem);
		dem_snt(t->pRight,dem);
	}
}

//ham xuat cay nhi phan duyet NLR
void duyet_NLR(TREE t){
	//neu cay con phan tu thi tiep tuc duyet
	if(t!=NULL){ 
		cout<< t->data <<" "; //xuat du lieu trong node
		duyet_NLR(t->pLeft); // duyet qua phai
		duyet_NLR(t->pRight); //duyet qua trai
	}
}
//ham xuat cay nhi phan duyet NRL
void duyet_NRL(TREE t){
	if(t!=NULL){
		cout<<t->data<<" ";
		duyet_NRL(t->pRight);
		duyet_NRL(t->pLeft);
	}
}
//ham xuat cay nhi phan duyet LNR
void duyet_LNR(TREE t){
	if(t!=NULL){
		duyet_LNR(t->pLeft);
		cout<<t->data<<" ";
		duyet_LNR(t->pRight);
	}
}
// ham xuat cay nhi phan RNL
void duyet_RNL(TREE t){
	if(t!=NULL){
		duyet_RNL(t->pRight);
		cout<<t->data<<" ";
		duyet_RNL(t->pLeft);
	}
}
// ham xuat cay nhi phan RNL
void duyet_RLN(TREE t){
	if(t!=NULL){
		duyet_RLN(t->pRight);
		duyet_RLN(t->pLeft);
		cout<<t->data<<" ";
	}
}
// ham xuat cay nhi phan RNL
void duyet_LRN(TREE t){
	if(t!=NULL){
		duyet_LRN(t->pLeft);
		duyet_LRN(t->pRight);
		cout<<t->data<<" ";
	}
}
//ham nhap du lieu
void Menu(TREE &t){
	while(1){
		system("cls");
		cout<<"\n\n\t\t===============MENU===================";
		cout<<"\n\n\t\t\t1. Nhap du lieu";
		cout<<"\n\t\t\t2. Xuat du lieu cay NLR";
		cout<<"\n\t\t\t3. Xuat du lieu cay NRL";
		cout<<"\n\t\t\t4. Xuat du lieu cay LNR";
		cout<<"\n\t\t\t5. Xuat du lieu cay RNL";
		cout<<"\n\t\t\t6. Xuat du lieu cay LRN";
		cout<<"\n\t\t\t7. Xuat du lieu cay RLN";
		cout<<"\n\t\t\t8. Dem so luong snt trong cay";
		cout<<"\n\t\t\t0. Ket thuc";
		cout<<"\n\n\t\t======================================";
		int luachon;
		
		cout<<"\n\nNhap lua chon: ";
		cin>>luachon;
		if(luachon < 0 || luachon > 8){
			cout<<"\nLua chon khong hop le\n";
			system("pause");
		}
		else if(luachon==1){
			int x;
			cout<<"\nNhap so nguyen x: ";
			cin>>x;
			themnodevaocay(t,x);
		}
		else if(luachon == 2){
			cout<<"\nDuyet cay theo NLR: ";
			duyet_NLR(t);
			cout<<endl;
			system("pause");
		}
		else if(luachon == 3){
			cout<<"\nDuyet cay theo NRL: ";
			duyet_NRL(t);
			cout<<endl;
			system("pause");
		}
		else if(luachon == 4){
			cout<<"\nDuyet cay theo LNR: ";
			duyet_LNR(t);
			cout<<endl;
			system("pause");
		}
		else if(luachon == 5){
			cout<<"\nDuyet cay theo RNL: ";
			duyet_RNL(t);
			cout<<endl;
			system("pause");
		}
		else if(luachon == 6){
			cout<<"\nDuyet cay theo LRN: ";
			duyet_LRN(t);
			cout<<endl;
			system("pause");
		}
		else if(luachon == 7){
			cout<<"\nDuyet cay theo RLN: ";
			duyet_RLN(t);
			cout<<endl;
			system("pause");
		}
		else if(luachon == 8){
		//	int dem=0;
			dem_snt(t,dem);
			cout<<"\nSo luong so nguyen to trong cay: "<<dem;
			cout<<endl;
			system("pause");
		}
		else{
			break;
		}
	}
}

int main(){
	TREE t;
	khoitaocay(t);
	Menu(t);
}
