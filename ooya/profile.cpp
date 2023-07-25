#include <iostream>
#include <vector>
#include "profile.hpp"

std::string Profile::view_profile(void) {
    std::string retVal = "Name: " + name + "\nAge: " + std::to_string(age) + "\nCity: " + city + "\nCountry: " + country + "\nSex: " + sex + "\nHobbies: ";
    int i;
    for (i = 0; i < hobbies.size() - 1; ++i)
        retVal += hobbies[i] + ", ";
    retVal += hobbies[i] + '\n';
    return retVal;
}

void Profile::add_hobby(std::string new_hobby) {
    hobbies.push_back(new_hobby);
}