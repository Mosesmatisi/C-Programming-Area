//calculating simple interest
#include <stdio.h>
int main() {
    //Simple interset program
    int P, R, T;
    float SI;
    
    printf("Enter the principal: ");
    scanf("%f", &P);
    
    printf("Enter the rate: ");
    scanf("%f", &R);
    
    printf("Enter the time: ");
    scanf("%f", &T);
    
    SI = (P * R * T) / 100;
    printf("The Simple interest is %d", SI);
    return 0;
}
