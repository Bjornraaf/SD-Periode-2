#pragma once
#include <string>
#include <vector>
#include "Course.h"
#include "Student.h"
class School
{
public:
	School(std::string aName, std::string aDoE, std::string anAddress, std::string aPC, std::string aPhoneNumber);
	~School();

	void RemoveCourse(int allCourses);				// course verwijderen
	void AddCourse(Course* aCourse);				// course toevoegen
	int GetAmountOfCourses();						// de hoeveelheid van courses
	std::vector<Course*> GetCourses();				// vector array met alle courses

	std::string GetName();							
	std::string GetDoE();
	std::string GetAddress();
	std::string GetPostalCode();
	std::string GetPhoneNumber();					// Setters en getters voor de school
	void SetName(std::string aName);
	void SetDoE(std::string aDoE);
	void SetAddress(std::string anAddress);
	void SetPostalCode(std::string aPC);
	void SetPhoneNumber(std::string aPhoneNumber);

private:
	void Init();
	std::vector<Course*> courses;
	std::string name;
	std::string dayOfEstablishment;
	std::string address;				// alle variables 
	std::string postalCode;
	std::string phoneNumber;
	int allCourses;						// int met de hoeveelheid courses
};



