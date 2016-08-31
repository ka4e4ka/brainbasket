#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    float a, b, c;    

    printf("%s\n", "Enter number a, b, c");
    scanf("%f%f%f", &a, &b, &c);
    
    float disc = b * b - 4 * a * c;
    //printf("%f\n", disc);
    
    if (disc < 0){
        printf("%s\n", "Error");
    } else if(disc == 0) {
        float x = - b / ( 2 * a);
        printf("%f\n", x);
    } else {
        float x1 = ( - b + sqrt(disc)) / ( 2 * a);
        float x2 = ( - b - sqrt(disc)) / ( 2 * a);
        printf("%s%f\n", "Disc: ", disc);
        printf("%f\n", x1);
        printf("%f\n", x2);
    }
}
