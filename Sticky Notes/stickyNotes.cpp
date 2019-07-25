#include<iostream>
#include<string>
#include<fstream>

using namespace std;

bool searchInNamesFile(string target){
	ifstream fileInput(target+".txt");//try to open the file of the user
	return fileInput.is_open();// return if the tile is open or not , if open the the name is exist else is not
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
	int choise;
	while(true){
		cout<<"Welcome to the brand new “Sticky Notes”!\n";
		cout<<"Here is the list of operation this program offers:\n";
		cout<<"1- Add new user\n";
		cout<<"2- Add new note\n";
		cout<<"3- View notes for a specific user\n";
		cout<<"4- Exit\n";
		cout<<"Enter your operation : ";
		cin>>choise;
		system("cls");
		string firstName,lastName;
		switch (choise){
		case 1:
			cout<<"Welcome aboard new user!\n";
			cout<<"Please let me know your first name: ";
			cin>>firstName;
			cout<<"Great <First Name>, now please enter your last name: ";
				cin>>lastName;
			cout<<"Done!\n";
			cout<<"Nice to meet you "<<firstName<<" "<<lastName<<endl<<endl;
			addNewUser(firstName,lastName);
			cout<<"<Click Enter to return to main menu>\n\n\n";

			break;
		case 2:
		break;
		case 3:
		break;
		case 4:
		break;
		
		default:
			break;
		}
		system("pause");
		system("cls");
	}
return 0;
}