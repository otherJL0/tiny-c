#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROJECT_NAME "nato"

const char *nato[] = {
    "Alpha",  "Bravo",   "Charlie",  "Delta",  "Echo",   "Foxtrot", "Golf",
    "Hotel",  "India",   "Juliette", "Kilo",   "Lima",   "Mike",    "November",
    "Oscar",  "Papa",    "Quebec",   "Romeo",  "Sierra", "Tango",   "Uniform",
    "Victor", "Whiskey", "Xray",     "Yankee", "Zulu"};

int main(int argc, char *argv[]) {

  char phrase[64];
  if (argc < 2) {
    printf("Enter a word or phrase: ");
    fgets(phrase, 64, stdin);
  } else {
    for (int i = 1; i < argc; i++) {
      strcat(phrase, argv[i]);
    }
  }

  char ch;
  for (int i = 0; i < 64; i++) {
    if (!phrase[i]) {
      break;
    }
    ch = toupper(phrase[i]);
    if (isalpha(ch)) {
      printf("%s ", nato[ch - 'A']);
    }
  }
  putchar('\n');

  return EXIT_SUCCESS;
}
