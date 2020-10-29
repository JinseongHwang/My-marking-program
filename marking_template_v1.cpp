/*
	============================================================================

	작성: 황진성(eddy5360@naver.com)
	용도: markingData 들을 직접 비교하기 귀찮아서 만듦.
	개선이 필요한 점:
	- file output stream을 변경하는 방법을 알게되면 하나의 파일로 merge할 예정.
	- system 명령어를 통해서 입력에 따라 PROBLEM_ID를 수동으로 바꾸지 않아도 되게 변경하고픔.

	============================================================================

	내가 작성한 프로그램에 파일 입력과 출력을 쉽게 해주는 소스코드 양식입니다.
	반드시 이 프로그램에서 알고리즘을 작성한 후 실행해서 myData[1-10].out를 채워주세요.
	그 다음 marking_filecompare.cpp를 실행해서 채점 결과를 확인하세요.

	또한 문제 번호에 맞는 PROBLEM_ID를 아래 매크로에 대입해주세요.
*/

#include <bits/stdc++.h>

/////////////////////////////////////////////////////////////////////////////////////
///////////////// Do not modify - START
/////////////////////////////////////////////////////////////////////////////////////
#include "io_marking_data_v1.h"
#define PROBLEM_ID 1

int main() {
	io_init();
	for (int marking_iterator = 1; marking_iterator <= 10; ++marking_iterator) {
		input(PROBLEM_ID, marking_iterator);
		/////////////////////////////////////////////////////////////////////////////////////
		///////////////// Do not modify - END
		/////////////////////////////////////////////////////////////////////////////////////
		// main - Write here.




		/////////////////////////////////////////////////////////////////////////////////////
		///////////////// Do not modify - START
		/////////////////////////////////////////////////////////////////////////////////////
	}
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
///////////////// Do not modify - END
/////////////////////////////////////////////////////////////////////////////////////