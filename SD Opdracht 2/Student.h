#pragma once
#include <string>
class Student
{
public:
    Student(std::string aName, std::string aLastName, std::string aDoB, std::string anAddress, std::string aPC, std::string aPhoneNumber,
        std::string aGuardianName, std::string aGuardianLastName, std::string aGuardianPhone, std::string aDoR, int aGrade);
    ~Student();

    void SetName(std::string aName);
    void SetLastName(std::string aLastName);
    void SetDateOfBirth(std::string aDoB);
    void SetAddress(std::string anAddress);                     // Alle setters en getters van de Student
    void SetPostalCode(std::string aPC);
    void SetPhoneNumber(std::string aPhoneNumber);
    void SetGuardianName(std::string aGuardianName);
    void SetGuardianLastName(std::string aGuardianLastName);
    void SetGuardianPhone(std::string aGuardianPhone);
    void SetDateOfRegistration(std::string aDoR);
    void SetGrade(int aGrade);

    std::string GetName();
    std::string GetLastName();
    std::string GetDateOfBirth();
    std::string GetAddress();
    std::string GetPostalCode();
    std::string GetPhoneNumber();
    std::string GetGuardianName();
    std::string GetGuardianLastName();
    std::string GetGuardianPhone();
    std::string GetDateOfRegistration();
    int GetGrade();

private:
    std::string name;
    std::string lastName;
    std::string dateOfBirth;
    std::string address;
    std::string postalCode;                     // Values van de student
    std::string phoneNumber;
    std::string guardianFirstName;
    std::string guardianLastName;
    std::string guardianPhone;
    std::string DateOfRegistration;
    int grade = 0;

};
