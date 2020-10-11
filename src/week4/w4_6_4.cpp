//#include <iostream>
//#include <sstream>
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
//// Реализуйте для класса Rational операторы << и >>
//ostream& operator<<(ostream& sout, const Rational& r) {
//	sout << r.Numerator() << "/" << r.Denominator();
//	return sout;
//}
//
//istream& operator>>(istream& sin, Rational& r) {
//	int num = r.Numerator(), den = r.Denominator();
//	sin >> num;
//	sin.ignore(1);
//	sin >> den;
//	r = {num, den};
//	return sin;
//}
//
//int main() {
//	{
//		ostringstream output;
//		output << Rational(-6, 8);
//		if (output.str() != "-3/4") {
//			cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
//			return 1;
//		}
//	}
//
//	{
//		istringstream input("5/7");
//		Rational r;
//		input >> r;
//		bool equal = r == Rational(5, 7);
//		if (!equal) {
//			cout << "5/7 is incorrectly read as " << r << endl;
//			return 2;
//		}
//	}
//
//	{
//		istringstream input("5/7 10/8");
//		Rational r1, r2;
//		input >> r1 >> r2;
//		bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//		if (!correct) {
//			cout << "Multiple values are read incorrectly: " << r1 << " " << r2
//					<< endl;
//			return 3;
//		}
//
//		input >> r1;
//		input >> r2;
//		correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//		if (!correct) {
//			cout << "Read from empty stream shouldn't change arguments: " << r1
//					<< " " << r2 << endl;
//			return 4;
//		}
//	}
//
//	cout << "OK" << endl;
//	return 0;
//}
