
/* Citation and Sources...
-----------------------------------------------------------
Workshop 8
Module: 8
Filename:Shape.h
-----------------------------------------------------------
Author: Anastasiya Zozulyuk
Student number: 139,230,247
Email: azozulyuk@myseneca.ca
Subject: BTP200NAA
-----------------------------------------------------------
Revision History
------- --------- ------------------------------------------
Version Date      Reason
V0.7    2026/03/26  Completing code
V0.8    2026/03/26 Debugged
V0.9    -         Asked prof for help for XYZ
V1.0    2026/03/27  Ready for submission
-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my work for function main,ect.
-----------------------------------------------------------
*/
#pragma once
#ifndef SENECA_SHAPE_H
#define SENECA_SHAPE_H
#include <iostream>

namespace seneca {

    class Shape {
    public:
        virtual void draw(std::ostream& os) const = 0;
        virtual void getSpecs(std::istream& is) = 0;
        virtual ~Shape() {};
    };

    std::ostream& operator<<(std::ostream& os, const Shape& S);
    std::istream& operator>>(std::istream& is, Shape& S);

}
#endif // !SENECA_SHAPE_H