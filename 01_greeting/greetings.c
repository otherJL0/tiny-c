#include <stdio.h>
#include <stdlib.h>

#define PROJECT_NAME "greetings"

int main() {
  const char *user = getenv("USER");
  printf("Hello, %s!\n", user);
  return EXIT_SUCCESS;
}
