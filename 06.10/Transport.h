#pragma once
#include <iostream>
using namespace std;

class Transport {
protected:
	char* name;
	double max_speed;
	double fuel;
	double cons; // ñðåäíèé ðàñõîä òîïëèâà

public:
	void Consumption(double km) {
		char n[30];
		cout << "Enter name: ";
		cin.getline(n, 30);
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		cout << "Enter distance in km: ";
		cin >> km;

		cout << "Enter fuel: ";
		cin >> fuel;

		cout << "Enter maximal speed of transport: ";
		cin >> max_speed;

		cons = fuel / km * 100;
	}

	Transport& operator=(Transport& obj) {
		name = new char[strlen(obj.name) + 1];
		strcpy_s(name, strlen(obj.name) + 1, obj.name);

		max_speed = obj.max_speed;
		fuel = obj.fuel;
		cons = obj.cons;
	}

	virtual ~Transport() = 0 {
		cout << "\nTransport Destructor\n";
		delete[] name;
		max_speed = 0;
		fuel = 0;
		cons = 0;
	}

	virtual void Print() = 0;

};