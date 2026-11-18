#include <stdio.h>
int main() {
    int c = 0;
    int i, n;
    int a[8] = {24, 0, 1, 9, 0, 6, 0, 27};
    for (int i = 0; i < 8; ++i) {
        if (a[i] != 0) {
            int t = a[i];
            a[i] = a[c];
            a[c] = t;
            ++c;
        }
    }
    for (int i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }
}
