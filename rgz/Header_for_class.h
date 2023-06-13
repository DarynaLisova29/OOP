#pragma once
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include <string>
//using namespace std;
class Age {
	int age;
public:
	Age();
	void set_age(int age);
	int get_age();
};
class Persone: public Age {
	std::string name;
public:
	Persone();
	void set_name(std::string name);
	std::string get_name();
};
class Prise {
	int price;
public:
	Prise();
	void set_price(int price);
	int get_price();
};
class Stag {
	int stag;
public:
	Stag();
	void set_stag(int stag);
	int get_stag();
};
class Posluga:public Prise {
	std::string name_posluga;
public:
	Posluga();
	void set_name_price(std::string name_posluga);
	std::string get_name_posluga();
	
};
class Specialist:public Persone,public Posluga,public Stag {
public:
	Specialist();

};
class Client:public Persone {
	
public:
	Specialist spesialist;
	Client();
};

