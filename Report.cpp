#include "Report.h"
//Constructor 
Report::Report(const User& user, const Disease& disease, const RiskFactor& riskFactor)
    :RiskCalculator(user,disease, riskFactor), final_calculated_probability(0.0), summary_and_recommendations(""){}
//Generate report 
void Report::generateReport(double final_probability, const std::string& summary){
    final_calculated_probability= final_probability;
    summary_and_recommendations = summary; 
}
double Report::getFinalProbability() const{
    return final_calculated_probability;
}
//get summary and recomendations 
std::string Report::getSummary() const{
    return summary_and_recommendations;
}
