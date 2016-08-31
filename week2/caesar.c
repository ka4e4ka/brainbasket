#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc, string argv[]) {
    
    if (argc<2)
    {
        printf ("Invalid key!\n");
        return 1;
    }
    
    int k = atoi(argv[1]);
    char newSymb;
    string str = GetString();
    
    for (int i = 0, n = strlen(str); i < n; i++) {
        char symb = str[i];
        
        if (!isalpha(symb)) {
             printf("%c",symb);
             continue;
        }
        else if (isupper(symb)){
            newSymb = (symb - 65 + k) % 26 + 65;
            printf("%c",(int)(newSymb));
        } else {
            newSymb = (symb - 97 + k) % 26 + 97;
            printf("%c",(int)(newSymb));
        }
    }
    printf("\n");
}
