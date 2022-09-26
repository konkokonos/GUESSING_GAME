#include<iostream>


using namespace std;

void guess_number(int choice)
{
	int random = rand() % 20;
	//cout<< "The number is: " << random <<endl;
	while(true)
	{
		int guess;
		cout<< "Please type your guessing number from 1 to 20! ";
		cin >> guess;
		if(guess == random)
		{
			cout<< "You win!!" << endl;
			break;
		}
		else
			cout<< "Try again!" << endl;
	}
}

void guess_name(string name)
{
	int guesses = 1;
	while(true)
	{
		string guess;
		cout<< "Please type your guessing name! ";
		cin >> guess;
		if(guess == name)
		{
			cout<< "You win with "<< guesses << " guesses!!" << endl;
			break;
		}
		else
		{
			cout<< "Try again!!" << endl;
			guesses +=1;
		}
	}
}

void menu()
{
	int choice;
	int sub_choice;
	string name="Kwnstantinos";
	do
	{
		cout<< "Please chose one option from the Menu(Options are 0 or 1)" << endl;
		cout<< "0. Quit" << endl << "1. Play Game" << endl;
		cin>> choice;
		switch(choice)
		{
			case 0:
				cout<< "You chose to Quit, see you next time! " <<endl;
				break;
			case 1:
				cout<< " LETS PLAY " <<endl;
				cout << "You want to guess "<<endl << "3. A number"<< endl << "4. my name" <<endl;
				cin >> sub_choice;
				if( sub_choice == 3 )
					guess_number(choice);
				else if( sub_choice == 4 )
					guess_name(name);
				break;
		}		
	}
	while(choice != 0);
}

int main()
{
	srand(time(NULL));
	
	cout<< "----------Let's play a guessing Game----------"<< endl;
	menu();	
}
