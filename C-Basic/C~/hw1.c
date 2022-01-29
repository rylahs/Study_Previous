#include <stdio.h>

int main_hw1(void) {
	/*
	기본 알고리즘 1. 변수, 데이터 타입
	 1. 원의 면적을 구하는 프로그램을 작성하기
	
	조건1) 프로젝트명과 클래스명은 직관적으로 생성
	조건2) 원주율(PI)을 저장하는 실수형 상수 변수를 생성하고 값을 설정(PI = 3.14)
		조건3) 원의 반지름을 저장하는 실수형 변수를 생성하고 적당한 값을 설정
		조건4) 원의 면적을 출력하기(반지름 * 반지름 * PI = 원의 면적)
		[출처] https://blog.naver.com/hack4ork/221682675581
	*/
	const double PI = 3.14;
	double radius = 5;
	printf("============ 문제 1 ============\n");
	printf("Input Radius : ");
	scanf_s("%lf", &radius);
	printf("반지름 %.1lf 인 원의 면적 : %lf\n", radius, radius * radius * PI);
	/*
	2. 성적표를 구하는 프로그램을 작성하기



		조건1) 프로젝트명과 클래스명은 직관적으로 생성
		조건2) 해당 변수를 생성하고 초기값은 0으로 설정하세요. (변수명은 직관적으로 작성 바람)
		국어, 영어, 수학, 과학 정수형 변수 생성.

		조건3) 국어 점수를 90으로 설정하고 점수를 출력.
		조건4) 영어 점수를 80으로 설정하고 점수를 출력.
		조건5) 수학 점수를 70으로 설정하고 점수를 출력.
		조건6) 과학 점수를 60으로 설정하고 점수를 출력.
		조건7) 모든 과목의 평균값과 총점을 저장할 변수를 생성. (변수명은 직관적으로 작성 바람)
		조건8) 평균값과 총점을 출력하세요.
		[출처] https://blog.naver.com/hack4ork/221682675581
		*/
	int kor = 90, eng = 80, math = 70, sci = 60;
	int sum = kor + eng + math + sci;
	double avg = sum / 4;
	printf("\n\n============ 문제 2 ============\n");
	printf("성적 입력을 시작합니다.\n");
	printf("국어 : ");
	scanf_s("%d", &kor);
	printf("영어 : ");
	scanf_s("%d", &eng);
	printf("수학 : ");
	scanf_s("%d", &math);
	printf("과학 : ");
	scanf_s("%d", &sci);

	printf("국어 성적 : %d\n", kor);
	printf("영어 성적 : %d\n", eng);
	printf("수학 성적 : %d\n", math);
	printf("과학 성적 : %d\n", sci);
	printf("평균 성적 : %.2lf\n", avg);
	printf("총합 성적 : %d\n", sum);
	printf("\n");
	/*
	3. 알파벳과 한글의 자음, 모음을 구하는 프로그램 작성하세요.



		조건1) 프로젝트명과 클래스명은 직관적으로 생성하세요.
		조건2) 알파벳 자음, 모음과 한글 자음, 모음에 대한 정보는 인터넷을 검색하여 정보를 획득 바람.
		조건3) 알파벳 자음, 모음과 한글 자음, 모음 변수들을 생성하고 초기값을 0으로 설정하세요.
		조건4) 각 변수에 대해서 자음, 모음 갯수를 입력하세요.
		조건5) 알파벳 자음, 모음과 한글 자음, 모음에 대한 갯수를 출력하세요.
		[출처] https://blog.naver.com/hack4ork/221682675581
	*/
	// 알파벳의 자음 갯수 : 21 // 모음 갯수 : 5
	// 한글 자음 갯수 : 14     // 모음 갯수 : 10
	int engConNum = 0, engVowNum = 0, korConNum = 0, korVowNum = 0; // 조건 3 초기화
	printf("\n\n============ 문제 3 ============\n");
	printf("알파벳 자음 갯수를 입력하세요(21) : ");
	scanf_s("%d", &engConNum);
	printf("알파벳 모음 갯수를 입력하세요(5) : ");
	scanf_s("%d", &engVowNum);
	printf("한글 자음 갯수를 입력하세요(14)  : ");
	scanf_s("%d", &korConNum);
	printf("한글 모음 갯수를 입력하세요(10)  : ");
	scanf_s("%d", &korVowNum);
	
	printf("\n알파벳 자음 갯수 : %d\n", engConNum);
	printf("알파벳 모음 갯수 : %d\n", engVowNum);
	printf("한글 자음 갯수   : %d\n", korConNum);
	printf("한글 자음 갯수   : %d\n\n", korVowNum);
	/*
	4. 온도를 구하는 프로그램 작성.
		조건1) 프로젝트명과 클래스명은 직관적으로 생성하세요.
		조건2) 화씨 온도를 저장하는 정수형 변수 생성.
		조건3) 화씨 온도에 40도의 값을 설정.
		조건4) 섭씨 온도를 저장하는 실수형 변수 생성.
		조건5) 화씨 온도를 섭씨 온도로 변환하세요. (화씨온도 - 32) / 1.8 = 섭씨온도
		조건6) 섭씨 온도를 출력하세요.
		[출처] https://blog.naver.com/hack4ork/221682675581
	*/
	int fah = 40; // 정수
	double cel = 0;
	
	cel = ((double)fah - 32) * 5 / 9; // 섭씨 온도 = (화씨온도 - 32) * 5 / 9;
	printf("\n\n============ 문제 4 ============\n");
	printf("화씨온도를 섭씨온도로 변환합니다.\n");
	printf("화씨온도 : %d ----> 섭씨온도 : %lf\n", fah, cel);
	/*

	5. scanner 입력에 대한 연습이 충분하면 아래의 프로그램을 만드세요.

	조건1) 프로젝트명과 클래스명은 직관적으로 생성하세요.
	조건2) 문제1 에서 원주율을 저장하는 변수를 사용자가 입력하여 면적을 출력.
	조건3) 문제2 에서 국어, 영어, 수학, 과학 점수를 사용자가 입력을 하고 평균값과 총점을 출력.
	
	[출처] https://blog.naver.com/hack4ork/221682675581
*/
	// 위 코드를 수정해서 완료


	return 0;
}