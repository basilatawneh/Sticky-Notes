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
void append(string fileName,string apeendValue){
	ofstream fileOutput;
	fileOutput.open(fileName, ios::app);
	fileOutput<<apeendValue<<endl;
	fileOutput.close();
}
void addNewUser(string firstName,string secondName){

string fullName=firstName+" "+secondName;
bool isFound=searchInNamesFile(fullName);
if(!isFound){
	append("names.txt",fullName);
	ofstream fileOutput;
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