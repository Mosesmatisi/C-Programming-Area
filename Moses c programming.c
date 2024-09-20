// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int l,w,area;
    area = l * w ;
    printf("Enter length ( cm ) :\n",l);
    scanf("%d",&l);
    
    printf("Enter width ( cm ) :\n",w);
    scanf("%d",&w);
    
    area = l * w;
    printf("area of l and w %d",area);
    

    return 0;
}