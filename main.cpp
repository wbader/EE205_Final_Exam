///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_Final_Exam - EE 205 - Spr 2022
///
/// @file main.cpp - Implementing "Classes" final
/// @version 1.0
///
/// @author Waylon Bader <wbader@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main() {
// Main for Classes
    int main() {
        std::cout << "Hello, World!" << std::endl;

        Square mySquare(2);
        std::cout << "The area of mySquare is: "
                  << mySquare.compute_area()
                  << std::endl;

        Rectangle myRectangle( 2, 4 );
        std::cout << "The area of myRectangle is: "
                  << myRectangle.compute_area()
                  << std::endl;

        return 0;
    }
}
