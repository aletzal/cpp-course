//#include <algorithm>
//#include <vector>
//#include <iostream>
//#include <chrono>
//
//using namespace std;
//using namespace std::chrono;
//
//struct Person {
//	string name;
//	string surname;
//	int age;
//};
//
//void swap(int& x, int& y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Sort(vector<int>& v) {
//	sort(begin(v), end(v));
//}
//
//vector<Person> getMoscowPopulation() {
//	vector<Person> p;
//	for (int i = 0; i < 12500000; ++i) {
//		p.push_back({"Vasya", "Pupkin", i});
//	}
//	return p;
//}
//
//void PrintPopulationSize(const vector<Person> &p) {
//	cout << endl << "There are " << p.size() << " people in Moscow" << endl;
//}
//
//int main() {
//	int a = 1;
//	int b = 2;
//
//	swap(a, b);
//
//	cout << "a: " << a << endl;
//	cout << "b: " << b << endl;
//
////	vector<int> nums = {3, 7, 1, 4, 9, 2, 0};
////	Sort(nums);
//
////	for (auto x : nums) {
////		cout << x << " ";
////	}
//
//	auto start = steady_clock::now();
////	vector<Person> people = getMoscowPopulation();
//	auto stop = steady_clock::now();
//
//	cout << "getMoscowPopulation: "
//		 << duration_cast<milliseconds>(stop - start).count()
//		 << "ms";
//
//	start = steady_clock::now();
////	PrintPopulationSize(people);
//	PrintPopulationSize(getMoscowPopulation());
//	stop = steady_clock::now();
//
//	cout << "PrintPopulationSize: "
//		 << duration_cast<milliseconds>(stop - start).count()
//		 << "ms";
//	return 0;
//}
