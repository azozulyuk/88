
/* Citation and Sources...
-----------------------------------------------------------
Workshop 8
Module: 8
Filename: Rectangle.cpp
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

#include "Rectangle.h"
#include <iostream>
#include <cstring>
using namespace std;

namespace seneca {

    Rectangle::Rectangle() : LblShape() {
        m_width = 0;
        m_height = 0;
    }

    Rectangle::Rectangle(const char* label, int width, int height)
        : LblShape(label) {

        if (this->label()) {

            int minWidth = strlen(this->label()) + 2;

            // enforce minimum width
            if (width < minWidth)
                m_width = minWidth;
            else
                m_width = width;

            // enforce minimum height
            if (height < 3)
                m_height = 3;
            else
                m_height = height;
        }
        else {
            m_width = 0;
            m_height = 0;
        }
    }

    void Rectangle::getSpecs(istream& is) {
        LblShape::getSpecs(is);
        char comma;
        is >> m_width;
        is >> comma;
        is >> m_height;
        is.ignore(1000, '\n');
    }

    void Rectangle::draw(ostream& os) const {

        if (label() != nullptr) {

            // top
            os << "+";
            for (int i = 0; i < m_width - 2; i++) {
                os << "-";
            }
            os << "+" << endl;

            // ✅ THIS IS THE PART YOU JUST FIXED
            os << "|" << label();

            int space = m_width - 2 - (int)strlen(label());
            for (int i = 0; i < space; i++) {
                os << " ";
            }

            os << "|" << endl;

            // middle
            for (int i = 0; i < m_height - 3; i++) {
                os << "|";
                for (int j = 0; j < m_width - 2; j++) {
                    os << " ";
                }
                os << "|" << endl;
            }

            // bottom
            os << "+";
            for (int i = 0; i < m_width - 2; i++) {
                os << "-";
            }
            os << "+";
        }
    }

}