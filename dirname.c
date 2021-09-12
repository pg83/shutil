#include "utils.h"

int main(int argc, char** argv) {
    char* start = argc > 1 ? argv[1] : strdup("");
    char* end = start;

    for (char* cur = start; *cur; ++cur) {
        if (*cur == '/') {
            end = cur;
        }
    }

    write(1, start, end - start);
    write(1, "\n", 1);
}
