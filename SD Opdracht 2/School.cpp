#include "School.h"
#include "Student.h"


School::School(std::string aName, std::string aDoE, std::string anAddress, std::string aPC, std::string aPhoneNumber)
{
	SetName(aName);
	SetDoE(aDoE);
	SetAddress(anAddress);				// alles wordt in de constructor gezet
	SetPostalCode(aPC);
	SetPhoneNumber(aPhoneNumber);
	Init();								//init wordt aangeroepen
}

School::~School()
{
}

void School::RemoveCourse(int allCourses)
{
	courses.erase(courses.begin() + allCourses);	//course verwijderen
}

void School::AddCourse(Course* aCourse)
{
	courses.push_back(aCourse);						//course toevoegen
}

int School::GetAmountOfCourses()
{
	return courses.size();							//hoeveelheid courses tellen
}

std::vector<Course*> School::GetCourses()
{
	return courses;									//courses worden gereturned
}

//hier zijn natuurlijk alle getters en setters en values
#pragma region getters and setters 

std::string School::GetName()
{
	return name;
}

std::string School::GetDoE()
{
	return dayOfEstablishment;
}

std::string School::GetAddress()
{
	return address;
}

std::string School::GetPostalCode()
{
	return postalCode;
}

std::string School::GetPhoneNumber()
{
	return phoneNumber;
}

void School::SetName(std::string aName)
{
	name = aName;
}

void School::SetDoE(std::string aDoE)
{
	dayOfEstablishment = aDoE;
}

void School::SetAddress(std::string anAddress)
{
	address = anAddress;
}

void School::SetPostalCode(std::string aPC)
{
	postalCode = aPC;
}

void School::SetPhoneNumber(std::string aPhoneNumber)
{
	phoneNumber = aPhoneNumber;
}
#pragma endregion

void School::Init()
{
	Course* aChangedCourse = new Course("New Course", "00/00/2002");
	aChangedCourse->SetName("Random Course");
	aChangedCourse->SetDateOfEstablishment("3 Before Christ");
	AddCourse(aChangedCourse);

	courses.push_back(new Course("Media Development", "01/01/2000"));	//
	courses.push_back(new Course("Game Artist", "01/01/2000"));			//
	courses.push_back(new Course("Game Development", "01/01/2000"));	// Er kunnen nieuwe courses worden toegevoegd
	courses.push_back(new Course("Audiovisueel", "01/01/2000"));		//
	courses.push_back(new Course("Media Management", "01/01/2000"));	//
																		//
	RemoveCourse(4);													// En er kunnen ook courses worden verwijderd
}