#ifndef CAR_H
#define CAR_H

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
        RiskCalculator(const User& use, const Disease& dise, const RiskFactor& riskfact)
            :user(use), disease(dise), riskfactor(riskfact), base_risk(0.0){}
        void start();
        void stop(); 
           
}; 
#endif 
