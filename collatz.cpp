#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n = atoi(argv[1]);

	while( true ) {

        cout<<n<<" ";          

        if(n == 1) break;

		if (n & 1)
		{
			n = 3 * n + 1;

		} else {

			n = n / 2;
		}	

	}
	
	return 0;
}
