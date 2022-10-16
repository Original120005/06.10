#pragma once
#include "Transport.h"

class Bike : public Transport {
	char* size;

public:
	Bike(const char* s) {
		size = new char[strlen(s) + 1];
		strcpy_s(size, strlen(s) + 1, s);
	}

	Bike& operator=(const Bike& obj) {
		name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);

		max_speed = obj.max_speed;
		fuel = obj.fuel;
		cons = obj.cons;

		size = new char[strlen(obj.size) + 1];
		strcpy_s(size, strlen(obj.size) + 1, obj.size);

		return *this;
	}

	~Bike() {
		cout << "\nBike Destructor" << endl;
		delete[] size;
	}

	void Print() {
		cout << "\n\nName of transport: " << name << endl;
		cout << "Average fuel consumption per 100 km: " << cons << "l" << endl;
		cout << "Maximal speed of transport: " << max_speed << "km" << endl;
		cout << "Size of " << name << ": " << size << endl;
	}

};