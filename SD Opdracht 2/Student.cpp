#include "Student.h"

Student::Student(std::string aName, std::string aLastName, std::string aDoB, std::string anAddress, std::string aPC, std::string aPhoneNumber,
	std::string aGuardianName, std::string aGuardianLastName, std::string aGuardianPhone, std::string aDoR, int aGrade)
{
	SetName(aName);
	SetLastName(aLastName);
	SetDateOfBirth(aDoB);
	SetAddress(anAddress);
	SetPostalCode(aPC);
	SetPhoneNumber(aPhoneNumber);
	SetGuardianName(aGuardianName);					// Alles wordt in de constructor gezet
	SetGuardianLastName(aGuardianLastName);
	SetGuardianPhone(aGuardianPhone);
	SetDateOfRegistration(aDoR);
	SetGrade(aGrade);
}

Student::~Student()
{
}

// Alle getters en setters voor de student
#pragma region getters and setters

void Student::SetName(std::string aName)
{
	name = aName;
}

void Student::SetLastName(std::string aLastName)
{
	lastName = aLastName;
}

void Student::SetDateOfBirth(std::string aDoB)
{
	dateOfBirth = aDoB;
}

void Student::SetAddress(std::string anAddress)
{
	address = anAddress;
}

void Student::SetPostalCode(std::string aPC)
{
	postalCode = aPC;
}

void Student::SetPhoneNumber(std::string aPhoneNumber)
{
	phoneNumber = aPhoneNumber;
}

void Student::SetGuardianName(std::string aGuardianName)
{
	guardianFirstName = aGuardianName;
}

void Student::SetGuardianLastName(std::string aGuardianLastName)
{
	guardianLastName = aGuardianLastName;
}

void Student::SetGuardianPhone(std::string aGuardianPhone)
{
	guardianPhone = aGuardianPhone;
}

void Student::SetGrade(int aGrade)
{
	grade = aGrade;
}

void Student::SetDateOfRegistration(std::string aDoR)
{
	DateOfRegistration = aDoR;
}

std::string Student::GetName()
{
	return name;
}

std::string Student::GetLastName()
{
	return lastName;
}

std::string Student::GetDateOfBirth()
{
	return dateOfBirth;
}

std::string Student::GetAddress()
{
	return address;
}

std::string Student::GetPostalCode()
{
	return postalCode;
}

std::string Student::GetPhoneNumber()
{
	return phoneNumber;
}

std::string Student::GetGuardianName()
{
	return guardianFirstName;
}

std::string Student::GetGuardianLastName()
{
	return guardianLastName;
}

std::string Student::GetGuardianPhone()
{
	return guardianPhone;
}

std::string Student::GetDateOfRegistration()
{
	return DateOfRegistration;
}

int Student::GetGrade()
{
	return grade;
}
#pragma endregion

