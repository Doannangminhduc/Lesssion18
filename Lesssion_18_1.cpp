#include <stdio.h>
#include <string.h>
 	
	 int main (){
 		struct Student{
 			int id;
 			char fullName[100];
 			int age;
 			char phone[20];
		 };
 		struct Student use02={2,"Tran Ngoc Linh",18,"123456789"};
 		printf("In thong tin sinh vien:\n ");
 		printf("%d\n", use02.id);
 		printf("%s\n", use02.fullName);
 		printf("%d\n", use02.age);
 		printf("%s\n", use02. phone);
 		
 		
 		
 		return 0;	
	 }
 		
