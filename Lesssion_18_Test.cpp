#include <stdio.h>
#include <string.h>
 	int main (){
 		struct Student{
 			int id;
 			char fullName[100];
 			int age;
 			char phone[20];
		 };
 		
 		//Khai bao bien tu kieu du lieu cau truc
// 		struct Student use01={1,"Do Ngoc Dan",18,"012345678"};
// 		struct Student use02={2,"Tran Ngoc Linh",18,"123456789"};
 		
 		// truy xuat
// 		printf("In thong tin sinh vien:\n ");
// 		printf("%d\n", use01.id);
// 		printf("%s\n", use01.fullName);
// 		printf("%d\n", use01.age);
// 		printf("%s\n", use01. phone);
// 		printf("In thong tin sinh vien:\n ");
// 		printf("%d\n", use02.id);
// 		printf("%s\n", use02.fullName);
// 		printf("%d\n", use02.age);
// 		printf("%s\n", use02. phone);
// 		
 		// Cap nhap gia tri
// 		printf(" Sau khi cap nhap gia tri age:\n");
// 		use01.age=81;
// 		printf("%d\n", use01.age);
// 		printf("Sau khi cap nhap so dien thoai:\n");
// 		use01.phone="876543210"; Khong the gan truc tiep 
// 		strcpy(use01.phone,"876543210");
// 		printf("%s\n", use01.phone);

// Nhap gia tri danh cho cac phan tu trong use02

// 		printf("Moi ban nhap thong tin cho use02:\n ");
// 		printf("Moi ban nhap id cho sinh vien: ");
// 		scanf("%d",&use02.id);
// 		fflush(stdin);
// 		printf("Moi ban nhap ho va ten cho use02:\n ");
// 		fgets(use02.fullName,sizeof(use02.fullName),stdin);
// 		printf("Nhap tuoi:\n ");
// 		scanf("%d",&use02.age);
// 		fflush(stdin);
// 		printf("nhap so dien thoat:\n ");
// 		fgets(use02.phone,sizeof(use02.phone),stdin);
 		
 		// Mang cau truc 
 		struct Student students[5]={
 			{1,"Thit cho",18,"01"},
 			{2,"Thit lon",18,"02"},
 			{3,"Thit bo",18,"03"},
 			{4,"Thit ga",18,"04"},
 			{5,"Thit chim",18,"05"},
		 };
 		printf("%s",students[1].fullName);
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		return 0;
	 }
