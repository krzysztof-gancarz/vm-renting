//
// Created by student on 19.01.2020.
//

#include "../include/Exception.h"
#include <iostream>

using namespace std;

ParameterException::ParameterException(string s):
        logic_error(s)

{}