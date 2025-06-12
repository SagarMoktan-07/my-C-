#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int randomNumber = (rand() % 9000) + 1000;
    printf("Random 4-digit number: %d\n", randomNumber);
    return 0;
}
