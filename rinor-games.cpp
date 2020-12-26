#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <istream>
#include <stdlib.h>
#include <string.h>
#include <cmath>
using namespace std;
// the game stuff

int factorial(int num1) {
	if (num1==1) {
		return 1;
	}
	else {
		return num1 * factorial(num1-1);
	}
}
struct Player {
	string charactername;

	Player(string aCharactername) {
		charactername = aCharactername;
	}

};

struct Weapon {
	int sword;
	Weapon(int aSword) {
	sword = aSword;
	}

};

void weapons1() {
	cout << "\a1 - Demon Sword" << endl;
	cout << "2 - Murasame" << endl;
	cout << "3 - Double-edged Tsurugi" << endl;
	cout << "More swords coming soon!" << endl;
}

void weapons2() {
	cout << "\a1 - Staff of time" << endl;
	cout << "2 - Star rod" << endl;
	cout << "3 - Feroce" << endl;
}

string charname;

void classes() {
 
 
 cout << "\aMy simple game\n";
//string charname;
  cout << "What is the name of your character: ";
  cin >> charname;
  Player mychar(charname);
  int choice;
  bool quit = false;
  while(!quit) {
  cout << "\nClasses - " << endl;
  cout << "1 - Warrior" << endl;
  cout << "2 - Magician" << endl;
  cout << "3 - Assassin" << endl;
  cout << "4 - Custom" << endl;
  cout << "Choose your class : ";
  cin >> choice;
  switch(choice){
  case 1:
	  cout << "\nWarrior - strong, brave and spiritful fighter that fears no one!" << endl << endl;
  break;
  case 2:
	  cout << "\nMagician - magic is your friend, your powers depend on your knowledge!" << endl << endl;
  break;
  case 3:
	  cout << "\nAssassin - sneak into your enemy's place and stealth kill every single one of them!" << endl << endl;
  case 4:
	  cout << "\nCustom - make your own fighting style, creativity is all it takes!" << endl << endl;
  break;
  default:
  cout << "\nInvalid choice!" << endl;
  quit = true;
  break;
  }
  break;
 }

  if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
	  int chooseweapon;
	cout << "Okay " << mychar.charactername << "! Now choose your weapon!" << endl;
if (choice == 1) {
	weapons1();
	} else if (choice == 2) {
		weapons2();
	}
	cout << "Weapon : ";
	cin >> chooseweapon;
	Weapon weapon(chooseweapon);
	while (!quit) {

	if (choice == 1) {
	if (chooseweapon == 1) {
   system("cls");
   cout << "Demon Sword | This katana was held by the hero Rin Okumura to keep his demon powers sealed away. Some say that no one has reached it's full potential, not even master Rin!" << endl;
	   cout << "Attack : 112 | Speed : Medium | Ability : Causes burning flames" << endl;
	   cout << "1 - Accept / Any other key - Back" << endl;
	   system("pause");
		} else if (chooseweapon == 2) {
			system("cls");
			cout << "Murasame | This is a medium sized sword, but with the ability to tranform into a short or long sword. Not many masters can wield this sword, due to its complexity. Very few know its full power, and they say it's overwhelming to hold" << endl;
		cout << "Attack : 84 | Speed : Very Fast | Ability : Can change its form" << endl;
		system("pause");
		} else if (chooseweapon == 3) {
			cout << "Double-edged Tsurugi | This is less a sword than a giant club made of iron. It can slice, but it's more likely to crush via sheer brute force. Guts is one of the only people capable of wielding it, as most others buckle under the weight. Not everyone can handle the power that comes with the epic Tsurugi" << endl;
	   cout << "Attack : 152 | Speed : Slow | Ability : Back track damage" << endl;
	   system("pause");
		}
		} else if (choice == 2){
			if (chooseweapon == 1) {
				system("cls");
			cout << "Staff of time | Many magicians underrate its power, some overrate it. This marvelous staff has the hardest spells to master, also, the wielder can travel through different places, but no one has not done that still. Those who underrate, do fear it, and those who overrate still can't use it!" << endl;
	   cout << "Attack : 92 | Speed : Fast | Ability : Teleport" << endl;
	   system("pause");
		} else if (chooseweapon == 2) {
				system("cls");
			 cout << "Star rod | Magic rod that serves as the power source for the Fountain of Dreams. When swung it fires a shooting star from the tip. Deadly as it seems, only gods had the courage to use it." << endl;
		 cout << "Attack : 170 | Speed : Slow | Ability : Can one-shot enemies" << endl;
		 system("pause");
			} else if (chooseweapon == 3) {
				system("cls");
				cout << "Feroce | An immensely powerful, black-bladed glove that is occasionally given to mortals by the immortal Daedric prankster, Clavicus Vile. It has the power to freeze anything, nearly. Can only pass from one mortal to another if the inheritor kills the former owner in single combat." << endl;
		 cout << "Attack : 120 | Speed : Medium | Ability : Freezes" << endl;
		 system("pause");
	}
   }
   quit = true;
   break;
  }
 }
}

void calcuF() {

   cout << "\t\t\t\t\aCalculator\n";
	cout << "Operators: + , - , * , / , ^(power), #(squareroot), !(factorial)\n\n";
	double num1, num2;
	char op;
	string calcuchoice;

	cout << "Enter first number: " << endl;
	while (!(cin >> num1)) {
	cout << "Must be a number: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	}
	do {
	cout << "Enter operator: " << endl;
	cin >> op;

	double result;
	if (op == '+') {
		cout << "Enter second number: " << endl;
		while (!(cin >> num2)) {
	cout << "Must be a number: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	}
		result = num1 + num2;
		//cout << "Result: " << result;
	} else if (op == '-') {
		cout << "Enter second number: " << endl;
		while (!(cin >> num2)) {
	cout << "Must be a number: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	}
		result = num1 - num2;
		//cout << "Result: " << result;
	} else if (op == '*') {
		cout << "Enter second number: " << endl;
		while (!(cin >> num2)) {
	cout << "Must be a number: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	}
		result = num1 * num2;
		//cout << "Result: " << result;
	} else if (op == '/') {
	  cout << "Enter second number: " << endl;
	  while (!(cin >> num2)) {
	cout << "Must be a number: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	}
		if (num2 == 0) {
			cout << "Division by zero!";
		}else {
			result = num1 / num2;
			//cout << "Result: " << result;
		}

	} else if (op == '!'){

		double fact = factorial(num1);
		result = fact;
		//cout << "Result: " << result;
	}else if (op == '^') {
		cout << "Enter exponent: " << endl;
		while (!(cin >> num2)) {
	cout << "Must be a number: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	}
		double power = pow(num1,num2);
		result = power;
		//cout << "Result: " << result;
	} else if (op == '#') {
		double squareroot = sqrt(num1);
		result = squareroot;
		//cout << "Result: " << result;
	} else {
		cout << "Invalid operator!";
	}
	cout << "Result: " << result << endl;
	num1 = result;
	cout << "Type any key to continue/ Type \"back\" to end" << endl;
	cin >> calcuchoice;
	} while (calcuchoice != "back");
}

void rpS() {
		cout << "\t\t\t\t\aRock\\Paper\\Scissors \n\n";

	  srand(time(NULL));

	cout << "1 - Rock" << endl;
	cout << "1 - Paper" << endl;
	cout << "1 - Scissors" << endl;
	int myChoice;
	cin >> myChoice;
	cout << "Enter your choice: " << myChoice << endl;

	int cpuChoice = (rand() % 3) + 1;

	if(myChoice == 1) {
		cout << "You chose Rock" << endl;
	}

	else if(myChoice == 2) {
		cout << "You chose Paper" << endl;
	}

	else if(myChoice == 3) {
		cout << "You chose Scissors" << endl;
	}

	else {
		cout << "Invalid choice" << endl;

}

  if(cpuChoice == 1)
	 {
	   cout << "Cpu chose Rock" << endl;
   }

  else if (cpuChoice == 2)
  {
	  cout << "Cpu chose Paper" << endl;
  }

 else if (cpuChoice == 3)
 {
	cout << "Cpu chose Scissors" << endl;
}

//Logic

   if(myChoice == cpuChoice) {
	   cout << "Its a tie!" << endl;
   }

  if(myChoice == 1) {
	  if(cpuChoice == 2) {
		cout << "You lose!" << endl;
	  }
	  else if(cpuChoice == 3) {
		  cout << "You win!" << endl;
	  }
  }

   if(myChoice == 2) {
	   if(cpuChoice == 1) {
		   cout << "You win!" << endl;
	   }

	   else if(cpuChoice == 3) {
		   cout << "You lose!" << endl;
	   }
   }

	if(myChoice == 3) {
		if(cpuChoice == 1) {
			cout << "You lose!" << endl;
		}

		else if(cpuChoice == 2) {
			cout << "You win!" << endl;
		}

	}
}

void luckyN(){

   cout << "\t\t\t\t\aGuessing game \n\n";

		srand(time(NULL));

	int secretNum = (rand() % 7) + 1;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	bool ooGuesses = false;

	while(secretNum != guess && !ooGuesses) {
		if(guessCount < guessLimit) {
			cout << "Enter guess: " << endl;
			cin >> guess;
			guessCount++;
		} else {
			ooGuesses = true;
		}
	}
	if(ooGuesses) {
		cout << "You lose!";
	} else {
		cout << "You win!";
	}
}

void snakeGame() {

	cout << "\t\t\t\t\aSnake game\n\n";

	char map[10][20] = {
		"###################",
		"#@  			#",
		"#				#",
		"#				#",
		"#				#",
		"#				#",
		"#				#",
		"#				#",
		"###################",
	};

	//int x = 1; position of 'x', allow when working
	//int y = 1; position of 'y' allow when working

	bool game_on = true;
	int display;
	while(game_on == true) {
		for(display = 0; display < 10; display++) {
	cout << map[display] << endl;
}  game_on = false;
	}
}

char tmap[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char currmarker;
int currplayer;
void Map() {
	
	cout << " " << tmap[0][0] << " | " << tmap[0][1] << " | " << tmap[0][2] << endl;
	cout << "-----------\n";
	cout << " " << tmap[1][0] << " | " << tmap[1][1] << " | " << tmap[1][2] << endl;
	cout << "-----------\n";
	cout << " " << tmap[2][0] << " | " << tmap[2][1] << " | " << tmap[2][2] << endl;
}

void placeMarker(int slot) {
	int row = slot / 3;
	int col;
	
	if(slot % 3 == 0) {
		row = row - 1;
		col = 2;
	}
	else col = (slot % 3) - 1;
	
	tmap[row][col] = currmarker;
}

int winner()
{
	for(int i = 0; i < 3; i++) {
		//f rows
		
		if (tmap[i][0] == tmap[i][1] && tmap[i][1] == tmap[i][2]) return currplayer;
   
	   //cols
	   if  (tmap[0][i] == tmap[1][i] && tmap[1][i] == tmap[2][i]) return currplayer;
	}
	 
	if (tmap[0][0] == tmap[1][1] && tmap[1][1] == tmap[2][2]) return currplayer;
	if (tmap[0][2] == tmap[1][1] && tmap[1][1] == tmap[2][0]) return currplayer;

   return 0;
}

void swap_p_and_m()
{
	if(currmarker == 'X') currmarker = 'O';
	else currmarker = 'X';
	
	if (currplayer == 1) currplayer = 2;
	else currplayer = 1;
}

void tgame() {
	cout << "P1 choose your marker: " << endl;
	char markerp1;
	cin >> markerp1;
	
	//Map();
	
	for (int i = 0; i < 9; i++) {
		cout << currplayer << " turn: " << endl;
		int slot;
		cin >> slot;
		
		placeMarker(slot);
		
		swap_p_and_m();
		Map();
	}
}
void tictactoe() {

	cout << "\t\t\t\t\aTic Tac Toe\n\n";

	tgame();
}

int main() {

  cout << "\t\t\tHello! Hope you enjoy this!" << endl;
   
  //asking for name
  string name;
  cout << "\aName: " << endl;
  getline(cin, name);

  //asking for age
  int age;
  cout << "\aHow old are you: " << endl;
  while (!(cin >> age)) {
	cout << "Must be a number: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
  }

  //asking for gender
  string gender;
	cout << "\aGender: " << endl;
	cin >> gender;

   system("cls");
  //the feature
  bool feature_on = true;
  int feature;
  char featureChoice;
  while (feature_on == true) {

  do {
  cout << "\t\t\t\t\aFeatures\\games" << endl;
  cout << "1 - Calculator" << endl;
  cout << "2 - Rock/Paper/Scissors" << endl;
  cout << "3 - Guessing game" << endl;
  cout << "4 - Snake game (unfinished)" << endl;
  cout << "5 - Tic Tac Toe (unfinished)" << endl;
  cout << "6 - First simple-game (unfinished)" << endl;
  cout << "7 - Quit" << endl;
  cout << "Choose a feature/game: " << endl;
  cin >> feature;
  switch (feature){
	  case 1:
	  system("cls");
	  calcuF();
	  cout << "\n\n1 - Back to menu / Any other key - Quit\n\n";
	  cin >> featureChoice;
	  system("cls");
 break;
	  case 2:
	  system("cls");
	  rpS();
	  cout << "\n\n1 - Back to menu / Any other key - Quit\n\n";
	  cin >> featureChoice;
	  system("cls");
 break;
	  case 3:
	  system("cls");
	  luckyN();
	  cout << "\n\n1 - Back to menu / Any other key - Quit\n\n";
	  cin >> featureChoice;
	  system("cls");
 break;
	  case 4:
	  system("cls");
	  snakeGame();
	  cout << "\n\n1 - Back to menu / Any other key - Quit\n\n";
	  cin >> featureChoice;
	  system("cls");
 break;
	  case 5:
	  system("cls");
	  tictactoe();
	  cout << "\n\n1 - Back to menu / Any other key - Quit\n\n";
	  cin >> featureChoice;
	  system("cls");
 break;
	  case 6:
	  system("cls");
	  classes();
	  cout << "\n1 - Back to menu / Any other key - Quit\n\n";
	  cin >> featureChoice;
 break;
	  case 7:
	  system("cls");
	  cout << "Thank you";
	  feature_on = false;
 break;
	  default:
	  system("cls");
	  cout << "\t\t\t\tInvalid feature";
	  cout << "\n1 - Back to menu / Any other key - Quit\n\n";
	  cin >> featureChoice;
 break;

 }
 system("cls");
 }while (featureChoice=='1');
 feature_on = false;
 }

 if (featureChoice != '1') {
	 cout << "\n\n\t\t\tThank you!" << endl;
 }
}
