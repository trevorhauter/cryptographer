#include <stdio.h>
#include <string.h>

int main() {
  int phraseLength = 144;
  char phrase[phraseLength];
  printf("Enter a phrase to be encrypted (max length: ");
  printf("%d", phraseLength);
  printf("):");

  fgets(phrase, phraseLength, stdin);
  printf("%s", phrase);
}
