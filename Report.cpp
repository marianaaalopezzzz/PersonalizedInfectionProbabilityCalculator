#include "Report.h"
//Constructor 
Report::Report(User user, Disease disease, RiskFactor riskFactor, double probability, std::string summary, std::string recommendations)
    :riskCalculator(user,disease, riskFactor), final_calculated_probability(probability), summary(summary), recommendations(recommendations) {}

// Setters
void Report::setFinal_Calculated_Probability(double final_calculated_probability) { this->final_calculated_probability = final_calculated_probability; }
void Report::setSummary(std::string summary) { this->summary = summary; }
void Report::setRecommendations(std::string recommendations) { this->recommendations = recommendations; }

// Getters
double Report::getFinal_Calculated_Probability() { return final_calculated_probability; }
std::string Report::getSummary() { return summary; }
std::string Report::getRecommendations() { return recommendations; }
