/*Copyright 2022  Mandar Kapadia */
#include <iostream>//NOLINT
#include"Matrix.h"//NOLINT
#include"EDistance.h"
#include<algorithm>
#include<SFML/System.hpp> //NOLINT

int main(int argc, char* argv[]) {
    sf::Clock clock;
    sf::Time time;
    std::string temp1;
    std::string temp2;

    std::cin >> temp1 >> temp2;

    EDistance tempEDistance(temp1 , temp2);
    std::cout << "Edit distance = " << tempEDistance.optDistance() << "\n" << tempEDistance.alignment();//NOLINT
    time = clock.getElapsedTime();
    std::cout << "time passed  is " << time.asSeconds() << "seconds\n";
     std::cout << "Edit distance = " << tempEDistance.optDistance();
    return 0;
}
