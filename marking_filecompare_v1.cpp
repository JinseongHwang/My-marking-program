/*
	============================================================================

	�ۼ�: Ȳ����(eddy5360@naver.com)
	�뵵: markingData ���� ���� ���ϱ� �����Ƽ� ����.
	������ �ʿ��� ��: 
	- file output stream�� �����ϴ� ����� �˰ԵǸ� �ϳ��� ���Ϸ� merge�� ����.
	- system ��ɾ ���ؼ� �Է¿� ���� PROBLEM_ID�� �������� �ٲ��� �ʾƵ� �ǰ� �����ϰ���.

	============================================================================

	���� �ۼ��� ���α׷��� ������� ���� ������� �����ִ� ���α׷��Դϴ�.
	�� ���α׷��� �����ϱ� ���� marking_template.cpp�� ���� �����ؼ� myData[1-10].out�� ä���ּ���.

	���� ���� ��ȣ�� �´� PROBLEM_ID�� �Ʒ� ��ũ�ο� �������ּ���.
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