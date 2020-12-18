#include <stdio.h>
int main(void)
{
    /**
     * 程序目标实现英寸单位转换为厘米单位
    */
   float inch,centimeter;
   printf("请输入一个英寸单位数:");
   scanf("%f",&inch);
   centimeter = 2.54 * inch;
   printf("转换成厘米单位为:%f\n",centimeter);
}