#include <stdio.h>
#include <cs50.h>
int main(void) 
{
    printf("height: ");
    int height = GetInt();
    int top = 2;    
    while (height < 0 || height > 23) {
        printf("height: ");
        height = GetInt();
    }   
    for (int i = 0; i < height; i++) {
        for(int j = 0; j <= height - top; j++) {
            printf(" ");   
        }
        for(int n = 0; n < top; n++) {
            printf("#");
        }
        printf("\n");
        top++;
      }
}
