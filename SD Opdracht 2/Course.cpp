#include <iostream>
#include <vector>
#include "Course.h"

Course::Course(std::string aName, std::string aDoE)
{
	name = aName;		// Naam van de course en DoE worden aangeroepen
	DoE = aDoE;			//
	Init();
}
Course::~Course()
{
}

void Course::AddStudent(Student* aStudent)
{
	students.push_back(aStudent);					//Students toevoegen
}

void Course::RemoveStudent(int allStudents)
{
	students.erase(students.begin() + allStudents);	//students verwijderen
}

std::vector<Student*> Course::GetStudents()
{
	return students;								//students returnen		
}

//alle getters en setters van de course
#pragma region getters and setters

std::string Course::GetDateOfEstablishment()
{
	return DoE;
}

std::string Course::GetName()
{
	return name;
}

void Course::SetName(std::string aName)
{
	name = aName;
}

void Course::SetDateOfEstablishment(std::string aDoE)
{
	DoE = aDoE;
}
#pragma endregion


void Course::Init()
{
	for (int i = 0; i < 10	; i++)  //
	{
		students.push_back(new Student("Rick ", "Astley " + std::to_string(i), " 99/99/01 ", "Idk ", "2013DC ", "0606060660 ", "Nevergonna ", "Giveyouup ",
			"06666666666", "01/01/0001 ", 1));
		amountOfStudents++;
	}

	Student* student1 = new Student("Patryk ", "Podworny ", " 20/07/2002 ", "Zijlweg", " 2013DC ",	//Students kunnen worden aangemaakt
		"0669420420 ", "Father ", "Podworny ", "06420696969", " 99/01/1912 ", 2);					
	AddStudent(student1);

	RemoveStudent(2);																				//Students kunnen worden verwijderd

	std::cout << amountOfStudents << std::endl;
}