#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Very simple encryption func
void alphabet_soup(char *message, bool encrypt) {
  int i;
  int asciiValue;

  for (i = 0; i < strlen(message); i++) {
    // Get the ascii value of the letter - increment one
    if (encrypt == true) {
      asciiValue = (int)message[i] + 1;
    }
    if (encrypt == false) {
      asciiValue = (int)message[i] - 1;
    }
    // It gets converted back to a char automatically b/c it's a char type???
    message[i] = asciiValue;
  }
}

// Main entry point to cryptographer
int main() {
  int phraseLength = 144;
  char phrase[phraseLength];
  char encrypted_phrase[phraseLength];

  printf("Enter a phrase to be encrypted (max length: ");
  printf("%d", phraseLength);
  printf("):");

  fgets(phrase, phraseLength, stdin);
  // Encrypt
  alphabet_soup(phrase, true);
  printf("%s", phrase);
  printf("\n");
  // Decrypt
  alphabet_soup(phrase, false);
  printf("%s", phrase);
}
