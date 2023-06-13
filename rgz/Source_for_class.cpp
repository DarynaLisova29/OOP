#include"Header_for_class.h"
Age::Age()
{
	age = 0;
}
void Age::set_age(int age)
{
	this->age = age;
}
int Age::get_age()
{
	return age;
}
Persone::Persone():Age()
{
	name = " ";
}
void Persone::set_name(std::string name)
{
	this->name = name;
}
std::string Persone::get_name()
{
	return name;
}
Prise::Prise()
{
	price = 0;
}
void Prise::set_price(int price)
{
	this->price = price;
}
int Prise::get_price()
{
	return price;
}
Stag::Stag()
{
	stag = 0;
}
void Stag::set_stag(int stag)
{
	this->stag = stag;
}
int Stag::get_stag()
{
	return stag;
}
Posluga::Posluga(): Prise()
{
	name_posluga = " ";
}
void Posluga::set_name_price(std::string name_posluga)
{
	this->name_posluga = name_posluga;
}
std::string Posluga::get_name_posluga()
{
	return name_posluga;
}
Specialist::Specialist():Persone(),Posluga(),Stag()
{
}
Client::Client():Persone()
{
	
}