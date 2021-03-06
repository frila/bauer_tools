#ifndef _BAUER_EXCEPTION_
#define _BAUER_EXCEPTION_

#include <exception>
#include <iostream>

namespace bauer {
class bauer_exception: public std::exception {
    virtual const char* what() const throw();
};
}

#endif
