#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
vector<int>arr(5);
cout<<"Enter Input : ";
for(int i=0;i<5;i++) {
    cin>>arr[i];
}
int n = arr.size();
//open file
ofstream fout;
fout.open("zero.txt");
fout<<"Orginal Data\n";
for(int i=0;i<n;i++) {
    fout<<arr[i]<<" ";
};


fout<<"\nSorted Data: \n ";
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++) {
    fout<<arr[i]<<" ";
};

fout.close();
}