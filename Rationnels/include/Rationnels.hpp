#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <cassert>

// Doxygen menu
/// \version 0.1
/// \mainpage
/// \image html 50.jpg
/// \tableofcontents
/// \section instroduction_sec What for?
/// Rationnels is a super tool. In theory, rational number operations do not imply any numerical approximation, and are therefore very different. In practice, the numerator and the denominator are two integers on a finite number of bits, which implies limits on the precision of the operations performed. The data structure for a rational number is simply a numerator and a denominator, two integers.
/// \section install_bigsec How to install
/// \subsection dependencies_sec Dependecies
/// \li nothing
/// \li Doxygen (if you want the documentation)
/// \subsection install_sec Install with cmake (Linux / Mac)
/// \li go to main dir
/// \li delete build directory
/// \li mkdir build
/// \li cd build
/// \li cmake ..
/// \li make
/// \li if Doxygen installed: make html
/// \li The documentation is located in :
/// 	- [path to build]/doc/doc-doxygen/html/index.html or 
/// 	- or [path to build]/INTERFACE/doc/doc-doxygen/html/index.html



/// \class Rationnels
/// \brief Class defining a rational for algebra operations.

class Rationnels {
        
    public:

        /// \brief Composant of a rational
        long long numerator;
        long long denominator;

        /// \brief Default constructor
        Rationnels();

        Rationnels(float ratio);

        /// \brief Constructor of a rational composed of a numerator and a denominator
        /// \param num : The numerator of the rational
        /// \param deno : The denominator of the rational  
        Rationnels(long nume, long deno);

        /// \brief Inverse of a rational
        /// \return The inverse of a rational
        Rationnels reverse();

        /// \brief Operator to add 2 rationales
        /// \param rationnel : Rational to add to the calling rational
        /// \return The sum of the current rationnal and the argument rationnal
        Rationnels operator+(const Rationnels rationnel) const;
        
        /// \brief Operator to make the product of 2 rationals
        /// \param rationnel : Rational to multiply to the calling rational
        /// \return The product of the current rationnal and the argument rationnal
        Rationnels operator*(const Rationnels rationnel) const;
        
        /// \brief Inverse of a rational
        /// \return The inverse of a rational
        Rationnels operator!()const;

        /// \brief Operator to substract a rationnal to *this
        /// \param rationnel : Rational to substract to the calling rational
        /// \return The subtraction of the current rationnal and the argument rationnal
        Rationnels operator-(const Rationnels rationnel) const;

        /// \brief Unary minus
	    /// \return The minus the calling rationnal 
        Rationnels operator-()const;

        /// \brief Operator to divide a rationnal to *this
        /// \param rationnel : Rational to divide to the calling rational
        /// \return The division of the current rationnal and the argument rationnal
        Rationnels operator/(const Rationnels rationnel)const;

        /// \brief Operator to compare the equality of 2 rationnels
	    /// \param  R: Rationnel to compare to the calling rationnel
	    /// \return True if the two rationnels are equal
        bool operator==(const Rationnels &R);

        /// \brief Operator to compare the inequality of 2 rationals
	    /// \param  R: Rationnel to compare to the calling rational
	    /// \return True if the two rationals are not equal
        bool operator!=(const Rationnels &R);

        /// \brief Operator to compare the inferiority or equality of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals lower or equal to the calling vector       
        bool operator<=(Rationnels R);

        /// \brief Operator to compare the strict superiority of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals strictly higher to the calling vector 
        bool operator<(Rationnels R);

        /// \brief Operator to compare the strict superiority or equality of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals strictly higher to the calling vector
        bool operator>(Rationnels R);

        /// \brief Operator to compare the superiority or equality of 2 rationals
	    /// \param  R: Rational to compare to the calling rational
	    /// \return True if the rationals superior or equal to the calling vector 
        bool operator>=(Rationnels R);

        /// \brief Compute the squareroot of the numerator divided by the square root of the denominator (the rational has to be positive)
	    /// \return The squareroot of the current rational
        Rationnels squareRoot();

        /// \brief Compute the power of the numerator divided by the power of the denominator
	    /// \param  n: The power 
	    /// \return The power of a rationnal
        Rationnels power(float n);

        /// \brief Transform a real into a rational
	    /// \param  ratio: a real number to convert to rational
        /// \param  iterations: Number of recursive calls remaining
	    /// \return A rationnal
        Rationnels getRationnel(float ratio, int iterations);

        Rationnels getRationnelMinus(float ratio, int iterations);

        /// \brief Compute the exponentielle of a rational
	    /// \return The exponentielle of a rational
        Rationnels exponentielle();

        /// \brief Compute the rational of the logarithme of the numerator minus the logarithme of the denominator (the rational has to be stricly positive)
	    /// \return  The logarithme of a rational
        Rationnels logarithme();

        /// \brief Transform a ratio into a float to compute the cosinus of a float
	    /// \return The rational of the cosinus of a float
        Rationnels cosinus();

        /// \brief Transform a ratio into a float to compute the sinus of a float
	    /// \return The rational of the sinus of a float
        Rationnels sinus();

        /// \brief Transform a ratio into a float to compute the tangente of a float
	    /// \return The rational of the tangente of a float
        Rationnels tangente();

        /// \brief Compute minus the numerator or the denominator if one of them is negative
	    /// \return The absolute value of the numerator divided by the absolute value of the denominator
        Rationnels absolue();

        /// \brief Transform the rational into the lower int 
	    /// \return The whole of a rational
        int whole();

        /// \brief Compute the product of a rational and the rational of a float 
        /// \param  F: Float to multiply with the current rational 
	    /// \return The product of a float and a rational
        Rationnels floatProduct(float F);

        /// \brief Compute the division of a rational and the rational of a float 
        /// \param  F: Float to divide with the current rational 
	    /// \return The division of a float and a rational
        Rationnels floatDivide(float F);
        
        
};

/// \brief Overload the operator << for rational
/// \param stream : Input stream
/// \param v : The rational to output
/// \return The output stream containing the rational data
std::ostream& operator<< (std::ostream& stream, const Rationnels& v);


