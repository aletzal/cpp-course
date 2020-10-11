//#include <iostream>
//#include <map>
//#include <set>
//#include <vector>
//using namespace std;
//
//int GetNod(int a, int b) {
//	if (a < 0) {
//		a *= -1;
//	}
//	if (b < 0) {
//		b *= -1;
//	}
//	while (a != 0 && b != 0) {
//		if (a > b) {
//			a %= b;
//		} else {
//			b %= a;
//		}
//	}
//	return a + b;
//}
//
//int GetNok(int a, int b) {
//	return a * b / GetNod(a, b);
//}
//
//class Rational {
//public:
//	Rational() {
//		num = 0;
//		den = 1;
//	}
//	Rational(int numerator, int denominator) {
//		if (numerator == 0) {
//			denominator = 1;
//		} else {
//			int nod = GetNod(numerator, denominator);
//			if (nod > 0) {
//				numerator /= nod;
//				denominator /= nod;
//			}
//			if (denominator < 0) {
//				numerator *= -1;
//				denominator *= -1;
//			}
//		}
//		num = numerator;
//		den = denominator;
//	}
//
//	int Numerator() const {
//		return num;
//	}
//	int Denominator() const {
//		return den;
//	}
//
//	void print() {
//		cout << num << "/" << den << endl;
//	}
//private:
//	int num;
//	int den;
//};
//
//// Вставьте сюда реализацию operator == для класса Rational из второй части
//bool operator==(const Rational& lhs, const Rational& rhs) {
//	if (lhs.Denominator() == rhs.Denominator()) {
//		return lhs.Numerator() == rhs.Numerator();
//	}
//	int nok = GetNok(lhs.Denominator(), rhs.Denominator());
//	int new_lhs_num = nok / lhs.Denominator();
//	int new_rhs_num = nok / rhs.Denominator();
//	return lhs.Numerator() * new_lhs_num == rhs.Numerator() * new_rhs_num;
//}
//
//bool operator<(const Rational& lhs, const Rational& rhs) {
//	if (lhs.Denominator() == rhs.Denominator()) {
//			return lhs.Numerator() < rhs.Numerator();
//		}
//	int nok = GetNok(lhs.Denominator(), rhs.Denominator());
//		int new_lhs_num = nok / lhs.Denominator();
//		int new_rhs_num = nok / rhs.Denominator();
//		return lhs.Numerator() * new_lhs_num < rhs.Numerator() * new_rhs_num;
//}
//
//// Реализуйте для класса Rational оператор(ы), необходимые для использования его
//// в качестве ключа map'а и элемента set'а
//
//int main() {
//    {
//        const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
//        if (rs.size() != 3) {
//            cout << "Wrong amount of items in the set" << endl;
//            return 1;
//        }
//
//        vector<Rational> v;
//        for (auto x : rs) {
//            v.push_back(x);
//        }
//        if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}}) {
//            cout << "Rationals comparison works incorrectly" << endl;
//            return 2;
//        }
//    }
//
//    {
//        map<Rational, int> count;
//        ++count[{1, 2}];
//        ++count[{1, 2}];
//
//        ++count[{2, 3}];
//
//        if (count.size() != 2) {
//            cout << "Wrong amount of items in the map" << endl;
//            return 3;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
