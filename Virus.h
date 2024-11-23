#ifndef VIRUS_H
#define VIRUS_H

#include "Disease.h"

class Virus : public Disease {
private:
    double mutation;
public:
    // Constructor
    Virus(std::string name, double transmission_prob, int severity, std::string transmission_method, double mutation);
    double getMutationRate(); 
};
#endif 
