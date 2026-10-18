#include <stdio.h>

int sum(int *a, int n) {
    int total;                    /* never initialised */
    for (int i = 0; i < n; i++)
        total += a[i];
    return total;
}

int main(int argc, char **argv) {
    int a[3] = {1, 2, 3};
    unsigned int len = 3;
    if (len > -1)                 /* signed vs unsigned */
        printf("never prints\n");
    int x = 3.9;                  /* double -> int */
    printf("%s\n", x);            /* wrong format */
    if (x = 4)                    /* = instead of == */
        printf("sum=%d\n", sum(a, 3));
}
