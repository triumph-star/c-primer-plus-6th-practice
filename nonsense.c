#include <stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

}
void jolly(void)
    {
        printf("For he's a jolly good fellow\n");
    }
 void deny(void)
 {
     printf("which nobody can deny!\n");
 }