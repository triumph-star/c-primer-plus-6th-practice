#include<stdio.h>
int main(void)
{
    int inch = 0;
    float centimeter = 0;
    printf("请输入你身高的英寸数:\n");
    scanf("%d",&inch);
    centimeter = inch * 2.54;
    printf("您的单位身高厘米表示为:%.4ecm\n",centimeter);
    return 0;
}