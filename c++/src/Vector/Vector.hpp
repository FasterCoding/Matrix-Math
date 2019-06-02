
#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <iostream>
#include <vector>

class Vector {

private:
    
    std::vector<int> _vector;

public:
    Vector(int size);
    Vector(std::vector<int> vector);
    ~Vector();

    void print();
};

#endif