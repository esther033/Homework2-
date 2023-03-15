#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
printf("[----- [Park Esther]  [2022041054] -----]\n"); 
printf("Size of char: %ld byte\n",sizeof(charType)); // sizeof 연산자로 char 자료형의 크기를 구함 
printf("Size of int: %ld bytes\n",sizeof(integerType)); // sizeof 연산자로 int 자료형의 크기를 구함
printf("Size of float: %ld bytes\n",sizeof(floatType)); // sizeof 연산자로 float 자료형의 크기를 구함
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // sizeof 연산자로 double 자료형의 크기를 구함
printf("-----------------------------------------\n"); 
printf("Size of char: %ld byte\n",sizeof(char)); // sizeof 연산자로 char 자료형의 크기를 구함
printf("Size of int: %ld bytes\n",sizeof(int));  // sizeof 연산자로 int 자료형의 크기를 구함
printf("Size of float: %ld bytes\n",sizeof(float));  // sizeof 연산자로 float 자료형의 크기를 구함
printf("Size of double: %ld bytes\n",sizeof(double));  // sizeof 연산자로 double 자료형의 크기를 구함
printf("-----------------------------------------\n"); 
printf("Size of char*: %ld byte\n",sizeof(char*));  // char형 포인터 변수의 크기를 출력
printf("Size of int*: %ld bytes\n",sizeof(int*));  // int형 포인터 변수의 크기를 출력
printf("Size of float*: %ld bytes\n",sizeof(float*));  // float형 포인터 변수의 크기를 출력
printf("Size of double*: %ld bytes\n",sizeof(double*)); // double형 포인터 변수의 크기를 출력
return 0;
}
