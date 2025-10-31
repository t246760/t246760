#include <stdio.h>

int main()
{
    int k;
    printf("テストの点数を教えてください");
    scanf("%d", &k);
    
    if(k>=90)
    {
        printf("S評価です");
    }
    else

    if(k>=80)
    {
        printf("A評価です");
    }
    else
    
    if(k>=70)
    {
        printf("B評価です");
    }
    else
    
    if(k>=60)
    {
        printf("C評価です");
    }
    else
    {
        printf("不合格です");
    }

    return 0;
}