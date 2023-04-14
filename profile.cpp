#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string i_name, int i_age, std::string i_city, std::string i_country, std::string i_pronouns)
  : name(i_name), age(i_age), city(i_city), country(i_country), pronouns(i_pronouns) {}

std::string Profile::view_profile() {
  std::string message = "Name: " + name;
  message += "\nAge: " + std::to_string(age);
  message +=  "\nCity: " + city;
  message += "\nCountry: " + country;
  message += "\nPronouns: " + pronouns;


  std::string hobby_str = "\nHobbies:\n";
  for (std::string hobby : hobbies)
    hobby_str += "-> " + hobby + "\n";

  return message + hobby_str;
}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}
