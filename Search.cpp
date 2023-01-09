#include<iostream>
using namespace std;

int main() {
	int location;
	bool found = false;
	location = 5;
	int IDs[] = { 234, 567, 321, 567, 234, 789};

	int searchItem;
	cout << "enter ID you are searching for:" << endl;
	cin >> searchItem;

	while (location >= sizeof(IDs[5]) / sizeof(IDs) && !found) {
		cout << "slot is " << location << " which holds "<<IDs[location]<<endl;
		if (IDs[location] == searchItem) {
			cout << "found is true!" << searchItem << " found in slot " << location << endl;
			found = true;
		}
		else
			location--;
	}

	if (found == true) {
		cout << "Id " << searchItem << " was found in slot " << location << "." << endl;
	}
	else
		cout << "ID was not found." << endl;

	
}
