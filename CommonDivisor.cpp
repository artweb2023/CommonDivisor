#include <iostream>
#include <vector>

std::vector<int> CommonDivisor(const std::vector<int>& nums)
{
	std::vector<int> divisors;
	auto minElement = *std::min(nums.begin(), nums.end());
	for (auto i = 2; i < minElement; ++i)
	{
		bool isFind = true;
		for (int j = 0; j < nums.size(); ++j)
		{
			if (nums[j] % i != 0)
			{
				isFind = false;
				break;
			}
		}
		if (isFind)
		{
			divisors.push_back(i);
		}
	}
	return divisors;
}

void PrintVector(std::vector<int> nums)
{
	for (auto n : nums)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> nums;
	int num;
	while (!std::cin.eof() && !std::cin.fail())
	{
		std::cin >> num;
		nums.push_back(num);
	}
	PrintVector(CommonDivisor(nums));
}

