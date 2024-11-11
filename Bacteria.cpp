#include "Bacteria.h"
//Constructor 
Bacteria::Bacteria(const std::string& name, double trans_prob, int severity, const std::string& trans_method, bool antibiotic_resistance)
    :Disease(name, trans_prob, severity, trans_method), antibiotic_resistance(antibiotic_resistance){}
