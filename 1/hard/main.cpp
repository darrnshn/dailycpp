#include <iostream>

char ask_for_guess(int x)
{
  std::cout << "Is your number " << x << "? yes (=), too high (>), too low (<): ";
  char opt;
  std::cin >> opt;
  return opt;
}

int main()
{
  for (int lo = 1, hi = 100, guesses = 0; ; ++guesses)
  {
    const int mid = lo + (hi - lo) / 2;
    const auto result = ask_for_guess(mid);

    if (result == '=')
    {
      std::cout << "Won in " << guesses + 1 << " guesses" << std::endl;
      break;
    }
    else if (result == '<')
      lo = mid + 1;
    else if (result == '>')
      hi = mid - 1;
  }
}
