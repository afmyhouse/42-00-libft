#include <stdio.h>
int main()
{
    printf("sizeof(char) = %lu\n", sizeof(char));
    printf("sizeof(unsigned char) = %lu\n", sizeof(unsigned char));

    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(unsigned int) = %lu\n", sizeof(unsigned int));

    printf("sizeof(float) = %lu\n", sizeof(float));
    printf("sizeof(double) = %lu", sizeof(double));
    printf("\n");
    return 0;
}