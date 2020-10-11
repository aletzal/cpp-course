//#include <iostream>
//using namespace std;
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
//			int nod = getNod(numerator, denominator);
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
//	int getNod(int a, int b) {
//		if (a < 0) {
//			a *= -1;
//		}
//		if (b < 0) {
//			b *= -1;
//		}
//		while (a != 0 && b != 0) {
//			if (a > b) {
//				a %= b;
//			} else {
//				b %= a;
//			}
//		}
//		return a + b;
//	}
//
//};
//
//int main() {
//    {
//        const Rational r(3, 10);
//        if (r.Numerator() != 3 || r.Denominator() != 10) {
//            cout << "Rational(3, 10) != 3/10" << endl;
//            return 1;
//        }
//    }
//
//    {
//        const Rational r(8, 12);
//        if (r.Numerator() != 2 || r.Denominator() != 3) {
//            cout << "Rational(8, 12) != 2/3" << endl;
//            return 2;
//        }
//    }
//
//    {
//        const Rational r(-4, 6);
//        if (r.Numerator() != -2 || r.Denominator() != 3) {
//            cout << "Rational(-4, 6) != -2/3" << endl;
//            return 3;
//        }
//    }
//
//    {
//        const Rational r(4, -6);
//        if (r.Numerator() != -2 || r.Denominator() != 3) {
//            cout << "Rational(4, -6) != -2/3" << endl;
//            return 3;
//        }
//    }
//
//    {
//        const Rational r(0, 15);
//        if (r.Numerator() != 0 || r.Denominator() != 1) {
//            cout << "Rational(0, 15) != 0/1" << endl;
//            return 4;
//        }
//    }
//
//    {
//        const Rational defaultConstructed;
//        if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
//            cout << "Rational() != 0/1" << endl;
//            return 5;
//        }
//    }
//	cout << "OK" << endl;
//	return 0;
//}
