#include <stdio.h>

main()
{
    int fahr;
    int celsius;

    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper )
	{
        celsius = 5 * (fahr - 32) /9;
//        celsius = 5/9 * (fahr - 32); // 정수 나눗셈 연산 시 소숫점 아래가 정상적으로 표현 안됨.  
        printf("%3d\t%6d\n",fahr,celsius);
        fahr = fahr+step;
    }
}
