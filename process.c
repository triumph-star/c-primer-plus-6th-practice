#include <stdio.h>
int main(void)
{
    int a,b;
    a = 5;
    b = 2; //第6行
    printf("第6行%d\n",b);
    b = a;
    printf("第7行%d\n",b);
    a = b;
    printf("%d %d\n",b,a);
    return 0;
}