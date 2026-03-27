
/* Citation and Sources...
-----------------------------------------------------------
Workshop 8
Module: 8
Filename: Lbl.Shape.cpp
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
#define _CRT_SECURE_NO_WARNINGS
#include "LblShape.h"
#include <cstring>
using namespace std;

namespace seneca {

    LblShape::LblShape() {
        m_label = nullptr;
    }

    LblShape::LblShape(const char* label) {
        m_label = nullptr;
        if (label != nullptr) {
            m_label = new char[strlen(label) + 1];
            strcpy(m_label, label);
        }
    }

    LblShape::~LblShape() {
        delete[] m_label;
    }

    const char* LblShape::label() const {
        return m_label;
    }

   void LblShape::getSpecs(istream& is) {
    char temp[81];
    is.getline(temp, 81, ',');

    // remove '>' if present
    if (temp[0] == '>') {
        memmove(temp, temp + 1, strlen(temp));
    }

    delete[] m_label;

    if (strlen(temp) > 20) {
        m_label = new char[strlen(temp) + 2]; // space + text + '\0'
        m_label[0] = ' ';
        strcpy(m_label + 1, temp);
    }
    else {
        m_label = new char[strlen(temp) + 1];
        strcpy(m_label, temp);
    }
}
}
