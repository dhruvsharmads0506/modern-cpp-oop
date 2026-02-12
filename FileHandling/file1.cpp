#include<iostream>
#include<fstream>
using namespace std;



int main() {
// file open
ofstream fout;
fout.open("zoom.txt");
// if file present it open it otherwise it create the file

// write data

fout<<"Hello India";

// close file
fout.close();// Resources release kar pana




}
