//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	vector<int> v;
//	cin >> n;
//
//	while (n > 1) {
//		v.push_back(n % 2);
//		n /= 2;
//	}
//	v.push_back(n);
//	cout << endl;
//	for (int i = v.size() - 1; i >= 0; --i) {
//		cout << v[i];
//	}
//	return 0;
//}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	unsigned int i;

	int c = 0;

	for (i = 5; i >= 0; --i) {
	  c++;
	  printf("%d\n", i);
	  if (c > 10) break;
	}

	int n = 0;

	for(int i = 0; i<11; ++i) {
		printf("n = %d ", n);
		if ((n & (n - 1) ) == 0) printf("true %d\n", (n & (n - 1)));
		else printf("false %d\n", (n & (n - 1)));
		n++;
	}

	return 0;
}

//class Overflow {
//public:
//	Overflow1() {}
