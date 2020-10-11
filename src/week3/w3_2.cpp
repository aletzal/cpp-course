//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//class Person {
//public:
//	Person(const string& first_name, const string& last_name, const int& year) {
//		fnames[year] = first_name;
//		lnames[year] = last_name;
//		_birthyear = year;
//	}
//
//	void ChangeFirstName(int year, const string& first_name) {
//		// добавить факт изменения имени на first_name в год year
//		fnames[year] = first_name;
//	}
//	void ChangeLastName(int year, const string& last_name) {
//		// добавить факт изменения фамилии на last_name в год year
//		lnames[year] = last_name;
//	}
//	string GetFullName(int year) const {
//		if (_birthyear > year) {
//			return "No person";
//		}
//		// получить имя и фамилию по состоянию на конец года year
//		string first_name = getNameFromHistory(fnames, year);
//		string last_name = getNameFromHistory(lnames, year);
//
//		return getFormattedName(first_name, last_name);
//	}
//	string GetFullNameWithHistory(int year) const {
//		if (_birthyear > year) {
//			return "No person";
//		}
//		// получить все имена и фамилии по состоянию на конец года year
//		string first_name = getNameFromHistoryAll(fnames, year);
//		string last_name = getNameFromHistoryAll(lnames, year);
//
//		return getFormattedName(first_name, last_name);
//	}
//private:
//	int _birthyear = -1;
//	map<int, string> fnames;
//	map<int, string> lnames;
//
//	string getNameFromHistory(const map<int, string>& hist, int year) const {
//		string name;
//		for (const auto& item : hist) {
//			if (item.first > year) {
//				break;
//			}
//			name = item.second;
//		}
//		return name;
//	}
//
//	string getNameFromHistoryAll(const map<int, string>& hist, int year) const {
//		string name;
//		vector<string> allNames;
//		for (const auto& item : hist) {
//			if (item.first > year) {
//				break;
//			}
//			if (!item.second.empty()
//					&& (allNames.empty() || allNames.back() != item.second)) {
//				allNames.push_back(item.second);
//			}
//		}
//		for (int i = allNames.size() - 1; i >= 0; --i) {
//			if (i == allNames.size() - 1 && allNames.size() > 1) {
//				name += allNames[i] + " (";
//				continue;
//			}
//			name += allNames[i] + ", ";
//		}
//		if (allNames.size() > 1) {
//			name = name.substr(0, name.size() - 2) + ")";
//		} else {
//			name = name.substr(0, name.size() - 2);
//		}
//		return name;
//	}
//
//	string getFormattedName(string first_name, string last_name) const {
//		if (first_name.empty() && last_name.empty()) {
//			return "Incognito";
//		} else if (first_name.empty()) {
//			return last_name + " with unknown first name";
//		} else if (last_name.empty()) {
//			return first_name + " with unknown last name";
//		} else {
//			return first_name + " " + last_name;
//		}
//	}
//};

//int main() {
//  Person person("Polina", "Sergeeva", 1960);
//  for (int year : {1959, 1960}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  person.ChangeFirstName(1965, "Appolinaria");
//  person.ChangeLastName(1967, "Ivanova");
//  for (int year : {1965, 1967}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  return 0;
//}

//int main() {
//	Person person;
//
//	person.ChangeFirstName(1965, "Polina");
//	person.ChangeLastName(1967, "Sergeeva");
//	for (int year : { 1900, 1965, 1990 }) {
//		cout << person.GetFullName(year) << endl;
//	}
//
//	person.ChangeFirstName(1970, "Appolinaria");
//	for (int year : { 1969, 1970 }) {
//		cout << person.GetFullName(year) << endl;
//	}
//
//	person.ChangeLastName(1968, "Volkova");
//	for (int year : { 1969, 1970 }) {
//		cout << person.GetFullName(year) << endl;
//	}
//	person.ChangeFirstName(1900, "Eugene");
//	person.ChangeLastName(1900, "Sokolov");
//	person.ChangeLastName(1910, "Sokolov");
//	person.ChangeFirstName(1920, "Evgeny");
//	person.ChangeLastName(1930, "Sokolov");
//	cout << person.GetFullNameWithHistory(1940) << endl;
//
//	person.ChangeFirstName(1965, "Polina");
//	person.ChangeLastName(1967, "Sergeeva");
//	for (int year : { 1900, 1965, 1990 }) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	person.ChangeFirstName(1970, "Appolinaria");
//	for (int year : { 1969, 1970 }) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	person.ChangeLastName(1968, "Volkova");
//	for (int year : { 1969, 1970 }) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	person.ChangeFirstName(1990, "Polina");
//	person.ChangeLastName(1990, "Volkova-Sergeeva");
//	cout << person.GetFullNameWithHistory(1990) << endl;
//
//	person.ChangeFirstName(1966, "Pauline");
//	cout << person.GetFullNameWithHistory(1966) << endl;
//
//	person.ChangeLastName(1960, "Sergeeva");
//	for (int year : { 1960, 1967 }) {
//		cout << person.GetFullNameWithHistory(year) << endl;
//	}
//
//	person.ChangeLastName(1961, "Ivanova");
//	cout << person.GetFullNameWithHistory(1967) << endl;
//
//	return 0;
//}

//Incognito
//Polina with unknown last name
//Polina Sergeeva
//Polina Sergeeva
//Appolinaria Sergeeva
//Polina Volkova
//Appolinaria Volkova
