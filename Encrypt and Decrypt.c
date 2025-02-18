#include <stdio.h>
#include <string.h>

void spaces(int count) {
    for (int i = 0; i < count; ++i) {
        printf(" ");
    }
}

void encrypt(char str[], int key) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] + key; // Shift character forward
    }
}

void decrypt(char str[], int key) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] - key; // Shift character back
    }
}

int main() {
    spaces(30);
    printf("Welcome to ENDEC Company\n\n\n");

    int key = 5;
    char choice[10], word[50];

    printf("What do you want (encrypt or decrypt): ");
    scanf("%s", choice);

    printf("Enter the word: ");
    scanf("%s", word);

    if (strcmp(choice, "encrypt") == 0) {
        encrypt(word, key);
        printf("Encrypted word: %s\n", word);
    } else if (strcmp(choice, "decrypt") == 0) {
        decrypt(word, key);
        printf("Decrypted word: %s\n", word);
    } else {
        printf("Invalid choice! Use 'encrypt' or 'decrypt'.\n");
    }

    return 0;
}
