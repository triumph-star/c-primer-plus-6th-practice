#include <stdio.h>
int main(void)
{
    float second = 0;
    int age = 0;
    printf("请输入你的年龄:\n");
    scanf("%d",&age);
    second = age * 3.156e+07;
    printf("您的年龄为%d,\n对应的秒数为%e\n",age,second);
    return 0;
}