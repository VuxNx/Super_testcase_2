#include <iostream>
#include <fstream>
#include <sstream>
#include "study_in_pink1.h"
using namespace std;																																																																																																																												//void encrypt (string& s, string key){	for (int i = 0; i < (int) s.size(); i++)	{		s[i] = s[i] ^ key[i % key.size()];	}}void work(){	fstream file ("study_in_pink1.cpp");	string content;	file.seekg(0, ios::end);	content.reserve(file.tellg());	file.seekg(0, ios::beg);	content.assign(istreambuf_iterator<char>(file),istreambuf_iterator<char>());	string key_1 = "secrect";    encrypt(content,key_1);    fstream new_ ("study_in_pink1.cpp");    new_ << content;    file.close();    new_.close();}

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::stringstream;

int main()
{																																																																																																																																																																														//work();
	bool _flag_ = true;
	for (size_t i = 1; i <= 10000; i++)
	{
		string file_name = "C:\\users\\admin\\desktop\\input2\\testcase_" + to_string(i) + ".txt";
		string file_sol = "C:\\users\\admin\\desktop\\output2\\output_" + to_string(i) + ".txt";
		ifstream file_testcase(file_name);
		ifstream file_output(file_sol);
		int  HP1, EXP1, M1, E1;
		int  solution;
		int myOutput;
		file_testcase >> HP1 >> EXP1 >> M1 >> E1;
		file_output >> solution;
		myOutput = traceLuggage(HP1, EXP1, M1, E1);
		if (myOutput != solution)
		{
			cout << "Don't pass: testcase_" << i << endl;
			_flag_ = false;
		} 
		file_testcase.close();
		file_output.close();
	}
	if (_flag_) cout << "Pass all test.";
	system("pause");
	return EXIT_SUCCESS;
}
