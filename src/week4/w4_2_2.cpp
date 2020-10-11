//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void PrintFileToFile(const string& path, const string& out_path) {
//	ifstream input(path);
//	if (input) {
//		string line;
//		ofstream output(out_path);
//		while (getline(input, line)) {
//			output << line << endl;
//		}
//		output.flush();
//		output.close();
//	}
//	input.close();
//}
//
//int main() {
//	const string path = "input.txt";
//	const string out_path = "output.txt";
//	PrintFileToFile(path, out_path);
//	return 0;
//}
