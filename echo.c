#include "utils.h"

int main(int argc, char** argv) {
    for (++argv; *argv; ++argv) {
        printf("%s ", *argv);
    }

    printf("\n");

    exit(errno = 0);
}
