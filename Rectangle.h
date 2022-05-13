///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Final_Exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Shape.h"

class Rectangle : public Shape {
protected:
    double length;
    double width;
public:
    Rectangle(double newLength, double newWidth);
    double getLength() const;
    double getWidth() const;
    double compute_area() override;
};

