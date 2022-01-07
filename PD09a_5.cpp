#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double z, zsumm = 0, zcount = 0, zmin = 10, zmax = 0;
	for (double x = 0.8; x <= 19; x++)
	{
        double f = acos(0.05 * x);
		z = f * f * f;
		zcount++;
		zsumm += z;
		if (z < zmin) zmin = z;
		if (z > zmax) zmax = z;
        cout.width(5);
        cout << x << '\t' << z << endl;
	}
	cout << "Visu z vērtību skaits: " << zcount << endl;
	cout << "Visu z vērtību summa: " << zsumm << endl;
	cout << "Mazākā z vērtība: " << zmin << endl;
	cout << "Lielākā z vērtība: " << zmax;
	//system("pause");
	return 0;
}

