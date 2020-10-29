#include <fstream>
#include <string>

using namespace std;
string num[11]; // num[i]: convert integer i to string type

ifstream fin;
ofstream fout;

void io_init() {
	for (int i = 1; i <= 10; ++i) num[i] = to_string(i);
}

void input(int problem_id, int marking_iterator) {
	// input & output data file path
	string inp_path_str = "markingData/markingData" + num[problem_id] + "/";
	string out_path_str = "markingData/myData";

	string curr_inp_path_str = inp_path_str + num[marking_iterator] + ".inp";
	const char* curr_inp_path = curr_inp_path_str.c_str();
	string curr_out_path_str = out_path_str + num[marking_iterator] + ".out";
	const char* curr_out_path = curr_out_path_str.c_str();

	fin.open(curr_inp_path);
	fout.open(curr_out_path);
}

void marking(int problem_id) {
	// change directory
	string cd_cmd_str = "cd markingData && ";

	// compare 10 outputs
	for (int marking_iterator = 1; marking_iterator <= 10; ++marking_iterator) {
		string fc_cmd_str = cd_cmd_str + "fc myData" + num[marking_iterator] + ".out markingData" + num[problem_id] + "/" + num[marking_iterator] + ".out";
		const char* fc_cmd = fc_cmd_str.c_str();
		system(fc_cmd);
	}
}