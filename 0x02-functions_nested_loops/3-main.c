#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _islower('H');
    printf("%d\n", r);

    r = _islower('h');
    printf("%d\n", r);

    return 0;
}

