#include<stdio.h>
#include<string.h>

void countvowcons(char str[], int *vowels, int *consonants);

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0;
    countvowcons(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

void countvowcons(char str[], int *vowels, int *consonants){
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
               c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            {
                (*vowels)++;
            }
            else
            {
                (*consonants)++;
            }
        }
    }
}
