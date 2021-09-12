#include "utils.h"

int main(int argc, char** argv) {
    for (char** cur = argv + 1; *cur; ++cur) {
        unlink(*cur);
    }
}
