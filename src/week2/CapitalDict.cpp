//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main() {
//	map<string, string> c;
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; ++i) {
//		string operation_code;
//		cin >> operation_code;
//
//		if (operation_code == "CHANGE_CAPITAL") {
//			string country;
//			string new_capital;
//			cin >> country >> new_capital;
//			if (c.count(country) == 0) {
//				cout << "Introduce new country " << country << " with capital "
//						<< new_capital << endl;
//			} else {
//				if (c[country] == new_capital) {
//					cout << "Country " << country
//							<< " hasn't changed its capital" << endl;
//				} else {
//					cout << "Country " << country
//							<< " has changed its capital from " << c[country]
//							<< " to " << new_capital << endl;
//				}
//			}
//			c[country] = new_capital;
//		}
//
//		if (operation_code == "RENAME") {
//			string old_country;
//			string new_country_name;
//			cin >> old_country >> new_country_name;
//			if (old_country == new_country_name || c.count(old_country) == 0
//					|| c.count(new_country_name) != 0) {
//				cout << "Incorrect rename, skip" << endl;
//			} else {
//				string cap = c[old_country];
//				cout << "Country " << old_country << " with capital "
//						<< cap << " has been renamed to "
//						<< new_country_name << endl;
//				c[new_country_name] = cap;
//				c.erase(old_country);
//			}
//
//		}
//
//		if (operation_code == "ABOUT") {
//			string country;
//			cin >> country;
//			if (c.count(country) == 0) {
//				cout << "Country " << country << " doesn't exist" << endl;
//			} else {
//				cout << "Country " << country << " has capital " << c[country] << endl;
//			}
//		}
//
//		if (operation_code == "DUMP") {
//			if (c.size() == 0) {
//				cout << "There are no countries in the world";
//			} else {
//				for (const auto& country : c) {
//					cout << country.first << "/" << country.second << " ";
//				}
//			}
//			cout << endl;
//		}
//	}
//}
//
///*
//
//CHANGE_CAPITAL RussianEmpire Petrograd
//RENAME RussianEmpire RussianRepublic
//ABOUT RussianRepublic
//RENAME RussianRepublic USSR
//CHANGE_CAPITAL USSR Moscow
//DUMP
//
// *
// */
