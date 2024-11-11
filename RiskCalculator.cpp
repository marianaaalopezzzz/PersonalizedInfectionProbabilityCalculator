#include "RiskCalculator.h"
//Constructor
RiskCalculator::RiskCalculator(const User& use, const Disease& dise, const RiskFactor& riskfact)
    : user(use), disease(dise), riskfactor(riskfact), base_risk(0.0){}
void RiskCalculator::start(){}
void RiskCalculator::stop() {}
