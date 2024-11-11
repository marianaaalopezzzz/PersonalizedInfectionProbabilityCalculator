#include "Disease.h"
Disease::Disease(const std::string& name, double trans_prob, int severity, const std::string& trans_method)
    :name(name), trans_prob(trans_prob), severity(severity), trans_method(trans_method) {}
    
