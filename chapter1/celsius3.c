/*
	Name: celsius3.c
	Copyright:
	Author: DS
	Date: 19-06-17 11:22
	Description: ���� -> ȭ�� ��ȯ ���α׷�
*/


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

    celsius = lower;

    while(celsius <= upper)
    {
        fahr = celsius * 1.8 + 32.0;
//        celsius = 5/9 * (fahr - 32); // ���� ������ ���� �� �Ҽ��� �Ʒ��� ���������� ǥ�� �ȵ�.
        printf("%3.0f\t%6.1f\n",celsius,fahr);
        celsius = celsius + step;
    }
}
