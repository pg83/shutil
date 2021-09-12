#include "utils.h"

int main(int argc, char** argv) {
    chmod(argv[2], atoi(argv[1]));
}
