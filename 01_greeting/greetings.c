#include <stdio.h>
#include <stdlib.h>

#define PROJECT_NAME "greetings"

int main(int argc, char *argv[]) {
  const char *user = (argc < 2) ? getenv("USER") : argv[1];
  printf("Hello, %s!\n", user);
  return EXIT_SUCCESS;
}
