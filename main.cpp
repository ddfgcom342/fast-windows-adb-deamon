#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	cout << "Starting scanner..." << endl;
	system("adb.exe devices > log.info");
	cout << "End of work!" << endl;
	
	return 0;
}
