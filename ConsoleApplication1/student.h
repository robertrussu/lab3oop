#pragma once

class Student {
private:
	std::string m_firstname, m_lastname;
	float m_grade;
	static int instances;
public:
	~Student( );
	Student( );
	Student( std::string FirstName, std::string LastName, float Grade );
	int GetInstances( );
	std::string GetFirstName( );
	std::string GetLastName( );
	float GetGrade( );
	void Print( );
};