#include "includes.h"

Rectangle::Rectangle( ) {
	m_x = m_y = 0;
	m_perimeter = m_area = 0;
}

Rectangle::Rectangle( int X, int Y ) {
	m_x = X;
	m_y = Y;
	m_perimeter = m_x * 2 + m_y * 2;
	m_area = m_x * m_y;
}

bool Rectangle::IsAreaBigger( Rectangle rect ) {
	return m_area > rect.GetArea();
}

bool Rectangle::IsPerimeterBigger( Rectangle rect ) {
	return m_perimeter > rect.GetPerimeter( );
}

int Rectangle::GetX( ) {
	return m_x;
}

int Rectangle::GetY( ) {
	return m_y;
}

int Rectangle::GetPerimeter( ) {
	return m_perimeter;
}

int Rectangle::GetArea( ) {
	return m_area;
}