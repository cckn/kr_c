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
	printf("\"�µ� ��ȯ ���α׷�\"\n\n");
    while(fahr <= upper )
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
//        celsius = 5/9 * (fahr - 32); // ���� ������ ���� �� �Ҽ��� �Ʒ��� ���������� ǥ�� �ȵ�.  
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr+step;
    }
}
