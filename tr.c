#include "utils.h"

int main(int argc, char** argv) {
    int ch;
    char fr = argv[1][0];
    char to = argv[2][0];

    while ((ch = getchar()) != EOF) {
        if (ch == fr) {
            write(1, &to, 1);
        } else {
            write(1, &ch, 1);
        }
    }

    exit(errno = 0);
}
