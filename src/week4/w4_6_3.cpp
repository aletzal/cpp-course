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
//// Реализуйте для класса Rational операторы * и /
//
//Rational operator*(const Rational& lhs, const Rational& rhs) {
//	return Rational { lhs.Numerator() * rhs.Numerator(), lhs.Denominator()
//			* rhs.Denominator() };
//}
//
//Rational operator/(const Rational& lhs, const Rational& rhs) {
//	return lhs * Rational { rhs.Denominator(), rhs.Numerator() };
//}
//
//int main() {
//    {
//        Rational a(2, 3);
//        Rational b(4, 3);
//        Rational c = a * b;
//        bool equal = c == Rational(8, 9);
//        if (!equal) {
//            cout << "2/3 * 4/3 != 8/9" << endl;
//            return 1;
//        }
//    }
//
//    {
//        Rational a(5, 4);
//        Rational b(15, 8);
//        Rational c = a / b;
//        bool equal = c == Rational(2, 3);
//        if (!equal) {
//            cout << "5/4 / 15/8 != 2/3" << endl;
//            return 2;
//        }
//    }
//
//    cout << "OK" << endl;
//	return 0;
//}
