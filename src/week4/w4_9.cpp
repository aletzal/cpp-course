//#include <iostream>
//#include <exception>
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
//		if (denominator == 0) {
//			throw invalid_argument("Invalid argument");
//		}
//		if (numerator == 0) {
//			denominator = 1;
//		} else {
//			int nod = GetNod(numerator, denominator);
//			if (nod > 0) {
//				numerator /= nod;
//				denominator /= nod;
//			}
//		}
//		num = numerator;
//		den = denominator;
//		CorrectSign();
//	}
//
//	void Reverse() {
//		num ^= den;
//		den ^= num;
//		num ^= den;
//		CorrectSign();
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
//	void CorrectSign() {
//		if (den < 0) {
//			num *= -1;
//			den *= -1;
//		}
//	}
//};
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
//bool operator<(const Rational& lhs, const Rational& rhs) {
//	if (lhs.Denominator() == rhs.Denominator()) {
//		return lhs.Numerator() < rhs.Numerator();
//	}
//	int nok = GetNok(lhs.Denominator(), rhs.Denominator());
//	int new_lhs_num = nok / lhs.Denominator();
//	int new_rhs_num = nok / rhs.Denominator();
//	return lhs.Numerator() * new_lhs_num < rhs.Numerator() * new_rhs_num;
//}
//
//ostream& operator<<(ostream& sout, const Rational& r) {
//	sout << r.Numerator() << "/" << r.Denominator();
//	return sout;
//}
//
//istream& operator>>(istream& sin, Rational& r) {
//	int num = r.Numerator(), den = r.Denominator();
//	sin >> num;
//	char s = sin.peek();
//	if (s != '/') {
//		throw invalid_argument("Invalid argument");
//	}
//	sin.ignore(1);
//	sin >> den;
//	r = {num, den};
//	return sin;
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
//// Вставьте сюда реализацию operator / для класса Rational
//
//Rational operator*(const Rational& lhs, const Rational& rhs) {
//	return Rational { lhs.Numerator() * rhs.Numerator(), lhs.Denominator()
//			* rhs.Denominator() };
//}
//
//Rational operator/(const Rational& lhs, const Rational& rhs) {
//	if (rhs.Numerator() == 0) {
//		throw domain_error("Division by zero");
//	}
//	return lhs * Rational { rhs.Denominator(), rhs.Numerator() };
//}
//
//Rational ExecuteCommand(char& c, Rational& r1, Rational& r2) {
//	if (c == '+') {
//		return r1 + r2;
//	} else if (c == '-') {
//		return r1 - r2;
//	} else if (c == '*') {
//		return r1 * r2;
//	} else if (c == '/') {
//		return r1 / r2;
//	} else {
//		throw invalid_argument("Invalid argument");
//	}
//}
//
//int main() {
//	try {
//		Rational r1, r2;
//		cin >> r1;
//		cin.ignore(1);
//		char command;
//		cin >> command;
//		cin.ignore(1);
//		cin >> r2;
//		ExecuteCommand(command, r1, r2).print();
//
//	} catch (exception& e) {
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}
