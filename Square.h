///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Final_Exam - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Rectangle.h"

class Square : public Rectangle {
public:
    explicit Square(double newSide);
    double getSide();
};

