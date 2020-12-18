#include <stdio.h>
#include <string.h> /*提供strlen()函数原型*/
#define PRAISE "You are an extraordinary being"

int main(void)
{
    char name[40];
    printf("What's your name?\n");
    scanf("%s",name);
    printf("Hello, %s.%s\n",name,PRAISE);
    printf("你的名字长度 %zd  占用 %zd 内存单元。\n",strlen(name),sizeof name);
    printf("PRAISE宏定义长短为 %zd",strlen(PRAISE));
    printf("占用内存资源 %zd。\n",sizeof PRAISE);
    return 0;
}
