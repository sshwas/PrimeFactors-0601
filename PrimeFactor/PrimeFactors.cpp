#include <vector>

using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int number)
	{
		vector<int> result = {};
		if (number == 2)
		{
			result.push_back(2);
		}
		if (number == 3)
		{
			result.push_back(3);
		}
		return result;
	}
};
