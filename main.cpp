/*
Author: Tamanna Chowdhury
Course: CSCI-125
Github: tamannachowdhuryy
Instructor: Mike Zamansky
Assignment: Printing Shapes, Lab4

This will print out all the shapes that are stated 
*/

#include <iostream>
#include <string>
#include "func.h"

int main(){
//TASK A: BOX
  std::cerr << "Width: 3 \n";
  std::cerr << "Height: 5 \n";
  std::cerr << "Shape: \n";
  std::cerr << box(3, 5);
  std::cerr << "\n------------------\n";
  
  std::cerr << "Width: 7 \n";
  std::cerr << "Height: 4 \n";
  std::cerr << "Shape: \n";
  std::cerr << box(7, 4);
  std::cerr << "\n------------------\n";
  
//TASK B: CHECKERBOARD
  std::cerr << "Width: 11 \n";
  std::cerr << "Height: 6 \n";
  std::cerr << "Shape: \n";
  std::cerr << checkerboard(11, 6);
  std::cerr << "\n------------------\n";

  std::cerr << "Width: 13 \n";
  std::cerr << "Height: 7 \n";
  std::cerr << "Shape: \n";
  std::cerr << checkerboard(13, 7);
  std::cerr << "\n------------------\n";
  
//TASK C: CROSS
  std::cerr << "Size: 8 \n";
  std::cerr << "Shape: \n";
  std::cerr << cross(8);
  std::cerr << "\n------------------\n";

  std::cerr << "Size: 10 \n";
  std::cerr << "Shape: \n";
  std::cerr << cross(10);
  std::cerr << "\n------------------\n";

//TASK D: LOWER
  std::cerr << "Size: 6 \n";
  std::cerr << "Shape: \n";
  std::cerr << lower(6);
  std::cerr << "\n------------------\n";

  std::cerr << "Size: 10 \n";
  std::cerr << "Shape: \n";
  std::cerr << lower(15);
  std::cerr << "\n------------------\n";

//TASK E: UPPER
  std::cerr << "Size: 5 \n";
  std::cerr << "Shape: \n";
  std::cerr << upper(5);
  std::cerr << "\n------------------\n";

  std::cerr << "Size: 8 \n";
  std::cerr << "Shape: \n";
  std::cerr << upper(8);
  std::cerr << "\n------------------\n";
  
//TASK F: UPSIDE-DOWN TRAPEZOID
  std::cerr << "Width: 12 \n";
  std::cerr << "Height: 5 \n";
  std::cerr << "Shape: \n";
  std::cerr << trapezoid(12, 5);
  std::cerr << "\n------------------\n";

  std::cerr << "Width: 12 \n";
  std::cerr << "Height: 7 \n";
  std::cerr << "Shape: \n";
  std::cerr << trapezoid(12, 7);
  std::cerr << "\n------------------\n";
  
// TASK G: CHECKERBOARD (3X3)
  std::cerr << "Width: 16 \n";
  std::cerr << "Height: 11 \n"; 
  std::cerr << "Shape: \n";
  std::cerr << checkerboard3x3(16, 11);
  std::cerr << "\n------------------\n";
  
  std::cerr << "Width: 27 \n";
  std::cerr << "Height: 27 \n"; 
  std::cerr << "Shape: \n";
  std::cerr << checkerboard3x3(27, 27);
  std::cerr << "\n------------------\n";
return 0; 
}
