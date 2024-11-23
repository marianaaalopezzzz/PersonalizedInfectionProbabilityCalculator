#include "RiskCalculator.h"
//Constructor
RiskCalculator::RiskCalculator(User user, Disease disease, RiskFactor riskFactor)
    : user(user), disease(disease), riskfactor(riskFactor), base_risk(0.0){}

// Setters
void RiskCalculator::setBaseRisk(double risk) { 
    this->base_risk = risk; 
}

// Getters
double RiskCalculator::getBaseRisk() { 
    return base_risk; 
}

// Calculate Risk
double RiskCalculator::calculateRisk(){
    //Contribution (impact of each factor on the calculated infection risk)
    double userContribution = user.getAge();
    if (user.hasPre_Existing_Cond()) userContribution +=20.0; //We give a value for having a pre existing conditions 
    if (user.hasVaccines()) userContribution -=10.0; //Being vaccinated will reduce the risk thats why (-)

    // Risk factor contribution
    double riskFactorContribution = 0.0;
    if (riskfactor.getClimate() == "humid") riskFactorContribution += 15.0;
    else if (riskfactor.getClimate() == "dry") riskFactorContribution += 10.0;
    else if (riskfactor.getClimate() == "cold") riskFactorContribution += 20.0;
    riskFactorContribution += (riskfactor.getPopulation() / 1000.0); // Normalized population, makes the data be more manageable 
    riskFactorContribution += (10 - riskfactor.getHygiene_Level()); // Poor hygiene increases risk

    // Disease contribution
    double diseaseContribution = disease.getTransmission_Prob() * 100.0; // Convert to percentage
    diseaseContribution += disease.getSeverity() * 5.0; // Severity scales risk
    if (disease.getTransmission_Method() == "airborne") diseaseContribution += 20.0;
    else if (disease.getTransmission_Method() == "contact") diseaseContribution += 10.0;

    // Sum up contributions
    base_risk = userContribution + riskFactorContribution + diseaseContribution;

    // Normalize the risk to a percentage
    return (base_risk > 100.0) ? 100.0 : base_risk; // dosen't exceed 100%
}
