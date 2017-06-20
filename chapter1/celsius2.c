#include <stdio.h>

main()
{
    float fahr;
    float celsius;

    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
	printf("\"온도 변환 프로그램\"\n\n");
    while(fahr <= upper )
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
//        celsius = 5/9 * (fahr - 32); // 정수 나눗셈 연산 시 소숫점 아래가 정상적으로 표현 안됨.  
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr+step;
    }
}
