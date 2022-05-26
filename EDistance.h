/*Copyright 2022  Mandar Kapadia */
#ifndef EDis_h
#define EDis_h

#include "Matrix.h"
#include<string>
#include<memory>
#include <algorithm>
class EDistance{
 public:
    EDistance(const std::string s1 , const std::string s2);
    int penalty(char a, char b);
    int optDistance();
    int min(int a, int b, int c);
    std:: string alignment();
 private:
    int GapPen = 2;
    std::string s1;
    std::string s2;
    std::unique_ptr<Matrix> Array2d;
};
#endif
