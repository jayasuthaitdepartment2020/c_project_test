#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main(int arg, char *argm[])
{
    printf("hello world");
    printf("number of character u enter %d ", arg);
    for (int i = 0; i < arg; i++)
        printf("Argument %d : %s \n ", i, argm[i]);
    /* Variables in c prim %d & %i , %f & %F , %lf,%c,%s
    int integer = 4;
    float float_num = 4;
    char character = 1;
    double double_size = 8;
    unsigned char uns = 255;
    //printf("the unsigned one %c", uns);

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);
    printf("Storage size for float : %zu \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float)FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double)DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double)-DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG);
*/
    return 0;
}