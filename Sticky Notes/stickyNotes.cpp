#include<iostream>
#include<string>
#include<fstream>

using namespace std;

ifstream file;

void addNewUser(string firstName,string secondName){
//TODO write the function
ifstream fileInput;
fileInput.open("names.txt");
string name;
bool isFound=false;
string fullName=firstName+" "+secondName;
while(getline(fileInput,name)){
	if(fullName==name){
	isFound=true;
	break;
	}
}

}
void addNewnote(){
//TODO write the function

}
void ViewNotesForAUser(){
//TODO write the function
}
int main(){
//TODO combine the functions
return 0;
}