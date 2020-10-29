/*
	============================================================================

	작성: 황진성(eddy5360@naver.com)
	용도: markingData 들을 직접 비교하기 귀찮아서 만듦.
	개선이 필요한 점: 
	- file output stream을 변경하는 방법을 알게되면 하나의 파일로 merge할 예정.
	- system 명령어를 통해서 입력에 따라 PROBLEM_ID를 수동으로 바꾸지 않아도 되게 변경하고픔.

	============================================================================

	내가 작성한 프로그램의 결과값과 정답 결과값을 비교해주는 프로그램입니다.
	이 프로그램을 실행하기 전에 marking_template.cpp를 먼저 실행해서 myData[1-10].out를 채워주세요.

	또한 문제 번호에 맞는 PROBLEM_ID를 아래 매크로에 대입해주세요.
*/

#define PROBLEM_ID 4

#include <stdlib.h>
#include <string>

std::string num[11]; // num[i]: convert integer i to std::string type

int main() {
	for (int i = 1; i <= 10; ++i) num[i] = std::to_string(i);
	
	// change directory
	std::string cd_cmd_str = "cd markingData && ";

	// compare 10 outputs
	for (int marking_iterator = 1; marking_iterator <= 10; ++marking_iterator) {
		std::string fc_cmd_str = cd_cmd_str + "fc myData" + num[marking_iterator] + ".out markingData" + num[PROBLEM_ID] + "/" + num[marking_iterator] + ".out";
		const char* fc_cmd = fc_cmd_str.c_str();
		system(fc_cmd);
	}
	return 0;
}