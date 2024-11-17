#include "RiskCalculator.h"
//Constructor
RiskCalculator::RiskCalculator(const User& use, const Disease& Disease, const RiskFactor& riskFactor)
    : user(use), disease(Disease), riskfactor(riskFactor), base_risk(0.0){}

// Setters
void RiskCalculator::setBaseRisk(double risk) { this->base_risk = risk; }

// Getters
double RiskCalculator::getBaseRisk() const { return base_risk; }

// Calculate Risk
double RiskCalculator::calculateRisk() {
    return base_risk; 
}
