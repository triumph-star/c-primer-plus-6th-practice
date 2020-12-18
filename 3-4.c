#include<stdio.h>
int main(void)
{
    float num1 = 0;
    printf("请输入一个浮点数值:");
    scanf("%f",&num1);
    printf("你输入的浮点数值保留六位小数为:%.6f\n",num1);
    printf("你输入的浮点数值指数显示为:%e\n",num1);
    printf("你输入的浮点数值十六进制为:%x\n",num1);
    
    return 0;
}