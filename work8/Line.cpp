
/* Citation and Sources...
-----------------------------------------------------------
Workshop 8
Module: 8
Filename: Line.cpp
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
#include "Line.h"
#include <iostream>
using namespace std;

namespace seneca {

    Line::Line() : LblShape() {
        m_length = 0;
    }

    Line::Line(const char* label, int length) : LblShape(label) {
        m_length = length;
    }

    void Line::getSpecs(istream& is) {
        LblShape::getSpecs(is);
        is >> m_length;
        is.ignore(1000, '\n');
    }

    void Line::draw(ostream& os) const {
        if (m_length > 0 && label() != nullptr) {
            os << label() << endl;
            for (int i = 0; i < m_length; i++) {
                os << "=";
            }
        }
    }

}