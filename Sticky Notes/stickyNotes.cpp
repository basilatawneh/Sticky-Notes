#include<iostream>
#include<string>
#include<fstream>

using namespace std;

bool searchInNamesFile(string target){
	ifstream fileInput;
	fileInput.open("names.txt");
	string name;
	bool isFound=false;

	while(getline(fileInput,name)){
		if(target==name){
			isFound=true;
			break;
		}
	}
	fileInput.close();
	return isFound;
}

void addNewUser(string firstName,string secondName){

string fullName=firstName+" "+secondName;
bool isFound=searchInNamesFile(fullName);

if(!isFound){
	ofstream fileOutput;
	fileOutput.open("names.txt", ios::app);
	fileOutput<<fullName<<endl;
	fileOutput.close();
	fileOutput.open(fullName+".txt");
	fileOutput<<"";
	fileOutput.close();
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