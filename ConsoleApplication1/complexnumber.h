#pragma once

class ComplexNumber {
private:
	float m_real, m_imaginary;
public:
	float GetReal( );
	float GetImaginary( );

	ComplexNumber( );
	ComplexNumber( float Real, float Imaginary );

	ComplexNumber operator+( ComplexNumber x );
	ComplexNumber operator*( ComplexNumber x );
};

class Ecuation {
private:
	float m_a, m_b, m_c, m_delta;
	std::pair <float, float> m_result;
public:
	Ecuation( );
	Ecuation( float a, float b, float c );
	std::pair <float, float> GetResult( );
};