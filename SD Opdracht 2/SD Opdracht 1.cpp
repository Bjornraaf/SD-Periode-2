#include <iostream>
#include <vector>
#include "School.h"
#include "Student.h"
#include "SD Opdracht 1.h"

int main()
{
	Player player1("Peepeepoopoo ", 12323 ," Contactweg ", " 9000FU ", " 0669420420");//Player wordt aangemaakt met parameters

	std::cout << "Player Name: " << player1.GetName() << std::endl;
	std::cout << "Player Coins: " << player1.GetpCoins() << std::endl;
	std::cout << player1.GetAddress() << std::endl;		// De parameters worden uitgeprint in de console
	std::cout << player1.GetPostalCode() << std::endl;		//
	std::cout << player1.GetPhoneNumber() << std::endl;	//

	std::cout << player1.GetName() << std::endl;			// Mediacollege Amsterdam
	std::cout << "Has these courses: " << std::endl;		// Has these courses:

	for (Course* c : player1.GetCourses())		// Courses worden opgevraagd 
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
