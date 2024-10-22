#include <stdio.h>//scanf(),printf()
#include <string.h>//strcpy()
struct student{
    char name [20];
    char reg_no[30];
    char email[40];
    float marks;
    int id;
    int phone_no;
    
}student1,student2;
int id,phone_no,marks;
int main() {
strcpy(student1.name,"Moses");
strcpy(student1.reg_no,"BCS-05-0425/2023");
strcpy(student1.email, "moses.sabuni@apalife.co.ke");
student1.id=1345678;
student1.phone_no=707089099;
student1.marks=70.8;
printf("name:%s \n",student1.name);
printf("%reg number:%s \n",student1.reg_no);
printf("email:%s \n",student1.email);
printf("marks:%f \n",student1.marks);
printf("id:%d \n",student1.id);
printf("phone_no:%d \n",student1.phone_no);
    return 0;
}