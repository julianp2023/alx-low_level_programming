#include <stdio.h>

int _abs(int num);  // Function prototype

int main() {
    int num = -5;
    int absValue = _abs(num);
    printf("Absolute value of %d is: %d\n", num, absValue);
    return 0;
}

int _abs(int num) {
    if (num < 0)
        return -num;
    else
        return num;
}

