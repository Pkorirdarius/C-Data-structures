// Abstraction using a header file

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

// Abstract file
class Shape{
    protected:
        std::string name;

    public:
    Shape(const std::string& name);
    // Pure virtual function
    virtual void draw() const=0 ;
    virtual ~Shape()=default;
};

#endif // SHAPE_H