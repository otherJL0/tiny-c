#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PROJECT_NAME "greetings"

int main(int argc, char *argv[]) {
  const char *name = (argc > 1) ? argv[1] : getenv("USER");

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

  char formatted_time[64];
  strftime(formatted_time, 64, "Today is %A, %B %d, %Y%nIt is %r%n", clock);

  printf("Good %s, %s!\n%s", modifier, name, formatted_time);

  return EXIT_SUCCESS;
}
