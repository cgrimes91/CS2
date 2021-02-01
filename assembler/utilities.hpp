// Chris Grimes
// cs23001
// Free function hpp

#include "stack.hpp"
#include<iostream>
#include<fstream>

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

void infix2postfix(std::istream&, std::ostream&);
void postfix2assembly(std::istream&, std::ostream&);
String evaluate(String&, String&, String&, int&, std::ostream&);

#endif
