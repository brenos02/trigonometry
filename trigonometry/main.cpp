//
//  main.cpp
//  trigonometry
//
//  Created by Breno Sallouti on 11/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include <iostream>
#include "triangle.hpp"
int main(int argc, const char * argv[]) {
    float c;
    triangle t;
    t.a=10;
    t.b=16;
    c = t.calculate_c();
    std::cout << c;
    return 0;
}
