#include<iostream>
using namespace std;

int main() {
	int location;
	bool found = false;
	location = 5;
	int IDs[] = { 234, 567, 321, 567, 234, 789};
	int counter = 0;
	//create a variable for how many items you've found
	int searchItem;
	cout << "enter ID you are searching for:" << endl;
	cin >> searchItem;

	while (location >= 0 ) {
		cout << "slot is " << location << " which holds "<<IDs[location]<<endl;
		if (IDs[location] == searchItem) {
			cout << "found is true!" << searchItem << " found in slot " << location << endl;
			found = true;
			counter++;
			location--;
			//add to that varibale
		}
		else
			location--;
	}

	if (found == true) {
		cout << "Id " << searchItem << " was found in slot " << location << "." << endl;
		cout << "Id " << searchItem << " was found " << counter << " times." << endl;
		//say how many you've found
	}
	else
		cout << "ID was not found." << endl;
