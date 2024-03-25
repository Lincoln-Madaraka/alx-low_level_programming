#include<stdio.h>
/**
 *main-Entry point
 *Return:Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float e;
printf("size of an int, %lubyte(s)", (unsigned long) sizeof(a));
printf("size of a long int, %lubyte(s)", (unsigned long) sizeof(b));
printf("size of a long long  int, %lubyte(s)", (unsigned long) sizeof(c));
printf("size 0f a char, %lubyte(s)", (unsigned long) sizeof(d));
printf("size of a float %lubyte(s)", (unsigned long) sizeof(e));
return (0);
}
