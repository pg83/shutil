#include "utils.h"

int main(int argc, char** argv) {
    if (argv[1] && strcmp(argv[1], "-f") == 0) {
        if (fopen(argv[2], "r")) {
            exit(errno = 0);
        }
    }

    exit(1);
}
