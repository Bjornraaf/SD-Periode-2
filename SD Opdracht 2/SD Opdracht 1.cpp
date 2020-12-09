#include <iostream>
#include <vector>
#include "School.h"
#include "Student.h"
#include "SD Opdracht 1.h"

int main()
{
	School mySchool("Mediacollege Amsterdam ", " 06/09/0420 "," Contactweg ", " 9000FU ", " 0669420420");//School wordt aangemaakt met parameters

	std::cout << mySchool.GetName() << std::endl;			//
	std::cout << mySchool.GetDoE() << std::endl;			//
	std::cout << mySchool.GetAddress() << std::endl;		// De parameters worden uitgeprint in de console
	std::cout << mySchool.GetPostalCode() << std::endl;		//
	std::cout << mySchool.GetPhoneNumber() << std::endl;	//

	std::cout << mySchool.GetName() << std::endl;			// Mediacollege Amsterdam
	std::cout << "Has these courses: " << std::endl;		// Has these courses:

	for (Course* c : mySchool.GetCourses())		// Courses worden opgevraagd 
	{
		std::cout << c->GetName() << " Estabilished in: " << c->GetDateOfEstablishment() << std::endl; // De namen en DoE van de courses worden uitgeprint

		for (Student* s : c->GetStudents()) // De studenten worden opgevraagd
		{
			std::cout << s->GetName(), 
			std::cout << s->GetLastName(), 
			std::cout << s->GetDateOfBirth(),			// Elke course wordt uitgeprint met de informatie van studenten die de course volgen
			std::cout << s->GetAddress(),
			std::cout << s->GetPostalCode(), 
			std::cout << s->GetPhoneNumber(), 
			std::cout << s->GetGuardianName(),
			std::cout << s->GetGuardianLastName(), 
			std::cout << s->GetGuardianPhone(), 
			std::cout << s->GetDateOfRegistration(),
			std::cout << s->GetGrade() << std::endl;
		}
	}
	return 0;
}
