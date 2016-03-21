#include <vector>
#include <iostream>

int main()
{
  int num_lights;
  std::cin >> num_lights;

  std::vector<int> input;
  for (int start, end; std::cin >> start >> end; )
  {
    if (start > end) std::swap(start, end);
    input.push_back(start);
    input.push_back(end + 1);
  }

  std::sort(input.begin(), input.end());

  int total = 0;
  for (std::vector<int>::size_type i = 1; i < input.size(); i += 2)
    total += input[i] - input[i - 1];

  std::cout << total << std::endl;
}
