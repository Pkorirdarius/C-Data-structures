#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "shape.hpp"

class Circle : public Shape{
    private:
        float radius;

    public:
        Circle(const std::string &name, float radius);
        void draw() const override;
};


#endif // CIRCLE_H