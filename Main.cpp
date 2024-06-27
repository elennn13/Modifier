#include <iostream>
#include <string>
#include "House.hpp"


class Student {
private:
	size_t id;//автомвтический номер (идентификатор)для каждого студента
	static size_t students_number;//отвечает за кол. студентов

	std::string name;//имя студента
	static std::string group;//статическое поле класса.\ общая группа для всех студентов
	static const time_t max_age = 55;// возраст максимальный 55
	time_t age;
	

public:
	
	Student() : Student("", 0) {}//параметрический конструктор
	Student(std::string name, time_t age) {
		this->name = name;
		setAge(age);//сеттер возраст
		id = ++students_number;//увелич. кол студентов
	}
	Student(const Student& other) : Student (other.name, other.age) {}   //конструктор копирования
	

	std::string getName() const { return name; }//const не выполняет никаких изменений метод ничего не меняет только выдвет информацию
	void setName(std::string name) { this->name = name; }

	static std::string getGroup() { return group; }
	static void setGroup(std::string group) { Student::group = group; }//свойства для круппы классса

	time_t getAge() const { return age; }
	void setAge(time_t age) {
		if (age >= 0 && age <= max_age)
			this->age = age;
		else
			this->age = 0;
	}
size_t getId() const { return id; }
static size_t getStudentsNumber() { return students_number; }


};
std::string Student::group = "BV311";

size_t Student::students_number = 0;//кол студ 0


int main() {
	setlocale(LC_ALL, "ru");
	int n;

	//std::cout << Student::group << std::endl;


//Модификации членов класса 
	/*
	Student s1("Tom Smith", 20), s2("Bob Thomas", 30);
	
	std::cout << s1.getGroup() << std::endl;
	std::cout << s2.getGroup() << std::endl;
	Student::setGroup("VBV311");
	std::cout << s1.getGroup() << std::endl;
	std::cout << s2.getGroup() << std::endl;
	std::cout << Student::getGroup() << std::endl;

	const Student s3("Nik Smirnov", 25);
	// s3.setName("vasy");// ОШИБКА!!!
	std::cout << s3.getName() << std::endl;
	s3.setGroup("BV311");
	std::cout << s3.getGroup() << std::endl;
	std::cout << s3.getId() << std::endl;
*/


// ЗАДАЧА Многоквартирный дом

	return 0;
}