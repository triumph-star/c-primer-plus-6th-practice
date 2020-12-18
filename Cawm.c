#include <stdio.h>
int main(void)
{
    // float g,h;
    // float tax, rate;
    // g = 0e21;
    // tax = rate*g;

    int imate = 2;
    long shot = 53456;
    char grade = 'A';
    float log = 2.71828;

    printf("The odds against the %d were %ld to 1.\n", imate, shot);
    printf("A score of %f is not an %c grade.\n", log, grade);
}

// #include <stdio.h>
// int main(void)
// {
//     float g, h;
//     float tax, rate;
//     rate = 0.08;
//     g = 1.0e5;
//     tax = rate * g;
//     h = g + tax;
//     printf("You owe %e\n plus $%f\n in taxes for a total of $%f.\n", g, tax, h);
//     return 0;
// }