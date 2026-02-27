#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "CSharpStyle.hpp"

class Brain {
private:
    string ideas[100];

public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

    void setIdea(int index, const string& idea);
    string getIdea(int index) const;
};

#endif