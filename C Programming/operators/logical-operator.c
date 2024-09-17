// Logical Operators in C:
// Logical AND (&&)
// Logical OR (||)
// Logical NOT (!)

#include <stdio.h>

int main() {
    int a = 10, b = 20;

    if (a > 5 && b > 15) {
        printf("Both conditions are true\n");
    } else {
        printf("One or both conditions are false\n");
    }


     if (a > 5 || b > 15) {
        printf("At least one condition is true\n");
    } else {
        printf("Both conditions are false\n");
    }


     if (!(a == 10)) {
        printf("a is not equal to 10\n");
    } else {
        printf("a is equal to 10\n");
    }

    return 0;
}
