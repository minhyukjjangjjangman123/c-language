// 프로그램 : BMI 계산기
// 만든이 : 이민혁
// 몸무게 : (kg) / (키(m) * 키(m))
#include <stdio.h>

int main() {
	
	float weight = 82.5; // 몸무게는 단위가 kg
	float height = 1.83; // 키는 단위가 m
	float bmi;
	bmi = weight / (height * height);
	printf("당신의 BMI : %.2f\n", bmi); // 소수점 긴게 꼴보기 싫다면 %앞에 1,2,3,4,5 붙이기
	return 0;
}