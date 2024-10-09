/*
open the source
open the target 
try to get a char from the source
while not at the end of the source
	if the source char is "#"
		get another char
			if that char is "N"
				get another char
			if that char is "#" 
				write the selected name
			else 
				write "#N" and the chars
		else 
			write "#" and write that char
	else
		write chars from the source to target
close source
close target
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main() {
	ifstream ifs("template.txt"); //should error check this
	ofstream ofs("letter.txt"); // should error check this

	string person;
	char achar = '\0';
	
	cout << "WHATS UR NAME?? : ";

	cin >> person;

	ifs.get(achar);

	while (!ifs.eof() && ifs.fail()) {
		if (achar == '#') {
			ifs.get(achar);
			
			if (achar == 'N' && !ifs.eof() && !ifs.fail()) {
				ifs.get(achar);
			} 
				if (achar == '#' && !ifs.eof() && !ifs.fail()) {
					ofs << person;
				}
				else {
					ofs << '#N' << achar;
				}

		}//if
	} //while 

	ifs.close();
	ofs.close();
	return 0;
}