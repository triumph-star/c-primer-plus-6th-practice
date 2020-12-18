#include <stdio.h>
int main(void)
{
    int cups = 0;
    printf("请输入杯数:\n");
    scanf("%d",&cups);
    printf("您输入的杯数为:%d\n等于%.1f品脱\n等于%d盎司\n等于%d汤勺\n等于%d茶勺\n",cups,cups/2.0,cups*8,cups*16,cups*48);

}