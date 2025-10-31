#include <stdio.h>

int main()
{
    int k;
    printf("テストの点数を教えてください");
    scanf("%d", &k);
    
    if(k>=60)
    {
        printf("合格です");
    }
    
    else
    {
        printf("不合格です");
    }

    return 0;
}