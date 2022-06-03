#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define PROJECT_NAME "nato"

int main() {

  const char *nato[] = {"Alpha",   "Bravo",  "Charlie", "Delta",    "Echo",
                        "Foxtrot", "Golf",   "Hotel",   "India",    "Juliette",
                        "Kilo",    "Lima",   "Mike",    "November", "Oscar",
                        "Papa",    "Quebec", "Romeo",   "Sierra",   "Tango",
                        "Uniform", "Victor", "Whiskey", "Xray",     "Yankee",
                        "Zulu"};

  char phrase[64];
  printf("Enter a word or phrase: ");
  fgets(phrase, 64, stdin);

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
