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
        RiskCalculator(User user, Disease disease, RiskFactor riskFactor);
        //Setter
        void setBaseRisk(double risk);
        //Getter
        double getBaseRisk(); 
        //Calc Risk 
        double calculateRisk();
           
}; 
#endif 
