// ZU Student Grading System
#include<stdio.h>
int main () {
    int mathematics, chemistry ,english;
    
    printf("Enter marks for mathematics:");
    scanf("%d",&mathematics);
    
  printf("Enter marks for chemistry:");
    scanf("%d",&chemistry);
    
    printf("Enter marks for english:");
    scanf("%d",&english);
    
    int total_marks, average_marks;
    
    total_marks =mathematics+chemistry+english;
    printf("The total_marks,%d\n",total_marks);
    average_marks=total_marks/3;
    
    if (average_marks>=70 && average_marks<=100){
        printf("Your mean grade is A.");
    }
    else if (average_marks>=60 && average_marks<=69){
        printf("Your mean grade is B."); 
    }
     else if(average_marks>=50 && average_marks<=59){
        printf("Your mean grade is C."); 
    }
     else if (average_marks>=40 && average_marks<=49){
        printf("Your mean grade is D."); 
    }
     else if (average)
     
    return 0;
}
     
 