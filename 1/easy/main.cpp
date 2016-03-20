#include <iostream>
#include <fstream>
#include <string>

std::string ask_prompt(const std::string& prompt)
{
  std::cout << prompt << " ";

  std::string val;
  std::cin >> val;
  return val;
}

int main()
{
  const auto real_name = ask_prompt("What is your name?"),
                   age = ask_prompt("How old are you?"),
           reddit_name = ask_prompt("What is your reddit username?");

  std::cout << "your name is " << real_name << ", " <<
               "you are " << age << " years old, " <<
               "and your username is " << reddit_name << std::endl;

  std::ofstream out{"log.txt"};
  out << real_name << "\n" << age << "\n" << reddit_name << std::endl;
}
