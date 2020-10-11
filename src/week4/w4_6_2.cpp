//#include <iostream>
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
//// Реализуйте для класса Rational операторы ==, + и -
//
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
//Rational operator+(const Rational& lhs, const Rational& rhs) {
//	if (lhs.Denominator() == rhs.Denominator()) {
//		return Rational { lhs.Numerator() + rhs.Numerator(), lhs.Denominator() };
//	}
//	int nok = GetNok(lhs.Denominator(), rhs.Denominator());
//	int new_lhs_num = nok / lhs.Denominator();
//	int new_rhs_num = nok / rhs.Denominator();
//	return Rational { lhs.Numerator() * new_lhs_num
//			+ rhs.Numerator() * new_rhs_num, nok };
//}
//
//Rational operator-(const Rational& lhs, const Rational& rhs) {
//	if (lhs.Denominator() == rhs.Denominator()) {
//		return Rational { lhs.Numerator() - rhs.Numerator(), lhs.Denominator() };
//	}
//
//	int nok = GetNok(lhs.Denominator(), rhs.Denominator());
//	int new_lhs_num = nok / lhs.Denominator();
//	int new_rhs_num = nok / rhs.Denominator();
//	return Rational { lhs.Numerator() * new_lhs_num
//			- rhs.Numerator() * new_rhs_num, nok };
//}
//
//int main() {
//	{
//		Rational r1(4, 6);
//		Rational r2(2, 3);
//		bool equal = r1 == r2;
//		if (!equal) {
//			cout << "4/6 != 2/3" << endl;
//			return 1;
//		}
//	}
//
//	{
//		Rational a(2, 3);
//		Rational b(4, 3);
//		Rational c = a + b;
//		bool equal = c == Rational(2, 1);
//		if (!equal) {
//			cout << "2/3 + 4/3 != 2" << endl;
//			return 2;
//		}
//	}
//
//	{
//		Rational a(5, 7);
//		Rational b(2, 9);
//		Rational c = a - b;
//		bool equal = c == Rational(31, 63);
//		if (!equal) {
//			cout << "5/7 - 2/9 != 31/63" << endl;
//			return 3;
//		}
//	}
//
//	cout << "OK" << endl;
//	return 0;
//}
