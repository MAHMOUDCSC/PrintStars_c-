

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int hight;
	char star = '*';
	cin >> hight;
	int count = 0;
	int count2 = 0;
	for (int i = 1; i <= hight; i++) {
		
		if (i % 2 == 0) {
			
			for (int j = 1; j <= ((hight / 2)+count); j++) {
				cout << star;
			}
			count++;
			cout << "\n";

		}
		else {
		
			for (int j = 1; j <=(hight+count2); j++) {
				cout << star;
			}
			count2++;
			cout << "\n";

		}
	}


	return 0;
}

	