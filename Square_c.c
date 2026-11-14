#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows and columns : ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", j + 65);
        }
        printf("\n");
    }
    return 0;
}
