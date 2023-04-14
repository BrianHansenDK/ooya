#include <vector>

class Profile {
  private:
  std::string name;
  int age;
  std::string city, country, pronouns;
  std::vector<std::string> hobbies;
  public:
  Profile(std::string i_name, int i_age, std::string i_city, std::string i_country, std::string i_pronouns = "they/them");

  std::string view_profile();
  void add_hobby(std::string new_hobby);
};
