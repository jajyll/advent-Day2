//
//  main.cpp
//  sonarsweep tool
//
//  Created by Johan Jardevall on 01/12/2021.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string line;
    int pos_x = 0;
    int pos_z = 0;
    int aim = 0;
    int units = 0;
    ifstream f_in("/Users/johanjardevall/Documents/DEv/advent-Day2/advent-Day2/input.txt");
    while(getline(f_in, line)) {
        units = line.back()-'0';
        if (line.at(0) == 'd') {
            aim += units;
        }
        else if (line.at(0) == 'u') {
            aim -= units;
        }
        else if (line.at(0) == 'f') {
            pos_x += units;
            pos_z += units*aim;
        }

    }
    cout << "Horisontal: " << pos_x << " Depth: "<< pos_z << " Aim: "<< aim << " Multiply: " << pos_x * pos_z << "\n";
    return 0;
}
