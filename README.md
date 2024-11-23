# PersonalizedInfectionProbabilityCalculator
The main goal of our project is that users understand their risk levels for many transmissible diseases based on personal and environmental factors. Users will input their specific details such as age, gender, and any pre-existing conditions, taking into consideration environmental conditions and the disease type to receive a risk estimation for the infection. This tool will help users to know their risk to contract a disease and take more hygienic measures.

To estimate the infection risk i will use a foundational formula that incorparates the key attributes from the user, enviromental foctors, and disease characteristics. 

Risk Calculator = (user) * (risk factor) * (disease) 

Where:  
user = (age + preexistng_condtions - vaccines) 

risk factor = (climate + population + hygene) 

disease = (trans_probability + severity + trans_method + mutation + antibiotic_resietance)


<img width="820" alt="Captura de pantalla 2024-11-23 a la(s) 2 03 09 p m" src="https://github.com/user-attachments/assets/218a48c2-8ef1-4491-99e4-19ac767bf29b">


The main five objects that we will use to calculate de infection risk. 
User Class
•	Attributes: age, gender, pre-existing conditions, vaccines
•	Methods: setAge(), setGender(), etc.
Disease Class
•	Attributes: name, transmission probability, severity, transmission method
•	Methods: setName(), setTransmissionProb(), displayInfo()
RiskFactor Class
•	Attributes: climate, population, hygiene level
•	Methods: setClimate(), setPopulation(), setHygieneLevel()
RiskCalculator Class
•	Attributes: user, disease, riskFactor, baseRisk
•	Methods: calculateRisk(), setBaseRisk(), etc.
Report Class
•	Attributes: finalCalculatedProbability, summary, recommendations
•	Methods: setFinalCalculatedProbability(), getSummary(), etc.
Bacteria and Virus Subclasses (derived from Disease)
•	Inheritance: Bacteria and Virus inherit from Disease, adding specific attributes (antibiotic resistance for Bacteria, mutation rate for Virus).

