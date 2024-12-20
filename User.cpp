#include "user.h"

// Constructor 
User::User(int age, std::string gender, bool pre_existing_cond, bool vaccines)
    : age(age), gender(gender), pre_existing_cond(pre_existing_cond), vaccines(vaccines) {}

// Setters 
void User::setAge(int age) {this -> age = age; }
void User::setGender(std::string gender) {this -> gender= gender;}
void User::setPre_Existing_Cond(bool condition) {this -> pre_existing_cond = condition; }
void User::setVaccines(bool vaccinated) {this -> vaccines = vaccinated; }

//Getters 
int User::getAge() {return age; }
std::string User::getGender() {return gender; }
bool User::hasPre_Existing_Cond() {return pre_existing_cond; }
bool User::hasVaccines() { return vaccines; }
