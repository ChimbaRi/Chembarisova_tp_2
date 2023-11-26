//#include <iostream>
//#include "Aeroflot.h"
//#include "Keeper.h"
//using namespace std;
//void menu() {
//	cout << "1. Add an Aeroflot" << endl <<
//		"2. Show a list of Aeroflot" << endl <<
//		"3. Delete Aeroflot" << endl <<
//		"4. Edit Aeroflot" << endl <<
//		"5. Get flight by destination" << endl <<
//		"6. Save data" << endl <<
//		"7. Load data" << endl <<
//		"0. Exit" << endl <<
//		"Select the menu item: ";
//}
//int main() {
//	Keeper* keeper;
//	keeper = new Keeper;
//	int input_point = 1;
//	int input_number;
//	string input_string;
//	while (input_point != 0) {
//		menu();
//		cin >> input_point;
//		switch (input_point) {
//		case 1:
//			Aeroflot * new_aeroflot;
//			new_aeroflot = new Aeroflot();
//			new_aeroflot->edit();
//			keeper->add(new_aeroflot);
//			break;
//		case 2:
//			cout << "\033[94mCount Aeroflot: " << keeper->get_len() << "\033[0m" <<
//				endl;
//			keeper->show();
//			break;
//		case 3:
//			cout << "Enter index of Aeroflot to remove: ";
//			cin >> input_number;
//			keeper->remove(input_number);
//			break;
//		case 4:
//			cout << "Enter index of Aeroflot to edit: ";
//			cin >> input_number;
//			keeper->edit(input_number);
//			break;
//		case 5:
//			cout << "Enter destination to get Aeroflot: ";
//			cin >> input_string;
//			keeper->getFlight(input_string);
//			break;
//		case 6:
//			keeper->save();
//			break;
//		case 7:
//			keeper->load();
//			break;
//		default:
//			break;
//		}
//	}
//	keeper->~Keeper();
//	cout << "Program shutdown by user.";
//	return 0;
//}