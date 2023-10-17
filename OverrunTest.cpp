#include <cstdlib>

void bad_02() {
    int n[10] = {0};
    int a = rand() % 15;
    n[a] = 3;
}