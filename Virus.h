#ifndef VIRUS_H
#define VIRUS_H

#include "Disease.h"

class Virus : public Disease {
private:
    double mutation;
public:
    // Constructor
    Virus(const std::string& name, double trans_prob, int severity, const std::string& trans_method, double mutation);
};
#endif 
