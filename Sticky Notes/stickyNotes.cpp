#include<iostream>
#include<string>
#include<fstream>
#include<ctime>

/*
This is a c++ console progrm that lets the user add notes and save them for later
*/

using namespace std;
//maybe it's better to put the function prototypes here and implement them afther the main
//just to be more readable
bool searchInNamesFile(string target){
	ifstream fileInput(target+".txt");//try to open the file of the user
	return fileInput.is_open();// return if the tile is open or not , if open the the name is exist else is not
}
//typing mistake apeendValue -> appendValue
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
void addNewnote(string fullName){
//TODO write the function
	string note , finalNote;
	fullName+=".txt";
	getline(cin , note);
	time_t currnentTime = time(0);
	string now = ctime(&currnentTime);
	finalNote = now + "\n " + note;
	/*ofstream fileOutput;
	fileOutput.open(fullName+".txt");
	fileOutput << now << endl << note;
	fileOutput.close();*/
	
	append(fullName , finalNote);
	cout<<"Your note has been well received, 1 second while saving it ...\n"
		<<"Done!\n";
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
			cout<<"Great "<<firstName<<", now please enter your last name: ";
				cin>>lastName;
			cout<<"Done!\n";
			cout<<"Nice to meet you "<<firstName<<" "<<lastName<<endl<<endl;
			addNewUser(firstName,lastName);
			cout<<"<Click Enter to return to main menu>\n\n\n";

			break;
		case 2:
		{
			cout<<"Let's add a new note ...\n"
			<<"Please enter your full name first: <Enter First Name> <Enter Last Name>\n";
			cin>>firstName>>lastName;
			string fullName = firstName + " " + lastName;
			if(searchInNamesFile(fullName))
			{
				cout<<"Your record is found, I'm now opening your file ...\n"
					<<"Ready!\n"
					<<"Please enter your note:\n";
				string enter;
				getline(cin , enter);
				addNewnote(fullName);
			
				cout<<"<Click Enter to return to main menu>\n\n\n";

			}
			else 
				cout<<"Oh! Sorry the user name was not found, please check the name again and if this is your first time here,"
				<<"please go ahead and create a new user from the main menu ...\n";

		}
		break;
		case 3:
		break;
		case 4:
			return 0;
		break;
		
		default:
			break;
		}
		system("pause");
		system("cls");
	}
return 0;
}