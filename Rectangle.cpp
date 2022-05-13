///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Final_Exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Rectangle.h"
#include "config.h"

#include <stdexcept>

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

Rectangle::Rectangle(double newLength, double newWidth) {
    if(newLength <= 0 || newWidth <=0)
    {
        throw std::invalid_argument(PROGRAM_NAME " Rectangle() length and width must be > 0");
    }
}

double Rectangle::compute_area() {
    return length * width;
}