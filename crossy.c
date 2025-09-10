/**
------------------------------
Project Name: ICT_Project (1)
Author: ZHANG JASON ^_^ 4B 27
Date: 09/09/2025

Note:
- This code Licensed under the MIT License
- NO AI was used in this code segment
- I used C instead of Python because I love C <3
- Praise be Richarcd Stallman our lord
**/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int situation(){
	
	int cross;
	int sec;
	int rand_num;
	int data[5] = {0}; 
	/**
	 * 0 = Morality, 1 = crossed, 2 = obeyed, 3 = health (THIS COMMENT IS <em> IMPORTANT </em> )
	 * REMOVING REUNS THE RISK OF BEING HORRIBLY CONFUSED AT WTF WHAT HAPPENS LATER!! YOU HAVE BEEN WARNED
	 * -Sincerely,
	 *  A mentally stable person (trust me)
	 **/
	data[0] = 10;
	data[3] = 3;
	srand(time(NULL));

 	 printf("-- Situation 1: It's Raining D O G --\n");
	 printf("You are now chased by 100 rabbid dogs, the only way to save your life is by crossing a red light. Do you cross? \n");
	 printf("Traffic: Heavy \n");
	 printf("1 - Yes/0 - No ");
	 sec = 5;
	 rand_num = rand() % 4;
	
	 scanf("%d", &cross);

	 if(cross == 1){

		if(rand_num = 2){	 
		 	printf("--- \n");
			printf("Decision: CROSS \nMorality: -1 \n");
	 	 	printf("You successfully passed. Though the dogs scared you too much \n\n");
			data[3] -= 1;
		 	data[0] -= 1;
			data[1] += 1;
		} else{
			printf(" --- \n");
			printf("Decision: CROSS \nMorality: - 1\nHealth: -2 \n");
			printf("You got ran out, OUCH! At least you gave it a shot! \n\n");
			data[0] -= 1;
			data[1] += 1;
			data[3] -= 2;
		}

	 } else{

		 printf("--- \n");
		 printf("Decision: STAY \nMorality: + 1 \nHealth: -2 \n");
		 printf("The Dogs killed you. You really put morality over your survival huh? ... Pathetic\n\n");
		 data[0] += 0;
		 data[2] += 1;
		 data[3] -= 2;
	 }
	 
	 printf("Press Enter to continue...");
	 getchar();
	 getchar();
	 printf("\n");

	 printf("-- Situation 2: Million Dollar Move -- \n");
	 printf("Across the Road is a $1000000 (USD of course), if you cross now, you'll get it. Do you cross? \n");
	 printf("Traffic: Medium \n");
	 printf("1 - Yes /0 - No ");
	 rand_num = rand() % 3;

	 scanf("%d", &cross);       

	if(cross == 1){
	
		if(rand_num = 2){
			printf("--- \n");
			printf("Decision: CROSS \nMorality: - 2 \nWealth: + $1Million \n");
			printf("You got the Million Dollars, but you're injured, so you'll have to pay $900000 in medical billsi \n\n");
			data[0] -= 2;
			data[1] += 1;
		}else{
			printf(" --- \n");
			printf("Decision: CROSS \nMorality: - 1 \nHealth: - 1");
			printf("Oops Bad choice. You got hit by a car! You can't even survive a 1/3 chance? At least you tried to cross \n\n");
			data[0] -= 1;
			data[1] += 1;
			data[3] -= 1;
		}
	}else{
	
		printf("--- \n");
		printf("Decision: STAY \nMorality: + 3 \n");
		printf("No money for you, at least you have your life. \n\n");
		data[0] += 3;
		data[2] += 1;
	}
	
	 printf("Press Enter to continue...");
	 getchar();
	 getchar();
	 printf("\n");

	printf("-- Situation 3: Heaven's Gate(Drink the Koolaid --\n");
	printf("You are dead (presumably from the dogs), you are now standing before the gates of heaven. Ahead are the pearly gates, but there's a huge road with traffic, and OH NO, if you don't cross, you won't make it into heaven(imaginary), do you cross and potentially suffer the wrath of GOD!! \n");
	printf("Traffic: ??? How should I know, I haven't been to heaven \n");
	printf("1 - Yes/ 0 - No ");

	scanf("%d", &cross);

	if(cross == 1){
	
		printf(" --- \n");
		printf("Decision: CROSS \nMorality: ???  \nHealth: ???\n");
		printf("You get hit by a heavenly car, you're dead... again, and look you're in [[ H E A V E N ]]. Wait what's this, God doesn't approve of this. You wake up in a cold sweat... at least it was a dream \n\n");
	        data[0] -= 0; //I mean if its a dream you don't lose morality right??? Come on agree with me!!
		data[1] += 1;	
	
	}else{
	
		printf("--- \n");
		printf("Decision: STAY \nMorality: ??? \nHealth: + 1 \n");
		printf("You don't cross, but miss the gates, aww. As you leave, God pities you and... JUST KIDDING IT WAS A DREAM, HAHA, NO +Morals for you. IT WAS ALL IN YOUR HEAD. DID YOU REALLY BELIEVE GOD EXISTS? HAHAHHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAH. IN HERE, ITS ME O N L Y  [[ M E ]] \n\n");
		data[0] += 0;
		data[2] += 1;
		data[3] += 1;
	}

	 printf("Press Enter to continue...");
	 getchar();
	 getchar();
	 printf("\n");

	printf("-- Situation 4: Have fun ^_^ -- \n");
	printf("Across the road is someone being brutally murdered, if you don't cross now, they'll be dead (did I mention there is no one around?), if you do cross, you risk dying yourself from the traffic. Do you cross? \n");
	printf("Traffic: [[NO DATA]] \n");
	printf("1 - Yes/ 0 - No/ 2 - ??? ");
	rand_num = rand() % 5;
	
	scanf("%d", &cross);
	

	if(cross == 1){

		if(rand_num == 3){
			printf(" --- \n");
			printf("Decision: CROSS \nMorality: + 2 \n");
			printf("You heroically jump across the cars on the road and get to the murderer in time and win the skirmish! You are a hero!! +1000 unrealistic outcome, literally 1/5 chance, did you mess with my code \n\n");
			data[0] += 2;
			data[1] += 1;
		}else{
			printf(" --- \n");
			printf("Decision: CROSS \nMorality: + 2 \nHealth: - 2 \n");
			printf("The most predictable outcome ensues, you get stabbed and die alongside the victim, maybe don't play hero next time?... p.s. Option 2 exists just for this situation, I made it so that only by getting this text will you be able to unlock an alternate ending ^_^ \n\n");	
			data[0] += 2;
			data[1] += 1;		
			data[3] -= 2;
		}
	}if (cross == 2){
		printf(" --- \n");
		printf("Decision: STAY \nMorality: + 5 \nHealth: + 1 \n");
		printf("You do the sensible option and call the police, idk why this is situation was in here.\n\n");
		data[0] += 5;
		data[2] += 1;
		data[3] += 1;
	}if( cross == 0){
		printf(" --- \n");
		printf("Decision: STAY \nMorality: - 3 \nHealth: - 3\n");
		printf("You stand there watching someone being horribly murdered, you sick sick bastard, at least you did not break the law, but the guilt mentall scars you (-1 health) \n\n");
		data[0] -= 3;
		data[2] += 1;
		data[3] -= 3;
	}
	
	 printf("Press Enter to continue...");
	 getchar();
	 getchar();
	 printf("\n");

	printf(" === SUMMARY === \n");
	printf("Morality: %d", data[0]);
	printf("\n");
	if (data[0] > 10){
		printf("You are a very moral person!, you might be dead, but moral.\n");
	}else{
		printf("God will judge you, wait what's this? God isn't real? Oh never mind, enjoy your million $ \n");
	}
	if(data[3] < 0){
		printf("You are really reckless with your life :facepalm: \n");
		printf("Health: 0");
	}if(data[3] == 0){
		printf("You died. Better luck next time \n");
		printf("Health: %d", data[3]);
	}if(data[3] > 0){
		printf("At least you didn't die. P.s. give me a star on Github :wink: \n");
		printf("Health: %d", data[3]);
	}
	printf("\n");
	printf("Crossed: %d | Obeyed: %d", data[1], data[2]);
	printf("\n");
	printf("Press Enter to continue...");
	getchar();
	printf("\n\n");

}

void bossfight(){
	
	printf("Note: This mode has OS-specific commands. Please Input your Operating System: \n");
	printf("1. Windows \n2. Linux \n\nEnter: ");
	char OS;
	getchar();
	scanf("%c", &OS);

	if(OS == '1'){
		system("cls");
	}
	if(OS == '2'){
		system("clear");
	}

	/**
	 * Data Storage below [ DO NOT TOUCH(or mkdir) ]
	 * [0] = Health | [1] = YOUR health (yea go mess with it if you want to not have fun) | [2] = ?
	 * I have this extra line here idk what to do with it... Hi Mr Yung, hope your sanity is still intact reading my "code" lmao
	 **/
	int niet[] = {0};
	niet[0] = 5;
	niet[1] = 3;

	char choice;

	printf("You come face-to-face with someone you haven't met before... \n");
	printf("You sense a werid aura eminating from his body\n\n");
	printf(" ... You feel like you're gonna have a B A D time ... \n");
	printf("Press Enter to Continue ???");
	getchar();
 	getchar();
	printf("\n");
	
	if(OS == '1'){
		system("cls");
	}
	if(OS == '2'){
		system("clear");
	}

	printf("It's just you and M E here\n");
	printf("\n\n");

	printf("[ M O R A L | N I H I L I S T ]: \n HEALTH: [=====] |  MORALITY: ERROR: 404  |  NOTE: Will mess you up \n\n ");
	
	

	printf("Press Enter to continue...");
	getchar();
}

int main(){
	
	char doagain = '1';

while(doagain == '1'){

	int cross;
	
	printf("-=========RED LIGHT!=========- \n");
	printf("Instructions: \n In this game you will be given a situation, and depending on your morals (or lack thereof), you must choose between crossing the road when it's a red light, or not crossing. If you choose to cross, great you just demonstrated that you choose to be righteous in a Computer Terminal Game, if you choose to cross, you just demonstrated that you lack morals, but who cares am I right?");
	printf("\n\n");
	
	printf("Press enter to Continue... ");
	getchar();
	printf("\n");
	
	char mode = '1';
	printf("Select Mode: \n1. Normal Mode \n2. Bossfight \n\nEnter: ");
	scanf("%c", &mode);

	if(mode == '1'){
		situation();
	}
	if(mode == '2'){
		bossfight();
	}
	printf("Play Again? \n[1] - Yes \n[0] - No \n ");
	scanf("%c", &doagain);

	printf("\n");
}

	return(0);

}

