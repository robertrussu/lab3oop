#include "includes.h"

float ComplexNumber::GetReal( ) {
	return m_real;
}

float ComplexNumber::GetImaginary( ) {
	return m_imaginary;
}

ComplexNumber::ComplexNumber( ) {
	m_real = m_imaginary = 0.f;
}

ComplexNumber::ComplexNumber( float Real, float Imaginary ) {
	m_real = Real;
	m_imaginary = Imaginary;
}

ComplexNumber ComplexNumber::operator+( ComplexNumber x ) {
	return ComplexNumber( m_real + x.GetReal( ), m_imaginary + x.GetImaginary( ) );
}

ComplexNumber ComplexNumber::operator*( ComplexNumber x ) {
	return ComplexNumber( m_real * x.GetReal( ) - m_imaginary * x.GetImaginary( ), m_real * x.GetImaginary( ) + m_imaginary * x.GetReal( ) );
}

Ecuation::Ecuation( ) {
	m_a = m_b = m_c = m_result.first = m_result.second = 0;
}

Ecuation::Ecuation( float a, float b, float c ) {
	m_a = a;
	m_b = b;
	m_c = c;
	m_delta = ( b * b ) - ( 4 * a * c );
	m_result.first = ( -b + sqrt( m_delta ) ) / ( 2 * a );
	m_result.second = ( -b - sqrt( m_delta ) ) / ( 2 * a );
}

std::pair<float, float> Ecuation::GetResult( ) {
	if ( m_delta < 0 )
		return std::make_pair<float, float>( FLT_MIN, FLT_MIN );

	return m_result;
}