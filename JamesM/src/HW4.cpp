

#include <iostream>
void myfunc() {
	int myval = 100;
	int myval2 = 200;
	{
		int myval = 1000;
		myval2 = 2000;
		std::cout << myval << " " << myval2 << std::endl;// (1)
		{
			int myval = 3000;
			myval2 = 4000;
			std::cout << myval << " " << myval2 << std::endl;// (2)
			{
				int myval = 7000;
				int myval2 = 8000;
				std::cout << myval << " " << myval2 << std::endl;// (3)
			}
			std::cout << myval << " " << myval2 << std::endl;// (4)
		}
		std::cout << myval << " " << myval2 << std::endl;// (5)
	}
}
int main() {
	myfunc();
}

/*	1)  sum: 100
		sum: 50
		sum: 350
		sum: 50


	2)	1)	1000 2000
		2)	3000 4000
		3)	7000 8000
		4)	3000 4000
		5)	1000 4000


	





*/