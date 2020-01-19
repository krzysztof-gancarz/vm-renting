//
// Created by student on 19.01.2020.
//

#ifndef POBI_EXCEPTION_H
#define POBI_EXCEPTION_H

#include <stdexcept>

class ParameterException : public std::logic_error{
public:
    ParameterException(std::string s);

};



#endif //POBI_EXCEPTION_H
