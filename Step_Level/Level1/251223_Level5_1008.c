#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B;

	scanf("%d", &A);
	scanf("%d", &B);

	printf("%.9f\n", (double)A/B); 
    
    // 정수로 선언하고 실수로 출력해야하는 문제
	// 10^-9까지 출력하려면 float은 크기 차이로 안되고  double 사용해야함
    // 결과값이 실수로 나올려면 연산시 정수/실수, 실수/정수, 실수/실수 경우의 수는 3개임
    // A만 double로 형변환 후 연산시 결과값은 실수로 나오게 됨
    // 결국 출력은 9자리까지만 출력해야하므로 %.9f 사용

	return 0;
}
