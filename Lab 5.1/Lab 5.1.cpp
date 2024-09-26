#include <iostream>

using namespace std;

int main() {

	 int sum = 0, sum2 = 0;
	
	 for (int i = 1; i <= 100; i++){
		
		 sum += i * i;
	}
	 for (int i = 2; i <= 100; i++) {
		 if (i % 2 != 0) {

		 }

		 else sum2 += i;
	}

	 cout << "The sum of all even numbers from 2 to 100 is " << sum2 << endl;
	 
	 cout << "The sum of square numbers from 1 to 100 is: " << sum << endl;
	
	 return 0;
}