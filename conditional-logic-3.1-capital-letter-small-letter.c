#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any English Alphabet:");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("It's an small letter.\n");
    }
    else if(ch>='A' && ch<='Z'){
        printf("It's an capital letter.\n");
    }
    return 0;
}
