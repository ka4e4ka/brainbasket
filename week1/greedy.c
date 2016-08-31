#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float number;
    
    do {
        printf("Enter number: \n");
        number = GetFloat();    
    } while (number <= 0);
    
    number = number * 100;
    
    int num = (int)round(number);
    int count = 0;
    int num25 = round(25);
    int num10 = round(10);
    int num5 = round(5);
    int num1 = round(1);
   
    
    while(number == 0) {
       number = GetFloat();
    }
    
    while(num >= num25) {
        num -= num25;
        count++;
    }
    
    while(num >= num10) {
        num -= num10;
        count++;
    }

    while(num >= num5) {
        num -= num5;
        count++;
    }
    
    while(num >= num1) {
        num -= num1;
        count++;
    }

    printf("%d\n", count);  
}

