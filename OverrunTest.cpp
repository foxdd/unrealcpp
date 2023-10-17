#include <cstdlib>

void bad_02() {
    int *n = new int[10];
    int a = rand() % 15;
    //bad: integer a possibly greater than 10
    n[a] = 3;
}