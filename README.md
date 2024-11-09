# PersonalizedInfectionProbabilityCalculator

The main goal of our project is that users understand their risk levels for many transmissible diseases based on personal and enviromental factors. Users will input their specific details such as age, gender, and any pre-existing conditios, taking into consideration environmental conditions and the disease type to receive a risk estimation for the infection. This tool will help users to make informed health desicions by showing them how their unique circumstances can inmpact their likelihood of infection. 

to estimate the infection risk i will use a foundational formula that incorparates the key attributes from the user, enviromental foctors, and disease characteristics. 
Risk Calculator = (user) * (risk factor) * (disease) 
where 
user = (age + preexistng_condtions - vaccines) 
risk factor = (climate + population + hygene) 
disease = (trans_probability + severity + trans_method + mutation + antibiotic_resietance)


The main five objects that we will use to calculate de infection risk. 
1. User. (the person using the calculator)
   The attributes will be:
   a) age
   b) gender
   c) an pre-existing health condition
   d) vaccines
2. Disease. (Characteristics of the disease)
   The atribbutes will be:
   a) name
   b) probality of transmission
   c) disease's severity
   d) Transmission Method
3. RiskFactor. (externsl and eviromental factors that will affect)
   The attributes will be:
   a) climate such as humid, dry, or cold
   b) number of peoble in the area
   c) hygene level
4. RiskCalculator. (final risk calculation (user, disease, and riskfactor))
   The atr¡tribute will be:
   a) the initial base risk
5. Report. (Displays the information clarly for the user)
   The attributes will be:
   a) final calculated probability
   b) summary of results with some recommendations. 
