//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//int main() {
//  int current_month = 0;
//  vector<vector<string>> days(months[current_month]);
//  int q;
//  cin >> q;
//  for (int i = 0; i < q; ++i) {
//      string operation_code;
//      cin >> operation_code;
//
//      if (operation_code == "ADD") {
//    	  int day;
//    	  string job;
//    	  cin >> day >> job;
//    	  days[day - 1].push_back(job);
//      } else if (operation_code == "NEXT") {
//    	  if (current_month == 11) {
//    		  current_month = 0;
//    	  } else {
//    		  if (months[current_month] > months[current_month + 1]) {
//    			  int diff = months[current_month] - months[current_month + 1];
//    			  for (int i = days.size() - diff; i < days.size(); ++i) {
//    				  days[days.size() - diff - 1]
//						   .insert(end(days[days.size() - diff - 1]),
//								   begin(days[i]),
//								   end(days[i]));
//    				  days[i].clear();
//    			  }
//    			  days.resize(months[current_month]);
//    		  } else if(months[current_month] < months[current_month + 1]) {
//    			  days.resize(months[current_month + 1]);
//    		  }
//    		  ++current_month;
//    	  }
//
//      } else if (operation_code == "DUMP") {
//    	  int day;
//    	  cin >> day;
//    	  cout << days[day - 1].size() << " ";
//    	  for (auto i : days[day - 1]) {
//    		  cout << i << " ";
//    	  }
//    	  cout << endl;
//      }
//  }
//
//  return 0;
//}
//
///*
//
//12
//ADD 5 Salary
//ADD 31 Walk
//ADD 30 WalkPreparations
//NEXT
//DUMP 5
//DUMP 28
//NEXT
//DUMP 31
//DUMP 30
//DUMP 28
//ADD 28 Payment
//DUMP 28
//
// */
