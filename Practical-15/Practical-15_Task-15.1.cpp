#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// Creation of ofstream class object
	ofstream fout;

	string line;
	fout.open("sample.txt");
    cout << "Write -1 to end writing" << endl;
    cout << "Start writing: " << endl;
	while (fout) {
		getline(cin, line);
		// Press -1 to exit
		if (line == "-1")
			break;

		// Write line in file
		fout << line << endl;
	}
	fout.close();

	// Creation of ifstream class object to read the file
	ifstream fin;
	fin.open("sample.txt");

	while (fin) {
		getline(fin, line);
		cout << line << endl;
	}
	fin.close();

	return 0;
}
