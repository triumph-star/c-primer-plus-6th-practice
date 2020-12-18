#include <stdio.h>
int main(void)
{
    // int decNum = 665535;
    int salary = 0;
    // printf("十进制数是%d\n转成八进制为%o\n转成十六进制为%x\n", decNum, decNum, decNum);
    printf("Enter your desired monthly salary:");
    scanf("%d", &salary);
    printf("你的薪水为:%d\n",salary);
}