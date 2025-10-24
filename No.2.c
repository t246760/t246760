#include <float.h>
#include<limits.h>
#include<stdio.h>

int main(void)
{
    printf("float型の最大値:%g\n",FLT_MAX);
    printf("float型の最小値:%g\n",FLT_MIN);
    printf("double型の精度:%d\n",DBL_DIG);
    printf("short型の最大値:%d\n",SHRT_MAX);
    printf("short型の最小値%d\n",SHRT_MIN);

    return 0;
}