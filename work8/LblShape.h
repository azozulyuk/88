/* Citation and Sources...
-----------------------------------------------------------
Workshop 8
Module: 8
Filename: Lbl.Shape.h
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
#ifndef SENECA_LABELEDSHAPE_H
#define SENECA_LABELEDSHAPE_H
#include "Shape.h"
#include <iostream>


namespace seneca {

    class LblShape : public Shape {
        char* m_label;

    protected:
        const char* label() const;

    public:
        LblShape();
        LblShape(const char* label);

        LblShape(const LblShape&) = delete;
        LblShape& operator=(const LblShape&) = delete;

        void getSpecs(std::istream& is);

        virtual ~LblShape();
    };

}


#endif // !SENECA_LABELEDSHAPE_H