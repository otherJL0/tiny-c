#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PROJECT_NAME "greetings"

int main(int argc, char *argv[]) {
  const char *name = (argc < 2) ? getenv("USER") : argv[1];

  // Determine time of day to format greeting modifier
  time_t now;
  time(&now);

  struct tm *clock = localtime(&now);

  char *modifier;
  if (clock->tm_hour < 12) {
    modifier = "morning";
  } else if (clock->tm_hour < 17) {
    modifier = "afternoon";
  } else {
    modifier = "evening";
  }
  printf("%d, %d %d", clock->tm_wday, clock->tm_mon + 1, clock->tm_mday);
  printf("Good %s, %s! The time is now %s\n", modifier, name, ctime(&now));
  return EXIT_SUCCESS;
}
