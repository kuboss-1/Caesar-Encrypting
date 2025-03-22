#include <stdio.h>
#include <stdlib.h>

void caesarCipher(char *text, int key) 
{
    for (int i = 0; text[i] != '\0'; ++i) 
    {
        
        if (isalpha(text[i])) 
        { 
                
            text[i] = (text[i] - 'a' + key) % 26 + 'a';
        }
    }
}

int main() {
    char text[100];
    int key;

    printf("Please enter the text: ");
    fgets(text, 100, stdin);

    printf("Please enter the key: ");
    scanf("%d", &key);

    caesarCipher(text, key);

    printf("The encrypted text is: %s", text);

    return 0;
}
