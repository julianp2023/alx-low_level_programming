#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _isalpha('H');
    printf("%d\n", r);

    r = _isalpha('h');
    printf("%d\n", r);

    return 0;
}

