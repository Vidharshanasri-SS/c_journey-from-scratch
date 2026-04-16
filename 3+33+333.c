#include <stdio.h>

int main() {
    int a, b, sum = 0, dup = 0;

    scanf("%d", &a);  // number of terms
    scanf("%d", &b);  // digit to repeat

    for (int i = 1; i <= a; i++) {
        dup = dup * 10 + b;   // build the term
        sum += dup;           // add to sum
        printf("%d", dup);

        if (i < a)
            printf(" + ");
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
