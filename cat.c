#include "utils.h"

int main(int argc, char** argv) {
    FILE* in = fopen(argv[1], "r");
    FILE* out = stdout;
    char buf[1024];
    ssize_t n;

    if (!in) {
        in = stdin;
    }

    while ((n = fread(buf, 1, sizeof(buf), in)) > 0) {
        fwrite(buf, 1, n, out);
    }
}
