#ifndef RISKCALCULATOR_H
#define RISKCALCULATOR_H

#include <string>

#include "user.h"
#include "Disease.h"
#include "RiskFactor.h"

class RiskCalculator{
    private: 
        User user;
        Disease disease;
        RiskFactor riskfactor; 
        double base_risk; 
    public: 
        // Constructor 
        RiskCalculator(const User& use, const Disease& Disease, const RiskFactor& riskFactor);
        void setBaseRisk(double risk);
        double getBaseRisk() const; 
        double calculateRisk();
           
}; 
#endif 
