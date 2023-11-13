#pragma once

class Rectangle {
private:
	int m_x, m_y;
	int m_perimeter, m_area;
public:
	Rectangle(  );
	Rectangle( int X, int Y );

	bool IsAreaBigger( Rectangle rect );
	bool IsPerimeterBigger( Rectangle rect );

	int GetX( );
	int GetY( );
	int GetPerimeter( );
	int GetArea( );
};