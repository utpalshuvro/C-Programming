#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any English Alphabet: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("\nThe letter is a Vowel.\n");
    }
    else{
        printf("\nThe letter is a Consonant.\n");
    }
    return 0;
}
