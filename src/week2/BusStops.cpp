//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//void printv(const vector<string>& v, const string& bus = "") {
//	for (int i = 0; i < v.size(); ++i) {
//		if (bus == "" || v[i] != bus)
//			cout << v[i] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	map<string, vector<string>> buses;
//	map<string, vector<string>> stops;
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; ++i) {
//		string operation_code;
//		cin >> operation_code;
//
//		if (operation_code == "NEW_BUS") {
//			string bus;
//			int stop_count;
//			cin >> bus >> stop_count;
//
//			for (int i = 0; i < stop_count; ++i) {
//				string stop;
//				cin >> stop;
//				buses[bus].push_back(stop);
//				stops[stop].push_back(bus);
//			}
//
////			printv(buses[bus]);
////			for (const auto& item : stops) {
////				cout << item.first << endl;
////				printv(item.second);
////			}
//		}
//
//		if (operation_code == "BUSES_FOR_STOP") {
//			string stop;
//			cin >> stop;
//			if (stops.count(stop) == 0) {
//				cout << "No stop\n";
//			} else {
//				printv(stops[stop]);
//			}
//		}
//
//		if (operation_code == "STOPS_FOR_BUS") {
//			string bus;
//			cin >> bus;
//			if (buses.count(bus) == 0) {
//				cout << "No bus\n";
//			} else {
//				for (const auto& stop : buses[bus]) {
//					cout << "Stop " << stop << ": ";
//					if (stops[stop].size() == 1) {
//						cout << "no interchange\n";
//					} else {
//						printv(stops[stop], bus);
//					}
//				}
//			}
//		}
//
//		if (operation_code == "ALL_BUSES") {
//			if (buses.size() == 0) {
//				cout << "No buses\n";
//			} else {
//				for (const auto& bus : buses) {
//					cout << "Bus " << bus.first << ": ";
//					printv(bus.second);
//				}
//			}
//		}
//	}
//	return 0;
//}
//
///*
//
// NEW_BUS bus stop_count stop1 stop2 ... — добавить маршрут автобуса с названием bus и stop_count остановками с названиями stop1, stop2, ...
// BUSES_FOR_STOP stop — вывести названия всех маршрутов автобуса, проходящих через остановку stop.
// STOPS_FOR_BUS bus — вывести названия всех остановок маршрута bus со списком автобусов, на которые можно пересесть на каждой из остановок.
// ALL_BUSES
//
// */
