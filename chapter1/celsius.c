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
//        celsius = 5/9 * (fahr - 32); // ���� ������ ���� �� �Ҽ��� �Ʒ��� ���������� ǥ�� �ȵ�.  
        printf("%3d\t%6d\n",fahr,celsius);
        fahr = fahr+step;
    }
}