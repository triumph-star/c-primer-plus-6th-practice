#include<stdio.h>
int main(void)
{   
    int quark = 0;
    float waterMoleculeNum = 0,
          UnitWaterMoleWeight = 3.0E-23;
    printf("请输入水的夸克数:\n");
    scanf("%d",&quark);
    waterMoleculeNum = quark * 950 / UnitWaterMoleWeight;
    printf("水分子的数量为:%.6e\n",waterMoleculeNum);
    return 0;
}
