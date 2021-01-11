#include "School.h"
#include "Student.h"


Player::Player(std::string aName, int pCoins, std::string anAddress, std::string aPC, std::string aPhoneNumber)
{
	SetName(aName);
	SetpCoins(pCoins);
	SetAddress(anAddress);				// alles wordt in de constructor gezet
	SetPostalCode(aPC);
	SetPhoneNumber(aPhoneNumber);
	Init();								//init wordt aangeroepen
}

Player::~Player()
{
}

void Player::RemoveCourse(int allCourses)
{
	courses.erase(courses.begin() + allCourses);	//course verwijderen
}

void Player::AddCourse(Course* aCourse)
{
	courses.push_back(aCourse);						//course toevoegen
}

int Player::GetAmountOfCourses()
{
	return courses.size();							//hoeveelheid courses tellen
}

std::vector<Course*> Player::GetCourses()
{
	return courses;									//courses worden gereturned
}

//hier zijn natuurlijk alle getters en setters en values
#pragma region getters and setters 

std::string Player::GetName()
{
	return name;
}

int Player::GetpCoins()
{
	return playerCoins;
}
}

void Player::SetName(std::string aName)
{
	name = aName;
}

void Player::SetpCoins(int pCoins)
{
	playerCoins = pCoins;
}
#pragma endregion

void Player::Init()
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