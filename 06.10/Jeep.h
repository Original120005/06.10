#pragma once
#include "Transport.h"

class Jeep : public Transport {
	char* size;

public:
	Jeep(const char* s) {
		size = new char[strlen(s) + 1];
		strcpy_s(size, strlen(s) + 1, s);
	}

	Jeep& operator=(const Jeep& obj) {
		name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);

		max_speed = obj.max_speed;
		fuel = obj.fuel;
		cons = obj.cons;

		size = new char[strlen(obj.size) + 1];
		strcpy_s(size, strlen(obj.size) + 1, obj.size);

		return *this;
	}

	~Jeep() {
		cout << "\nJeep Destructor" << endl;
		delete[] size;
	}

	void Print() {
		cout << "\n\nName of transport: " << name << endl;
		cout << "Average fuel consumption per 100 km: " << cons << "l" << endl;
		cout << "Maximal speed of transport: " << max_speed << "km" << endl;
		cout << "Size of " << name << ": " << size << endl;
	}

