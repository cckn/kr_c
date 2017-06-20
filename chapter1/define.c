#include <stdio.h>

#define LOWER 0
#define UPEER 300
#define STEP 20


void main()
{
    int fahr;

    for(fahr = LOWER ; fahr <= UPEER ; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}
