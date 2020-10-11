//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <map>
//#include <set>
//#include <exception>
//using namespace std;
//// Реализуйте функции и методы классов и при необходимости добавьте свои
//
//class Date {
//public:
//	Date(int& new_year, int& new_month, int& new_day) {
//		if (new_month < 1 || new_month > 12) {
//			throw runtime_error(
//					"Month value is invalid: " + to_string(new_month));
//		}
//		if (new_day < 1 || new_day > 31) {
//			throw runtime_error("Day value is invalid: " + to_string(new_day));
//		}
//		year = new_year;
//		month = new_month;
//		day = new_day;
//	}
//
//	int GetYear() const {
//		return year;
//	}
//	int GetMonth() const {
//		return month;
//	}
//	int GetDay() const {
//		return day;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//
//bool operator<(const Date& lhs, const Date& rhs) {
//	if (lhs.GetYear() == rhs.GetYear()) {
//		if (lhs.GetMonth() == rhs.GetMonth()) {
//			return lhs.GetDay() < lhs.GetDay();
//		}
//		return lhs.GetMonth() < rhs.GetMonth();
//	}
//	return lhs.GetYear() < rhs.GetYear();
//}
//
//class Database {
//public:
//	void AddEvent(const Date& date, const string& event) {
//		db[date].insert(event);
//	}
//
//	bool DeleteEvent(const Date& date, const string& event) {
//		if (db.count(date) > 0) {
//			if (db[date].count(event) > 0) {
//				db[date].erase(event);
//				return true;
//			}
//		}
//		return false;
//	}
//
//	int DeleteDate(const Date& date) {
//		int n = 0;
//		if (db.count(date) > 0) {
//			n = db[date].size();
//			db.erase(date);
//		}
//		return n;
//	}
//
//	string Find(const Date& date) const {
//		string events;
//		if (db.count(date) > 0) {
//			for (const auto& s : db.at(date)) {
//				events += s + '\n';
//			}
//			events.pop_back();
//		}
//		return events;
//	}
//
//	void Print() const {
//		for (const auto& d : db) {
//			for (const auto& s : d.second) {
//				cout << setfill('0') << setw(4) << d.first.GetYear() << '-';
//				cout << setfill('0') << setw(2) << d.first.GetMonth() << '-';
//				cout << setfill('0') << setw(2) << d.first.GetDay() << ' ';
//				cout << s << endl;
//			}
//		}
//	}
//
//	Date parseDate(const string& str) const {
//		int year, month, day;
//		istringstream datestream(str);
//		datestream >> year;
//		char c = datestream.peek();
//		if (c == '-') {
//			datestream.ignore(1);
//			char sign = datestream.peek();
//			if (sign == '-' || sign == '+') {
//				datestream.ignore(1);
//				c = datestream.peek();
//			} else {
//				c = sign;
//			}
//			if (c >= '0' && c <= '9') {
//				datestream >> month;
//				if (sign == '-') {
//					month = -month;
//				}
//				// month
//
//				c = datestream.peek();
//				if (c == '-') {
//					datestream.ignore(1);
//					sign = datestream.peek();
//					if (sign == '-' || sign == '+') {
//						datestream.ignore(1);
//						c = datestream.peek();
//					} else {
//						c = sign;
//					}
//					if (c >= '0' && c <= '9') {
//						datestream >> day;
//						if (sign == '-') {
//							day = -day;
//						}
//						// day
//						if (datestream.peek() == EOF) {
//							return Date { year, month, day };
//						}
//					}
//				}
//			}
//		}
//
//		throw runtime_error("Wrong date format: " + str);
//	}
//private:
//	map<Date, set<string>> db;
//};
//
//void parseCommand(Database& db, const string& cmd) {
//	istringstream stream(cmd);
//	string command, date, event;
//	stream >> command;
//	if (command == "Print") {
//		db.Print();
//	} else if (command == "Add") {
//		stream >> date >> event;
//		if (!event.empty()) {
//			Date parsed_date = db.parseDate(date);
//			db.AddEvent(parsed_date, event);
//		}
//	} else if (command == "Del") {
//		stream >> date;
//		Date parsed_date = db.parseDate(date);
//		stream >> event;
//		if (event.empty()) {
//			cout << "Deleted " << db.DeleteDate(parsed_date) << " events\n";
//		} else {
//			if (db.DeleteEvent(parsed_date, event)) {
//				cout << "Deleted successfully" << endl;
//			} else {
//				cout << "Event not found" << endl;
//			}
//		}
//	} else if (command == "Find") {
//		stream >> date;
//		Date parsed_date = db.parseDate(date);
//		cout << db.Find(parsed_date) << endl;
//	} else {
//		if (!command.empty()) {
//			throw runtime_error("Unknown command: " + command);
//		}
//	}
//}
//
//int main() {
//	Database db;
////	istringstream stream(
////			"Add 0-1-2 event1\n"
////			"Add 1-2-3 event2\n"
////			"Find 0-1-2\n"
////			"\n"
////			"Del 0-1-2\n"
////			"Print\n"
////			"Del 1-2-3 event2\n"
////			"Del 1-2-3 event2\n");
//
////	istringstream stream("Add 1-1-1- event1\n"
////			"Add 1-2-3*ff\n"
////			"Add 1-0 event1\n"
////			"Add 1-0-9- event1\n"
////			"Add 2001-9-0- event1\n"
////			"Add a1-1-1 a\n"
////			"Add a1-1-1a a\n"
////			"Add - event1\n"
////			"Add 0 event1\n");
//	string command;
//	try {
//		while (getline(cin, command)) {
//			// Считайте команды с потока ввода и обработайте каждую
//			parseCommand(db, command);
//		}
//	} catch (const exception& e) {
//		cout << e.what() << endl;
//	}
////	while (getline(stream, command)) {
////		try {
////			// Считайте команды с потока ввода и обработайте каждую
////			parseCommand(db, command);
////		} catch (const exception& e) {
////			cout << e.what() << endl;
////		}
////	}
//	return 0;
//}
