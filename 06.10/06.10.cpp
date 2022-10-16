#include <iostream>
#include "Plane.h"
#include "Bike.h"
#include "Jeep.h"
#include "Truck.h"
#include "Ship.h"
using namespace std;

int main() {
	Transport* ptr = nullptr;
	int choose;
	cout << "1. Plane\n2. Bike\n3. Jeep\n4. Ship\n5. Truck\n->  ";
	cin >> choose;
	cin.ignore();
	switch (choose) {
	case 1:
		ptr = new Plane("huge, average");
		break;
	case 2:
		ptr = new Bike("small");
		break;
	case 3:
		ptr = new Jeep("average");
		break;
	case 4:
		ptr = new Ship("huge");
		break;
	case 5:
		ptr = new Truck("huge, average");
		break;
	}
	ptr->Consumption(0);
	ptr->Print();
	ptr->~Transport();

}