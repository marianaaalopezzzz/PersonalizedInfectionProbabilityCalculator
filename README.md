# PersonalizedInfectionProbabilityCalculator
The main goal of our project is that users understand their risk levels for many transmissible diseases based on personal and environmental factors. Users will input their specific details such as age, gender, and any pre-existing conditions, taking into consideration environmental conditions and the disease type to receive a risk estimation for the infection. This tool will help users to know their risk to contract a disease and take more hygienic measures.

To estimate the infection risk i will use a foundational formula that incorparates the key attributes from the user, enviromental foctors, and disease characteristics. 

Risk Calculator = (user) * (risk factor) * (disease) 

Where:  
user = (age + preexistng_condtions - vaccines) 

risk factor = (climate + population + hygene) 

disease = (trans_probability + severity + trans_method + mutation + antibiotic_resietance)


<img width="820" alt="Captura de pantalla 2024-11-23 a la(s) 2 03 09 p m" src="https://github.com/user-attachments/assets/218a48c2-8ef1-4491-99e4-19ac767bf29b">


The main five objects and the subclasses that we will use to calculate de infection risk. 
User Class: stores personal information that will affect the infection risk
•	Attributes: 
a)	age 
b)	gender
c)	pre-existing conditions
d)	vaccines

•	Methods: 
a)	User (int, string, bool, bool) --- this initializes user details
b)	getAge()
c)	getGender()
d)	hasPre_Existing_Cond()
e)	hasVaccines()

Disease Class: Defines essential properties that will impact its spread
•	Attributes: 
a)	name
b)	transmission_prob
c)	severity
d)	transmission_method

•	Methods: 
a)	Disease(name, transmission_prob, severity, transmission_method) --- initializes disease details 
b)	getName()
c)	getTransmission_Prob()
d)	getSeverity()
e)	getTransmission_method()

Bacteria subclass: Bacterial disease that is an extending form the Disease class by inheritance
•	Attributes:
a)	Antibiotic resitance

•	Methods: 
a)	Bacteria(name, transmission_prob, severity, transmission_method, antibiotic_resistance) --- initialize the bacteria with specific details 
b)	hasAntibioticResistance() 

Virus subclass: Adds virus-specific attributes and methods using also information from the disease class by inheritance 
•	Attributes:
a)	Mutation rate

•	Methods: 
a)	Virus(name, transmission_prob, severity, transmission_method, mutation, antiviral_resistance) 
b)	getMutationRate()

RiskFactor Class: Store factors that will influence the disease transmission in a environment 
•	Attributes:
a)	Climate
b)	Population
c)	hygiene level

•	Methods: 
a)	riskFactor(climate, population, hygene)
b)	getClimate()
c)	getPopulation()
d)	getHygiene_Level()

RiskCalculator Class: Calculates infection risk using User, Disease and RiskFactor by composition
•	Attributes
a)	baseRisk

•	Methods: 
a)	RiskCalculator(User, Disease, RiskFactor) --- calculates the risk based on user, disease, and riskFactor
b)	getBaseRisk()
c)	calculateRisk() --- initialize base risk 

Report Class: Summarizes the risk calculation and give recommendations by composition
•	Attributes:
a)	final_calculated_probability
b)	summary
c)	recommendations

•	Methods: 
a)	Report(User, Disease, RiskFactor, RiskCalculator, probability, summary, recommendations) --- initialize the report with the final probability
b)	getFinal_Calculated_Probability(), 
c)	getSummary()
d)	getRecommendations()



