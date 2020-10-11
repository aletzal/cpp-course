//#include <iostream>
//#include <fstream>
//#include <string>
//
//const std::string path = "src/week4/w4_fstream.txt";
//const std::string path2 = "src/week4/w4_fstream_2.txt";
//const std::string path3 = "src/week4/w4_fstream_3.txt";
//
//void ReadAll(const std::string& path) {
//	std::ifstream input(path);
//	if (input) {
//		std::string line;
//		while (std::getline(input, line)) {
//			std::cout << line << std::endl;
//		}
//	}
//}
//
//int main() {
//	std::ifstream input(path);
//	std::string line;
//	if (input) {
//		while (std::getline(input, line)) {
//			std::cout << line << std::endl;
//		}
//		std::cout << "Done" << std::endl;
//	} else {
//		std::cout << "Error" << std::endl;
//	}
//	input.close();
//
//	std::string year;
//	std::string month;
//	std::string day;
//
//	input = std::ifstream(path2);
//
//	if (input) {
//		std::getline(input, year, '-');
//		std::getline(input, month, '-');
//		std::getline(input, day, '-');
//		std::cout << year << " " << month << " " << day << std::endl;
//	}
//	input.close();
//
//	input = std::ifstream(path2);
//
//	int y = 0;
//	int m = 0;
//	int d = 0;
//
//	if (input) {
//		input >> y;
//		input.ignore(1);
//		input >> m;
//		input.ignore(1);
//		input >> d;
//		input.ignore(1);
//	}
//	input.close();
//	std::cout << year << " " << month << " " << day << std::endl;
//
//	std::ofstream output(path3);
//	output << "first first line" << std::endl;
//	output.flush();
//	output.close();
//
//	output = std::ofstream(path3, std::ios::app);
//	if (!output) {std::cout << "Error" << std::endl;}
//	output << "second second line" << std::endl;
//	output.flush();
//	output.close();
//
//	ReadAll(path3);
//	return 0;
//}
