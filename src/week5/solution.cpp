//#include <iostream>
//#include <sstream>
//#include <map>
//#include <set>
//#include <vector>
//#include <exception>
//using namespace std;
//
//struct Date {
//	int year = 0;
//	int month = 1;
//	int day = 1;
//
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
//};
//
//class CommandParser {
//public:
//	CommandParser() {
//	}
//
//	void parseCommand(istream& sin, ostream& sout) {
//		string command, date, event;
//		sin >> command;
//		if (command == "Print") {
//			printAllEvents(sout);
//		} else if (command == "Add") {
//			sin >> date >> event;
//			Date parsed_date = parseDate(date);
//			if (!event.empty()) {
//				db[parsed_date].insert(event);
//			}
//		} else if (command == "Del") {
//			sin >> date;
//			Date parsed_date = parseDate(date);
//			char c = sin.peek();
//			if (c == ' ') {
//				sin >> event;
//				if (event.empty()) {
//					int n = db[parsed_date].size();
//					db.erase(parsed_date);
//					cout << "Deleted " << n << " events\n";
//				} else {
//					if (db[parsed_date].count(event) != 0) {
//						db[parsed_date].erase(event);
//						cout << "Deleted successfully\n";
//					} else {
//						cout << "Event not found\n";
//					}
//				}
//			}
//		} else if (command == "Find") {
//			sin >> date;
//			Date d = parseDate(date);
//
//		} else {
//			if (!command.empty()) {
//				throw runtime_error("Unknown command: " + command);
//			}
//		}
//	}
//private:
//	map<Date, set<string>> db;
//	Date parseDate(const string& str) {
//		int year = 0, month = 0, day = 0;
//		istringstream datestream(str);
//		char c = datestream.peek();
//		if (c >= '0' && c <= '9') {
//			datestream >> year;
//			c = datestream.peek();
//			if (c == '-') {
//				datestream.ignore(1);
//				char sign = datestream.peek();
//				if (sign == '-' || sign == '+') {
//					datestream.ignore(1);
//					c = datestream.peek();
//				} else {
//					c = sign;
//				}
//				if (c >= '0' && c <= '9') {
//					datestream >> month;
//					if (sign == '-') {
//						month = -month;
//					}
//					// month
//
//					c = datestream.peek();
//					if (c == '-') {
//						datestream.ignore(1);
//						sign = datestream.peek();
//						if (sign == '-' || sign == '+') {
//							datestream.ignore(1);
//							c = datestream.peek();
//						} else {
//							c = sign;
//						}
//						if (c >= '0' && c <= '9') {
//							datestream >> day;
//							if (sign == '-') {
//								day = -day;
//							}
//							// day
//							cout << "Date correct" << endl;
//							return {year, month, day};
//						}
//					}
//				}
//			}
//		}
//		throw runtime_error("Wrong date format: " + str);
//	}
//
//	void printAllEvents(const ostream& sout) const {
//
//	}
//};
//
//bool operator==(const Date& lhs, const Date& rhs) {
//	if (lhs.year == rhs.year) {
//		if (lhs.month == rhs.month) {
//			return lhs.day == lhs.day;
//		}
//		return lhs.month == rhs.month;
//	}
//	return lhs.year == rhs.year;
//}
//
//bool operator<(const Date& lhs, const Date& rhs) {
//	if (lhs.year == rhs.year) {
//		if (lhs.month == rhs.month) {
//			return lhs.day < lhs.day;
//		}
//		return lhs.month < rhs.month;
//	}
//	return lhs.year < rhs.year;
//}
//
//int main() {
//	istringstream stream("Del 1-1-+1 555\n");
//	CommandParser parser = CommandParser();
//	try {
////		while (true) {
//		cout << "Starting." << endl;
//		parser.parseCommand(stream, cout);
////		}
//	} catch (const exception& e) {
//		cout << e.what() << endl;
//	}
//	return 0;
//}
//
///*
//
// пары вида: дата, событие.
// Определим дату как строку вида Год-Месяц-День,
// где Год, Месяц и День — целые числа.
//
// - добавление события:                        Add Дата Событие
// - удаление события:                          Del Дата Событие
// - удаление всех событий за конкретную дату:  Del Дата
// - поиск событий за конкретную дату:          Find Дата
// - печать всех событий за все даты:           Print
//
// */
