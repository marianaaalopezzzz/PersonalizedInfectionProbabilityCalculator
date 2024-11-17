#ifndef VIRUS_H
#define VIRUS_H

#include "Disease.h"

class Virus : public Disease {
private:
    double mutation;
public:
    // Constructor
    Virus(const std::string& name, double transmission_prob, int severity, const std::string& transmission_method, double mutation);
};
#endif 
