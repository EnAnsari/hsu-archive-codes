#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream file ("./statusroom.txt",ios::in);
	for (size_t i=1; i<=424; i++)
	{
		file << i << "\t" << 1 << endl;
	}
	file.close();
return 0;
}
