#include "includes.h"

int Student::instances = 0;

Student::~Student( ) {
	instances--;
}

Student::Student( ) {
	m_firstname = "";
	m_lastname = "";
	m_grade = 0.f;
	instances++;
}

Student::Student( std::string FirstName, std::string LastName, float Grade )  {
	m_firstname = FirstName;
	m_lastname = LastName;
	m_grade = Grade;
	instances++;
}

int Student::GetInstances( ) {
	return instances;
}

std::string Student::GetFirstName( ) {
	return m_firstname;
}

std::string Student::GetLastName( ) {
	return m_lastname;
}

float Student::GetGrade( ) {
	return m_grade;
}

void Student::Print( ) {
	std::cout << m_firstname << " " << m_lastname << " " << m_grade << std::endl;
}
