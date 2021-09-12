#pragma once

#include <err.h>
#include <time.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

static char* substr(const char* s, size_t len) {
    char* res = malloc(len + 1);

    memcpy(res, s, len);
    res[len] = 0;

    return res;
}
