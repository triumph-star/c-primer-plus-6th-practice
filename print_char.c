#include <stdio.h>
int main(void)
{
    int getNum = 0;
    printf("请输入一个数字:\n");
    scanf("%d",&getNum);
    printf("这个数字转化为ASCII码值为%c\n",getNum);
    return 0;
}