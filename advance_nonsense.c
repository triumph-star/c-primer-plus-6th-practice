#include <stdio.h>

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

void newline(void)
{
    printf("\n");
}

void printComma(void)
{
    printf(",");
}

void printSpace(void)
{
    printf(" ");
}

int main(void)
{
    br();
    printComma();
    printSpace();

    ic();
    printComma();
    newline();

    ic();
    printComma();
    newline();

    br();
    newline();
}
