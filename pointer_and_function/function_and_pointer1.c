/* 
 * 변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고,
 * 이를 호출하는 main함수를 작성해보자.
 * 단, 여기서는 다음 두 가지 형태로 함수를 정의해야 한다.
 * 
 * Call-by-value 기반의 SquareByValue 함수
 * Call-by-reference 기반의 SquareByReference 함수
 * 
 * SquareByValue 함수는 인자로 전달된 값의 제곱을 반환해야 하며,
 * SquareByReference 함수는 정수가 저장되어 있는 변수의 주소 값을 인자로 받아서 해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장해야 한다.
 */
#include <stdio.h>
int squareByValue(int x);
void squareByReference(int* p_x);

int main(void) {
    int num1 = 2, num2 = 3;
    int* p_num2 = &num2;
    num1 = squareByValue(num1);
    squareByReference(p_num2);
    printf("%d, %d\n", num1, num2);
    return 0;
}


int squareByValue(int x) {
    return x*x;
}
void squareByReference(int* p_x) {
    *p_x *= *p_x;
}

