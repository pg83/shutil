#include "utils.h"

static void mkd(const char* b, const char* e) {
    if (b == e) {
        return;
    }

    if (mkdir(substr(b, e - b), 0777) == 0) {
    } else {
        if (errno == EEXIST) {
        } else {
            err(1, "mkdir");
        }
    }
}

static void mkpd(const char* path) {
    const char* cur;

    if (*path == '-') {
        return;
    }

    for (cur = path; *cur; ++cur) {
        if (*cur == '/') {
            mkd(path, cur);
        }
    }

    mkd(path, cur);
}

int main(int argc, char** argv) {
    for (char** path = argv + 1; *path; ++path) {
        mkpd(*path);
    }

    exit(errno = 0);
}
