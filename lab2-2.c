#include <stdio.h>
int main()
{
int i;
int *ptr; // 포인터 변수 ptr 선언
int **dptr; // 포인터 변수 dptr 선언 
i = 1234;
printf("[checking values before ptr = &i] \n"); // ptr에 주소 i를 대입하기 전 i의 메모리 주소 체크
printf("value of i == %d\n", i);  // int i의 값 출력 
printf("address of i == %p\n", &i); // i의 주소 출력
printf("value of ptr == %p\n", ptr); // 변수 ptr의 쓰레기값 출력
printf("address of ptr == %p\n", &ptr); // 변수 ptr의 주소 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");  // ptr에 i의 주소를 대입한 후 i의 메모리 주소 체크
printf("value of i == %d\n", i); // int i의 값 출력 
printf("address of i == %p\n", &i); // i의 주소 출력
printf("value of ptr == %p\n", ptr); // 변수 ptr의 값 출력(i의 주소값)
printf("address of ptr == %p\n", &ptr); // 변수 ptr의 주소 출력 
printf("value of *ptr == %d\n", *ptr);  // 변수 ptr이 가리키는 주소 i의 실제 값 출력(i의 값==1234 출력)
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n"); // 변수 dptr에 ptr의 주소를 대입한 후 ptr의 주소 체크
printf("value of i == %d\n", i); // i의 값 출력
printf("address of i == %p\n", &i); // i의 주소 출력
printf("value of ptr == %p\n", ptr); // 변수 ptr의 값 출력(i의 주소값)
printf("address of ptr == %p\n", &ptr); // 변수 ptr의 주소 출력 
printf("value of *ptr == %d\n", *ptr);  // 변수 ptr이 가리키는 주소 i의 실제 값 출력(i의 값==1234 출력)
printf("value of dptr == %p\n", dptr);  // 변수 dptr의 값 출력(ptr의 주소값)
printf("address of dptr == %p\n", &dptr); // 변수 dptr의 주소 출력
printf("value of *dptr == %p\n", *dptr); // 변수 dptr이 가리키는 주소 ptr의 값 출력(i의 주소값)
printf("value of **dptr == %d\n", **dptr); // 변수 dptr이 가리키는 주소 ptr이 가리키는 주소 i의 실제 값 출력
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n"); // 변수 ptr이 가리키는 주소 i의 값을 7777로 변경
printf("value of i == %d\n", i); // i의 값 == 7777
printf("value of *ptr == %d\n", *ptr); // 변수 ptr이 가리키는 주소 i의 값 출력 == 7777
printf("value of **dptr == %d\n", **dptr); // 변수 dptr이 가리키는 주소 ptr이 가리키는 주소 i의 실제 값 출력 ==7777
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); // 변수 dptr이 가리키는 주소 ptr이 가리키는 주소 i의 값을 8888로 변경
printf("value of i == %d\n", i); // i의 값 출력 == 8888
printf("value of *ptr == %d\n", *ptr); // 변수 ptr이 가리키는 주소 i의 값 출력 == 8888
printf("value of **dptr == %d\n", **dptr); //변수 dptr이 가리키는 주소 ptr이 가리키는 주소 i의 값 출력 == 8888
return 0;
}
