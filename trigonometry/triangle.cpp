//
//  triangle.cpp
//  trigonometry
//
//  Created by Breno Sallouti on 11/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//
#include <math.h>
#include "triangle.hpp"
float triangle::calculate_c (void){
    return sqrtf(a*a+b*b);
}
