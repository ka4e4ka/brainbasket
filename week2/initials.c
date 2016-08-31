#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

char* SplitString(char* str, char sep)
{
    return str;
}

int main(void)
{
    char* input = GetString();
    char *output, *temp;
    char * field;
    char sep = ' ';
    //int cnt = 1;
    output = SplitString(input, sep);

    field = output;
    for(temp = field; *temp; ++temp){ 
       if (*temp == sep){
          //printf("%d.) %.*s\n", cnt++, temp-field, field);
          printf("%c", toupper(field[0]));
          field = temp+1;
       }
    }
    //printf("%d.) %.*s\n", cnt++, temp-field, field);
    printf("%c", toupper(field[0]));
    printf("\n");
}
