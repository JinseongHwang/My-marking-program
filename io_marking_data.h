
#include <string>
#include <cstdlib>

using namespace std;
string num[11]; // num[i]: convert integer i to string type

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

	freopen(curr_inp_path, "r", stdin);
	freopen(curr_out_path, "w", stdout);
}