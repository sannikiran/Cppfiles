#include <bits/stdc++.h>
using namespace std;
class Hostel
{
	char hostel_type;
	char hostel_name[10];
	int hostel_number;
	int room_number;

public:
	void add_hostel()
	{
		cout << "Add hostel details\n";
		cout << "1. Hostel Name\n2. Hostel Type\n3. Hostel Number\n4. Room number\n";
		cout << "Enter your choice: ";
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "Enter new Hostel name: ";
			cin >> hostel_name;
			break;
		case 2:
			cout << "Enter new Hostel type: ";
			cin >> hostel_type;
			break;
		case 3:
			cout << "Enter new Hostel number: ";
			cin >> hostel_number;
			break;
		case 4:
			cout << "Enter new room number: ";
			cin >> room_number;
			break;
		deafault:
			cout << "invalid input!! ";
			break;
		}
	}
};
class MMC : public Hostel
{
public:
	void getoption()
	{
		cout << "\n 1. Register a student ";
		cout << "\n 2. Menu for the  Hostel  ";
		cout << "\n 3. BHM Fess for the  Hostel  ";
		cout << "\n 4. Mess Member Committee" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			registeration();
			break;
		case 2:
			set_menu();
			break;
		case 3:
			bhm();
			break;
		case 4:
			add_mess_members();
			break;
		case 5:
			cout << "\n Invalid choice, Enter again " << endl;
			break;
		}
	
	}
	void registeration()
	{
		cout << "\n---Form to register student---\n";
		string name, username, password, rollno, father, Hostelnumber;
		cout << "\n Enter Name:";
		cin >> name;
		cout << "\n Enter Username:";
		cin >> username;
		cout << "\n Enter Password:";
		cin >> password;
		cout << "\n Enter rollno:";
		cin >> rollno;
		cout << "\n Enter father_name:-";
		cin >> father;
		cout << "\n Enter Hostelnumber:";
		cin >> Hostelnumber;
		cout << "\n student registered successfully " << endl;
		cout << endl;
		cout << "Here are the following details that u have mentioned :" << endl;
		cout << name << endl;
		cout << username << endl;
		cout << password << endl;
		cout << rollno << endl;
		cout << father << endl;
		cout << Hostelnumber << endl;
	}

	void set_menu()
	{
		cout << "Menu Details" << endl;
		int m;
		cin >> m;
		switch (m)
		{
		case 1:
			cout << "Monday"
				 << "::"
				 << " "
				 << "Breakfast:- Burger && Eggs/milk"
				 << " "
				 << "Lunch:- Pulaw"
				 << " "
				 << "Dinner:-Chicken/Paneer" << endl
				 << endl;
			break;
		case 2:
			cout << "Tuesday"
				 << "::"
				 << " "
				 << "Breakfast:-Puri-Sabji "
				 << " "
				 << "Lunch:- Rice-dal"
				 << " "
				 << "Dinner:-Chicken/Paneer" << endl
				 << endl;
			break;
		case 3:
			cout << "Wednesday"
				 << "::"
				 << " "
				 << "Breakfast:- Bhature"
				 << " "
				 << "Lunch:- Rice-dal-curd"
				 << " "
				 << "Dinner:-Chicken/Paneer" << endl
				 << endl;
			break;
		case 4:
			cout << "Thrusday"
				 << "::"
				 << " "
				 << "Breakfast:- Dosa"
				 << " "
				 << "Lunch:- Rice-dal"
				 << " "
				 << "Dinner:-Chicken/Paneer" << endl
				 << endl;
			break;
		case 5:
			cout << "Friday"
				 << "::"
				 << " "
				 << "Breakfast:- Bread"
				 << " "
				 << "Lunch:- Rice-chhole"
				 << " "
				 << "Dinner:-Chicken/Paneer" << endl
				 << endl;
			break;
		case 6:
			cout << "Saturday"
				 << "::"
				 << " "
				 << "Breakfast:- Bread"
				 << " "
				 << "Lunch:- kitchari"
				 << " "
				 << "Dinner:-Fish/Mushroom" << endl
				 << endl;
			break;
		default:
		case 7:
			cout << "Sunday_special"
				 << "::"
				 << " "
				 << "Breakfast:- Bread"
				 << " "
				 << "Lunch:- Rice-dal-curd"
				 << " "
				 << "Dinner:-Chicken/Paneer && Frooti" << endl
				 << endl;
			break;
		}
	}
	void bhm()
	{
		string name, father, semester, branch, hostel;
		long long int mobile_number;
		int registeration_number,  mess_advance, bhm_contribution, total_amount, fine;
		cout << "Enter Name:";
		cin >> name;
		cout << "\nEnter Father_Name:";
		cin >> father;
		cout << "\nEnter semester:";
		cin >> semester;
		cout << "\nEnter registeration_number:";
		cin >> registeration_number;
		cout << "\n Enter Branch:";
		cin >> branch;
		cout << "\n Enter Hostel_name:-";
		cin >> hostel;
		cout << "\n Enter Mobile_number:-";
		cin >> mobile_number;
		cout << "\n Enter mess_advance:-";
		cin >> mess_advance;
		cout << "\n Enter bhm-contribution:-";
		cin >> bhm_contribution;
		cout << "\n Enter total-amount"
			 << ":-" << mess_advance + bhm_contribution << endl;
		cout << "\n FINE!:-";
		cin >> fine;
		cout << endl;
		cout << "Details u have filled :" << endl;
		cout << name << endl;
		cout << father << endl;
		cout << semester << endl;
		cout << registeration_number << endl;
		cout << branch << endl;
		cout << hostel << endl;
		cout << mobile_number << endl;
		cout << mess_advance << endl;
		cout << bhm_contribution << endl;
		cout << fine << endl;
		cout << endl;
		cout << "THANK YOU!" << endl;
	}
	void add_mess_members()
	{
		string warden, prefect, assist_prefect;
		cout << "Warden name:-" << endl;
		cin >> warden;
		cout << "\nPrefect Name:-";
		cin >> prefect;
		cout << "\nAssistant Prefect Name:-";
		cin >> assist_prefect;
		cout << "\nOther mmc's members (number)-" << endl;
		int x;
		cin >> x;
		string mmc[x];
		for (int i = 0; i < x; i++)
		{
			cin >> mmc[i];
		}
	}
};
int main()
{
	// Hostel object;
	//  object.add_hostel();
	//  object.edit_details();
	MMC obj;
	// obj.add_mess_members();
	// obj.set_menu();
	//	obj.registeration();
	for (int i = 0; i < 3; i++)
	{
		/* code */
			obj.getoption();

	}
	
	

	cout << "\n";
}