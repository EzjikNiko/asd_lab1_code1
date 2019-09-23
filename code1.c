#include <stdio.h>
#include <math.h>

int main()
{
    float x,y;
    
    printf("Welcome to the expression program (without logic symbols) \n");
    printf("Expression (version 1): If x>-10 and x<=-5 or x>5 and x<=15, y=x³-6 \n");
    printf("Expression (version 2): If x>=25, y=x³-3x+2 \n");
    printf("Please, input x: \n");
    scanf("%d", &x);

    if (x > -10) {
        if (x <= -5) {
            y = pow(x, 3) - 6;
            printf("Your y is %d\n", y);
        } 
        else {		
            if (x > 5) {
                if (x <= 15) {
                    y = pow(x, 3) - 6;
                    printf("Your y is %d\n", y);
                } 
                else {
                    if (x >= 25) {
                        y = 2 * pow(x, 3) - 3 * x + 2;
                        printf("Your y is %d\n", y);
                    }
                    else {
                        printf("Your y doesn't matters");
                    }    
                }       
            }
            else{
                printf("Your y doesn't matters");
            }    
        }
    } 
    else {	
        printf("Your y doesn't matters");
    }

    printf("Thanks you for using my program");
    return 0;
}
