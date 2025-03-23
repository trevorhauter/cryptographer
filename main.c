#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Very simple encryption func
void alphabet_soup(char *message) {
  int i;
  int asciiValue;

  for (i = 0; i < strlen(message); i++) {
    // Get the ascii value of the letter - increment one
    asciiValue = (int)message[i] + 1;
    // This converts it back to a lettr
    message[i] = '0' + asciiValue;
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
  alphabet_soup(phrase);
  printf("%s", phrase);
}
