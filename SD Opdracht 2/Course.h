#pragma once
#include <string>
#include <vector>
#include "Student.h"

class Course
{

public:
	Course(std::string aName, std::string aDoE);
	~Course();

	void AddStudent(Student* aStudent);				// Students toevoegen
	void RemoveStudent(int allStudents);			// Students verwijderen
	std::vector<Student*> GetStudents();			// students aanvragen

	std::string GetName();							// 
	std::string GetDateOfEstablishment();			// Getters en setters voor de naam en DoE van een course
	void SetName(std::string aName);				//
	void SetDateOfEstablishment(std::string aDoE);	//

private:
	void Init();
	std::string name;						//
	std::string DoE;						// Variables van de getters en setters
	std::vector<Student*> students;			//
	int allStudents;						//
	int amountOfStudents;					//
};


