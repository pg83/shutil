#include "utils.h"

static void mkd(const char* b, const char* e) {
    if (mkdir(substr(b, e - b), 0777) == 0) {
    } else {
        err(1, "mkdir");
    }
}

int main(int argc, char** argv) {
    char* path = argv[1];
    char* cur;

    if (*path == '-') {
        path = argv[1];
    }

    for (cur = path; *cur; ++cur) {
        if (*cur == '/') {
            mkd(path, cur);
        }
    }

    mkd(path, cur);
}
