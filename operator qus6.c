#include <stdio.h>

int main() {
    int expr1 = 4 > 5;
    int expr2 = 4 < 5;
    int expr3 = 4 >= 5;
    int expr4 = 5 == 5;
    int expr5 = 4 == 5;
    printf("4 > 5: %d\n", expr1);
    printf("4 < 5: %d\n", expr2);
    printf("4 >= 5: %d\n", expr3);
    printf("5 == 5: %d\n", expr4);
    printf("4 == 5: %d\n", expr5);

    return 0;
}
