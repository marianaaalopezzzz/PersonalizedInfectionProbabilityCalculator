#ifndef BACTERIA_H
#define BACTERIA_H

#include "Disease.h"

class Bacteria : public Disease {
private:
    bool antibiotic_resistance;
public:
    // Constructor
    Bacteria(const std::string& name, double trans_prob, int severity, const std::string& trans_method, bool antibiotic_resistance);
};
#endif 
