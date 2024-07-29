#include<stdio.h>
#include<dos.h>
#include<memory.h>
#include<stdlib.h>
#include<string.h>

struct BOOT{ //for FAT16
	char jmp[3]; //
	char OEM[8]; //ten hang san xuat
	int bytes_per_sector; //kich thuoc sector tinh bang byte
	char sectors_per_cluster; //so sector trong mot cluster, la luy thua cua 2 và khong lon hon 128
	int reserved; //so luong cac sector tu dau dia den dau FAT (boot + du phong)
	char FAT_cnt; //so luong bang FAT
	int ROOT_size; //kich thuoc ROOT
	int total_sectors; //tong so sector tren dia
	char media; //mo ta ve loai dia
	int FAT_size; //kich thuoc bang FAT
	int sectors_per_track; //so sector tren mot ranh
	int head_cnt; // so luong cua cac dau doc
	long hidden_sectors; // so luong cac sector an
	long total_sectors_long; // tong cac sector co tren dia trong TH nhieu hon 65535
	char unknown[3]; //
	long serial;
	char volume[11];
	char FAT_type[8];
	char loader[448];
	char mark[2];
};

struct ROOT{
	char name[8]; //ten cua ROOT
	char ext[3]; // phan mo rong, them bang dau trang neu ngan hon 3 byte
	char attr; //thuoc tinh cua file
	char reserved[10]; // 
	char time[2]; // thoi gian tao file
	char date[2]; // ngay tao file
	int first_cluster; //cluster dau tien
	long size; //kich thuoc ROOT
};

void main(){
	int drive = 3; //A=0, B=1, C=2, D=3 ...
	
	//Reading boot sector from disk D
	BOOT boot;
	
	int res = absread(drive, 1, 0, &boot);
	if(res != 0){
		printf("Cannot read boot sector \n");
		return;
	}
	int i;
	
	//Reading FAT16 table from disk D
	unsigned int *fat = (unsigned int *)malloc (boot.FAT_size * boot.bytes_per_sector);
	if(fat == NULL){
		printf("Not enough memory\n");
		return;
	}
	
	res = absread(drive, boot.FAT_size, boot.reserved, fat);
	if(res != 0){
		printf("Cannot read FAT \n");
		return;
	}
	
	printf("Content of first 150 FAT cells:");
	for(i = 0; i < 150; i++){
		printf("%u ", fat[i]);
	}
	free(fat);
	
	getchar();
}
