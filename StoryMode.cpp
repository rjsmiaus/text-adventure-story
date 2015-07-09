#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

void leftTunnel(int userChoice, char Continue);
void rightTunnel(int userChoice, char Continue);
void spiderCombat(int userChoice, char Continue);
void spiderTurn(int userChoice, char Continue);
void userTurn(int userChoice, char Continue);
void caveStory(int userChoice, char Continue);
void deathDoor();
void endStory();
void lavaDoor(int userChoice, char Continue);
void ragneonFight(int userChoice, char Continue);

int playerHealth;
int spiderAtk;
int spiderHealth;
int playerAtk;
int armor;
bool userDeath = false;


int main()
{
	char Continue;
	srand(time(NULL));
	string gender;
	int charGender;
	string userName;
	char gameStart;
	cout << "What is your name?" << endl;
	cin >> userName;

	cout << userName << ", what is your gender?" << endl;
	cout << "1) Male" << endl;
	cout << "2) Female" << endl;
	cin >> charGender;
	if (charGender == 1)
	{
		gender = "Male";
	}
	if (charGender == 2)
	{
		gender = "Female";
	}
	else
	{
		gender = "Genderless";
	}
	cout << "With this information, you may begin your journey." << endl;
	cout << "Start?   y/n" << endl;
	cin >> gameStart;
	switch (gameStart)
	{
	case 'y':
		cout << "Begin" << endl;
		break;
	case 'n':
		cout << "Goodbye" << endl;
		return 0;
		break;
	default:
		cout << "That is not an option" << endl;
		return 0;
		break;
	}
	cout << "An artificial voice, female: 'Project = XL-347. Gender = " << gender << "." << endl;
	cout << "Initiate = simulation.'" << endl;
	cin >> Continue;

	cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << endl;
	cin >> Continue;

	cout << "You wake to darkness. You feel stone, damp and smooth. You stand, naked but" << endl;
	cout << "for ragged clothes." << endl;
	cin >> Continue;

	cout << "As your eyes adjust to the dark, you notice your placement in a circular" << endl;
	cout << "cave." << endl;
	cin >> Continue;

	cout << "There are two tunnels that penetrate the otherwise smooth stone." << endl;
	cin >> Continue;

	cout << "Covering the left tunnel in detailed design are webs, and a lightless" << endl;
	cout << "void of darkness." << endl;
	cin >> Continue;

	cout << "To the right is a clear tunnel with nought but few cobwebs, you see dim light." << endl;
	cin >> Continue;

	cout << "Where do you proceed, " << userName << "?" << endl;
	cout << "1) The Left Tunnel" << endl;
	cout << "2) The Right Tunnel" << endl;
	int userChoice;

	cin >> userChoice;
	if (userChoice == 1){
		leftTunnel(userChoice, Continue);
		
	return 0;
	}
	if (userChoice == 2){
		rightTunnel(userChoice, Continue);
	}

	return 0;
}
void leftTunnel( int userChoice, char Continue){
	cout << "The webs part at your touch, as if they want you to continue." << endl;
	cin >> Continue;

	cout << "The slow progress at which you proceed leaves you frustrated, and the webs only ";
	cout << "grow larger around you." << endl;
	cin >> Continue;

	cout << "Without light to guide your steps, you trip over something, and the sound echoes ";
	cout << "throughout the cave " << endl;
	cin >> Continue;

	cout << "Your heart jumps in your throat as the web shakes, vibrating from some touch far ";
	cout << "away." << endl;
	cin >> Continue;

	cout << "As you stand back up, you feel a wooden box, with what seems leather armor and a ";
	cout << "steel sword inside." << endl;
	cin >> Continue;

	cout << "(1) Do you take the weapon and don the armor? or (2) run back to the cave opening?" << endl;
	cin >> userChoice;
	if (userChoice == 2)
	{
		cout << "In your haste, you trip over the box again, and fall in to dense webbing, ";
		cout << "feeling trapped." << endl;
		cin >> Continue;

		cout << "You feel a sting in your neck. Your entire body goes numb." << endl;
		cout << "The cold dark fades to nothing. . ." << endl;
		cin >> Continue;

		cout << "You have died.";
		exit(0);
	}
	if (userChoice == 1)
	{
		cout << "You don the armor and equip the sword." << endl;
		cin >> Continue;

		cout << "The webs are vibrating violently by now, sounds grow from the tunnel." << endl;
		cin >> Continue;

		cout << "Suddenly, the sounds and the shaking stops. The tunnel grows colder, ";
		cout << "and an evil chill runs down your spine." << endl;
		cin >> Continue;

		cout << "You look up. Bright breen eyes stare back at you, and a high-pitched hiss ";
		cout << "pierces your ears as the giant spider jumps on you." << endl;
		cin >> Continue;

		cout << " - - Combat Initiated - - " << endl;
		cin >> Continue;

		spiderCombat(userChoice, Continue);
		}



	}
void rightTunnel( int userChoice, char Continue){
	cout << "Brushing away a few webs, you proceed through the right tunnel." << endl;
	cin >> Continue;
	cout << "The air warms as you proceed, and the light grows brighter." << endl;
	cin >> Continue;
	cout << "After a few minutes of seemingly aimless walking, the tunnel opens " << endl;
	cin >> Continue;
	cout << "into a very bright room. Alas, the light of day is not what warms the room." << endl;
	cin >> Continue;
	cout << "Lava pops and sizzles out of cracks in the wall, forming a pool in the middle." << endl;
	cin >> Continue;
	cout << "You hear deep laughter that echoes and bounces off the walls." << endl;
	cin >> Continue;
	cout << "The opening to the room closes shut as a wall of stone falls down." << endl;
	cin >> Continue;
	cout << "The pool of lava starts to fill, just a few feet away from you." << endl;
	cin >> Continue;
	cout << "In panic, you look around the room, trying to find an escape." << endl;
	cin >> Continue;
	cout << "On the other side of the lava pool, you see a door, although it may be locked." << endl;
	cin >> Continue;
	cout << "Do you try to reach the door (1) or try to push away the wall of stone (2)?" << endl;
	cin >> userChoice;
	switch (userChoice){
	case 1:
		lavaDoor(userChoice, Continue);
		break;
	case 2:
		deathDoor();
		break;
	default:
		cout << "You stand frozen in fear as the lava inches closer to you." << endl;
		cin >> Continue;
		cout << "Your end ccomes slowly, and is not painless" << endl;
		cin >> Continue;
		exit(0);
	}
}
void spiderCombat(int userChoice, char Continue){

	armor = 5;
	spiderAtk = rand() % 5 + 10;
	playerHealth = 30 + armor;
	spiderHealth = 15;


	cout << "The spider bites you for " << spiderAtk << " damage." << endl;
	playerHealth = playerHealth - spiderAtk;
	cout << "You are left with " << playerHealth << " health." << endl;
	while (userDeath != true){
		userTurn(userChoice, Continue);
		spiderTurn(userChoice, Continue);
	}
}
void userTurn(int userChoice, char Continue){
	int swordAtk1[3] = { 6, 8, 0 };
	int atkChance[3] = { 90, 80, 100 };
	int atkRoll = rand() % 100;

	while (userDeath != true){
		cout << "How do you respond?" << endl;
		cout << "1) Jab the sword towards the spider's face" << endl;
		cout << "2) Slash at the spider's moving legs" << endl;
		cout << "3) Run away" << endl;
		cin >> userChoice;

		switch (userChoice){
		case 1:

			cout << "You jab your sword at the spider's deformed face" << endl;
			if (atkChance[userChoice - 1] > atkRoll)
			{
				cout << "Your sword cuts into his face" << endl;
				spiderHealth = spiderHealth - swordAtk1[userChoice - 1];
			}
			else
			{
				cout << "You miss!" << endl;
			}
			break;

		case 2:
			cout << "You slash with your sword to cut at the spider's legs." << endl;
			if (atkChance[userChoice - 1] > atkRoll)
			{
				cout << "Some of his legs are now shorter." << endl;
				spiderHealth = spiderHealth - swordAtk1[userChoice - 1];
			}
			else
			{
				cout << "You miss!" << endl;
			}
			break;

		case 3:
			cout << "You run away, tripping and falling on your head." << endl;
			cout << "You don't wake up. . ." << endl;
			return;
			break;

		default:
			cout << "That is not an option, try again." << endl;
			break;
		}
		if (spiderHealth <= 0){
			caveStory(userChoice, Continue);
			break;
		}
		if (spiderHealth > 0){
			spiderTurn(userChoice, Continue);
		}
	}
	cout << "The spider knocks you unconscious, and you don't wake up." << endl;
	exit(0);
}
void spiderTurn(int userChoice, char Continue){
	int spiderAtk[3] = { 6, 8, 11 };
	int atkChance[3] = { 100, 86, 75 };
	
	int spiderChoice = rand() % 3;
	int atkRoll = rand() % 100;

	switch (spiderChoice){
	case 0:
		cout << "The spider rams you into the wall, dealing " << spiderAtk[spiderChoice] << " damage." << endl;
		playerHealth = playerHealth - spiderAtk[spiderChoice];
		cout << "You now have " << playerHealth << "." << endl;
		break;
	case 1:
		cout << "The spider sinks its sharp teeth into your arm, dealing " << spiderAtk[spiderChoice] << " damage." << endl;
		playerHealth = playerHealth - spiderAtk[spiderChoice];
		cout << "You now have " << playerHealth << "." << endl;
		break;
	case 2:
		cout << "You are knocked in to a sticky group of webbing, and the spider ravages ";
		cout << "you while you are stuck, dealing " << spiderAtk[spiderChoice] << " damage." << endl;
		playerHealth = playerHealth - spiderAtk[spiderChoice];
		cout << "You now have " << playerHealth << "." << endl;
		break;
	}
		if (playerHealth <= 0){
			userDeath = true;
			userTurn(userChoice, Continue);
		}
		else{
			userTurn(userChoice, Continue);
		}
}
void caveStory(int userChoice, char Continue){
	cout << "The spider screeches one last time, and curls up as it dies." << endl;
	cout << "Bloody and tired, you stagger back into some more webs, " << endl;
	cout << "and rest as you reflect on this first encounter." << endl;
	exit(0);
}
void deathDoor(){
	cout << "What are you thinking? The wall of stone doesn't even budge, " << endl;
	cout << "and you end up a very warm corpse." << endl;
	endStory();
}
void lavaDoor(int userChoice, char Continue){
	cout << "After a quick run, you leap over the lava and..." << endl;
	cin >> Continue;
	cout << "The heat intesifies as you land safely on the other side of the lava pool." << endl;
	cin >> Continue;
	cout << "However it is still growing; you must get out quickly." << endl;
	cin >> Continue;
	cout << "Pushing open the door, you run through and immediately turn around to close it." << endl;
	cin >> Continue;
	cout << "Safe. The door will stay closed and you now have time to check your surroundings." << endl;
	cin >> Continue;
	cout << "The room you find yourself in feels very cold compared to the last one." << endl;
	cin >> Continue;
	cout << "Torches flicker and cast shadows across the floor, illuminating the otherwise dark walls." << endl;
	cin >> Continue; 
	cout << "Completely stone, as before, however it is bare save a single chair upon steps at the end of the room" << endl;
	cin >> Continue;
	cout << "The chair is very regal, made of gold and jewels, seeming a throne in your eyes." << endl;
	cin >> Continue;
	cout << "There are no doors but your entrance, and the room is more of a hallway than a full area." << endl;
	cin >> Continue;

	cout << "With little to do, there leaves you but two options:" << endl;
	cout << "1) Sit upon the golden throne." << endl;
	cout << "2) Inspect the room first, looking at the throne and behind it." << endl;
	cin >> userChoice;

	if (userChoice == 1){
		cout << "The voice from the previous room strikes against the walls. . ." << endl;
		cin >> Continue;
		cout << " 'You have touched something you should not have, mortal.' The deep voice roars, infused with venom." << endl;
		cin >> Continue;
		cout << " 'My throne is no toy! Your ignorance will be your undoing!' " << endl;
		cin >> Continue;
		cout << " 'I am Ragneon, lord of fire! And I will not accept this foolishness!' " << endl;
		cin >> Continue;
		cout << "The torches' flames go wild, growing to cover the ceiling and washing you in waves of heat." << endl;
		cin >> Continue;
		cout << "You struggle to get up, but some force knocks you to the ground, and you find it impossible to stand." << endl;
		cin >> Continue;
		cout << "By now the fire of the torches have left their stands and are collecting in the middle of the room." << endl;
		cin >> Continue;
		cout << "They form the shape of a man, near 8 feet tall. An elemental lord stands before you, holding a massive mace and chain." << endl;
		cin >> Continue;
		cout << " 'Your end will be simple. However, none shall say I have no honor." << endl;
		cin >> Continue;
		cout << "Fire shoots out of the elemental's arms, closing together on the ground to form a sword-like mass." << endl;
		cin >> Continue;
		cout << "Suddenly light pours out of the sword and fills the room, blinding you." << endl;
		cin >> Continue;
		cout << "Through the light, you feel the pressure released from you and a sword appears in your hand." << endl;
		cin >> Continue;
		cout << "As sudden as it appeared, the light is gone, replaced by the sight of a huge mace rushing at your face." << endl;
		cin >> Continue;
		cout << " - - Combat Initiated - - " << endl;
		cin >> Continue;
		ragneonFight(userChoice, Continue);

	}
}
void ragneonFight(int userChoice, char Continue){

	cout << "With the mace-chain flying at your face, what is your reaction?" << endl;
	cout << "1) Block the weapon with your sword." << endl;
	cout << "2) Jump out of the way." << endl;

	cin >> userChoice;
	if (userChoice == 1){
		cout << "The mace hits your sword with a sharp TWANG! and bounces away" << endl;
	}
	if (userChoice == 2){
		cout << "Jumping away, the mace flies just centimeters from your face" << endl;
	}
	else {
		cout << "You do nothing, and the mace hits you square in the face, crushing your skull and killing you instantly" << endl;
		exit(0);
	}

}
void endStory(){
	exit;
}