#include <stdio.h>

void two()
{
    printf("two\n");
}

void one_three(void)
{
  printf("one\n");
  two();
  printf("three\n");
}

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
}