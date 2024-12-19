//#include <stdio.h>
//#include <string.h>
// 	
//	 int main (){
// 		struct Student{
// 			int id;
// 			char fullName[100];
// 			int age;
// 			char phone[20];
//		 };
//		 
// 		struct Student use01={1,"Tran Ngoc Linh",18,"123456789"};
// 		printf("In thong tin sinh vien:\n ");
// 		printf("%d\n", use01.id);
// 		printf("%s\n", use01.fullName);
// 		printf("%d\n", use01.age);
// 		printf("%s\n", use01. phone);
// 		
// 		printf("Moi ban nha thong tin cho use01:\n ");
// 		printf("Moi ban nhap id cho sinh vien: ");
// 		scanf("%d",&use01.id);
// 		fflush(stdin);
// 		printf("Moi ban nhap ho va ten cho use01:\n ");
// 		fgets(use01.fullName,sizeof(use01.fullName),stdin);
// 		printf("Nhap tuoi:\n ");
// 		scanf("%d",&use01.age);
// 		fflush(stdin);
// 		printf("nhap so dien thoat:\n ");
// 		fgets(use01.phone,sizeof(use01.phone),stdin);
// 		
//
// 		
// 		return 0;	
//	 }
// 		
// 		
 		
 		
 		
 		
#include <stdio.h>
#include <string.h>

int main() {
    struct Student {
        char name[100];
        int age;
        char phoneNumber[20];
    };

    struct Student student;

    printf("Nhap thong tin sinh vien:\n");

    printf("Moi ban nhap ho va ten: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Moi ban nhap tuoi: ");
    scanf("%d", &student.age);
    getchar();

    printf("Moi ban nhap so dien thoai: ");
    fgets(student.phoneNumber, sizeof(student.phoneNumber), stdin);
    student.phoneNumber[strcspn(student.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ho va ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}


