/* Copyright 2022 Mandar Kapadia */
#include "EDistance.h"
EDistance::EDistance(const std::string s1 , const std::string s2) {
    this->s1 = s1;
    this->s2 = s2;

    const int HsizeX = s1.size()+1;
    const int WsizeY = s2.size()+1;

    Array2d = std::make_unique<Matrix>(HsizeX , WsizeY);
}
int EDistance::penalty(char a, char b) {
    return( (a == b) ? 0 : 1);
}
int EDistance::min(int a, int b, int c) {
    return ( std::min({a , b , c}));
}
int  EDistance::optDistance() {
    int match;
    int del;
    int insert;
    // get he max values for the edges
    for (unsigned int i = 0; i< s1.length()+1; i++) {
       Array2d->at(i , 0) = GapPen * i;
    }
    for (unsigned int i = 0; i < s2.length()+1; i++) {
       Array2d->at(0 , i) = GapPen * i;
    }

    for (unsigned int i = 1 ; i < s1.size()+1 ; i++) {
        for (unsigned int j = 1; j < s2.size()+1; j++) {
            match = Array2d->at(i -1 , j -1) + penalty(s1.at(i-1), s2.at(j-1)); //NOLINT
            del =  Array2d->at(i -1 , j) + GapPen;//NOLINT
            insert =  Array2d->at(i , j- 1) + GapPen;//NOLINT
            Array2d->at(i , j) = min(match , del , insert);//NOLINT
        }
    }
    return (Array2d->at(s1.size() , s2.size()));
}
std::string EDistance::alignment() {
    std::string A = "";
    std::string B = "";
    int i = s1.size();
    int j = s2.size();
    std::string temp ="";
     while (i > 0 || j > 0) {
         if(i > 0 && j > 0 && Array2d->at(i , j) == Array2d->at(i - 1 , j - 1) + penalty(s1.at(i-1) , s2.at(j-1))) {  //NOLINT
             A = s1.at(i - 1) + A;
             B = s2.at(j -1) + B;
             i--;
             j--;
         } else if (i > 0 && Array2d->at(i , j) == Array2d->at(i-1 , j) + GapPen) { //NOLINT
             A = s1.at(i -1) + A;
             B = '-' + B;
             i--;
         } else {
             A = '-' + A;
             B = s1.at(j -1) + B;
             j--;
         }
     }
    for (unsigned int k = 0; k < A.size(); k++) {
        if (A.at(k)== B.at(k)) {
            temp = temp + A.at(k) + ' ' + B.at(k) + ' ' + '0' + '\n';
        } else if  (A.at(k) == '-'|| B.at(k) == '-') {
            temp = temp + A.at(k) + ' ' + B.at(k) + ' ' + '2' + '\n';
        } else if (A.at(k) != B.at(k)) {
            temp = temp + A.at(k) + ' ' + B.at(k) + ' ' + '1'+'\n';
        }
    }
    return(temp);
}
