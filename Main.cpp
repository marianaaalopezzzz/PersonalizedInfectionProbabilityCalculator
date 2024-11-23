#include <iostream>
#include <string>
#include "user.h"
#include "Disease.h"
#include "Virus.h"
#include "Bacteria.h"
#include "RiskFactor.h"
#include "RiskCalculator.h"
#include "Report.h"

#include "User.cpp"
#include "Disease.cpp"
#include "Virus.cpp"
#include "Bacteria.cpp"
#include "RiskFactor.cpp"
#include "RiskCalculator.cpp"
#include "Report.cpp"


void displayMenu() {
    std::cout << "===== Infection Risk Calculator =====" << std::endl;
    std::cout << "1. Calculate infection risk" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(); // To ignore newline characters

        if (choice == 1) {
            // User details
            int age;
            std::string gender;
            bool preExistingCondition, vaccinated;

            std::cout << "Enter your age: ";
            std::cin >> age;
            std::cin.ignore();

            std::cout << "Enter your gender (male/female): ";
            std::getline(std::cin, gender);

            std::cout << "Do you have any pre-existing conditions? (1 for yes, 0 for no): ";
            std::cin >> preExistingCondition;

            std::cout << "Are you vaccinated? (1 for yes, 0 for no): ";
            std::cin >> vaccinated;

            User user(age, gender, preExistingCondition, vaccinated);

            // Risk factor details
            std::string climate;
            int population, hygiene;

            std::cout << "Enter the climate (humid/dry/cold): ";
            std::cin >> climate;

            std::cout << "Enter the population in your area: ";
            std::cin >> population;

            std::cout << "Enter the hygiene level (1-100): ";
            std::cin >> hygiene;

            RiskFactor riskFactor(climate, population, hygiene);

            // Disease details
            std::string diseaseName, transmissionMethod;
            double transmissionProb;
            int severity;
            int diseaseType; // 1 for Virus, 2 for Bacteria

           
            std::cout << "\nInfluenza \n";
            std::cout << "Covid-19 \n";
            std::cout <<  "Faringitis \n";  
            std::cout << "Salmonella \n";
            std::cout << "Enter the name of the disease: ";
            std::cin.ignore();
            std::getline(std::cin, diseaseName);

        
            std::cout << "\nInfluenza - 0.38 \n";
            std::cout << "Covid-19 - 0.36 \n";
            std::cout << "Faringitis - 0.17 \n";  
            std::cout << "Salmonella -0.33 \n";
            std::cout << "Enter the transmission probability (0.0 - 1.0): ";
            std::cin >> transmissionProb;

            std::cout << "Enter the severity of the disease (1-10): ";
            std::cin >> severity;

            std::cout << "Enter the transmission method (e.g., airborne, contact): ";
            std::cin.ignore();
            std::getline(std::cin, transmissionMethod);

            std::cout << "\n Influenza - Virus \n";
            std::cout << "Covid-19 - Virus \n";
            std::cout <<  "Faringitis - Bacteria \n";  
            std::cout << "Salmonella - Bacteria \n";
            std::cout << "Is this a Virus (1) or Bacteria (2)? ";
            std::cin >> diseaseType;

            Disease* disease;
            if (diseaseType == 1) {
                double mutationRate;
                std::cout << "\nInfluenza - 0.0018 \n";
                std::cout << "Covid-19 - 0.000012 \n";
                std::cout <<  "Faringitis - 0.00007 \n";  
                std::cout << "Salmonella - 0.000045 \n";
                std::cout << "Enter the mutation rate of the virus (0.0 - 1.0): ";
                std::cin >> mutationRate;

                disease = new Virus(diseaseName, transmissionProb, severity, transmissionMethod, mutationRate);
            } else {
                bool antibioticResistance;
                std::cout << "Does the bacteria have antibiotic resistance? (1 for yes, 0 for no): ";
                std::cin >> antibioticResistance;

                disease = new Bacteria(diseaseName, transmissionProb, severity, transmissionMethod, antibioticResistance);
            }

            // Calculate risk
            RiskCalculator calculator(user, *disease, riskFactor);
            double calculatedRisk = calculator.calculateRisk();

            // Generate report
            Report report(user, *disease, riskFactor, calculatedRisk, 
                "Based on the input factors, your risk has been calculated.", 
                "Follow preventive measures like vaccination and improving hygiene.");

            // Display results
            std::cout << "\n===== Risk Calculation Report =====" << std::endl;
            std::cout << "Final Risk Probability: " << report.getFinal_Calculated_Probability() << std::endl;
            std::cout << "Summary: " << report.getSummary() << std::endl;
            std::cout << "Recommendations: " << report.getRecommendations() << std::endl;
            std::cout << "===================================" << std::endl;

            // Clean up memory
            delete disease;

        } else if (choice == 2) {
            std::cout << "Exiting the program. Stay safe and healthy!" << std::endl;
        } else {
            std::cout << "Invalid choice. Please select 1 or 2." << std::endl;
        }

    } while (choice != 2);

    return 0;
}
