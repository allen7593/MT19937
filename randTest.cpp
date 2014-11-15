#include <iostream>
#include <random>

using namespace std;

int main()
{
	std::mt19937 mt(1234554321);

	for(int i=0;i<15;i++)
	cout<<mt()<<endl;

	return 0;
}
