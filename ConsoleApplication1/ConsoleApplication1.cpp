#include "includes.h"

int main( ) {
	// 3.1
	Rectangle a( 5, 5 ),
		b( 3, 9 );

	a.IsAreaBigger( b );
	a.IsPerimeterBigger( b );

	// 3.2
	std::vector<Student> students;
	students.push_back( Student( "Prince", "Charles", 4.9f ) );
	students.push_back( Student( "Mihnea", "166", 9.9f ) );
	students.push_back( Student( "Cristian", ".", 6.4f ) );
	students.push_back( Student( "Raul", "WS", 9.9f ) );
	students.push_back( Student( "Teo", "Olteanu", 8.6f ) );

	std::sort( students.begin( ), students.end( ), [ ] ( Student a, Student b ) {
		// conditie
		return a.GetGrade( ) > b.GetGrade( );
		} );

	for ( auto student : students )
		student.Print( );

	std::cout << "Finding Mihnea" << std::endl;

	// 3.3
	if ( auto it = std::find_if(
		students.begin( ), students.end( ),
		[ ] ( Student a ) { return a.GetFirstName( ) == "Mihnea"; } ); it != students.end( ) )
		it->Print( );

	// 3.4
	std::cout << "Best grade(s):" << std::endl;

	auto first_student = students.at(0);

	auto it = std::find_if(
		students.begin( ), students.end( ),
		[ &first_student ] ( Student a ) { return a.GetGrade( ) == first_student.GetGrade(); } );

	while ( it != students.end( ) ) {
		it->Print( );
		it = std::find_if(
			++it, students.end( ),
			[ &first_student ] ( Student a ) { return a.GetGrade( ) == first_student.GetGrade( ); } );
	}


}
