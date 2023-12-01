#include <fstream>
#define CIFMAX 10
#define LGMAX 730
using namespace std;
int main()
{
	ifstream f("cifra1.in");
	int n, m;
	f >> n >> m;
	f.close();
	int c[CIFMAX], nc=0;
	while (n)
	{
		c[nc++] = n%10;
		n /= 10;
	}
	int s[LGMAX], lg=0;
	for (int i = nc-1; i >= 0; i--)
		for (int j = 1; j <= c[i]; j++)
			s[lg++] = c[i];
	ofstream g("cifra1.out");
	g << s[m-1];
	g.close();
	return 0;
}

