#include <stdio.h>

/* Function prototype */
int _abs(int num);

int main() {
    int num = -5;
    int absValue = _abs(num);
    printf("Absolute value of %d is: %d\n", num, absValue);
    return 0;
}

/* Function definition */
int _abs(int num) {
    if (num < 0)
        return -num;
    else
        return num;
}

