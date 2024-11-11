#include "Virus.h"
//Constructor 
Virus::Virus(const std::string& name, double trans_prob, int severity, const std::string& trans_method, double mutation)
    :Disease(name, trans_prob, severity, trans_method), mutation(mutation) {}
    
