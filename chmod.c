#include "utils.h"

int main(int argc, char** argv) {
    for (++argv; *argv; ++argv) {
        chmod(*argv, 493);
    }

    exit(errno = 0);
}
