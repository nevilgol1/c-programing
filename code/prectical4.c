#include<limits.h>
#include<float.h>
void main()
{
    printf("the size of char is:%zu",sizeof(char));
    printf("\n the range of char is from %d to %d",CHAR_MIN,CHAR_MAX);
    printf("\n the size of int is:%zu",sizeof(int));
    printf("\n the range of int is from %d to %d",INT_MIN,INT_MAX);
    printf("\n the size of unsigned int is:%zu",sizeof( unsigned int));
    printf("\n the range of unsigned int is from %0 to %u",UINT_MAX);
    printf("\n the size of long is:%zu",sizeof(long));
    printf("\n the range of long is from %ld to %ld",LONG_MIN,LONG_MAX);
    printf("\n the size of unsigned long is:%zu",sizeof(unsigned long));
    printf("\n the range of unsigned long is from %0 to %lu",ULONG_MAX);
    printf("\n the size of long long is:%zu",sizeof(long long));
    printf("\n the range of long long is from %lld to %lld",LLONG_MIN,LLONG_MAX);
    printf("\n the size of unsigned long long is:%zu",sizeof(unsigned long long));
    printf("\n the range of unsinged long long is from %0 to %llu",ULLONG_MAX);
    printf("\n the size of float is:%zu",sizeof(float));
    printf("\n the range of float is from %e to %e",FLT_MIN,FLT_MAX);
    printf("\n the size of double is:%zu",sizeof(double));
    printf("\n the range of double is from %e to %e",FLT_MIN,FLT_MAX);
    printf("\n the size of long double is:%zu",sizeof(long double));
    printf("\n the range of long double is from %d to %d",LDBL_MIN,LDBL_MAX);
   printf("\n this program is devoloped by nevil gol, 25TCESB9");
}
