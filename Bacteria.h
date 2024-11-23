#ifndef BACTERIA_H
#define BACTERIA_H

#include "Disease.h"

class Bacteria : public Disease {
private:
    bool antibiotic_resistance;
public:
    // Constructor
    Bacteria(std::string name, double transmission_prob, int severity, std::string transmission_method, bool antibiotic_resistance);
    bool hasAntibioticResistance(); 
};
#endif 
