#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printCurrentTime() {
    time_t now;
    time(&now);
    printf("%s", ctime(&now));
}

int main(int argc, char *argv[]) {
    if (argc < 2)
        puts("Hello there");
    else
        printf("Hello %s\n", argv[1]);

    printCurrentTime();

    return (EXIT_SUCCESS);
}
