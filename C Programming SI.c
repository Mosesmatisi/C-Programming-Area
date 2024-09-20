//calculating simple interest
#include <stdio.h>
int main() {
    //Simple interset program
    int P, R, T;
    float SI;
    
    printf("Enter the principal: ");
    scanf("%d", &P);
    
    printf("Enter the rate: ");
    scanf("%d", &R);
    
    printf("Enter the time: ");
    scanf("%d", &T);
    
    SI = (P * R * T) / 100;
    printf("The Simple interest is %d", SI);
    return 0;
}
