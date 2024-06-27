#pragma once
#include <string>
#include "Flat.hpp"


class House{
private:
	std::string street;//улица
	size_t number;//номер дома
	size_t floors;//кол этажей
	size_t flats_counter;//подсчет квартир
	Flat* flats_array;//массив квартир
public:
	House();
	House(std::string street, size_t number, size_t floors);
	~House();
	//методы для добавления и получения квартир
	void appFlat(size_t floor, size_t rooms);
	void printFlat(size_t index) const; //вывод квартиры



};

