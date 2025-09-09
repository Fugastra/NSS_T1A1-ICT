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
	int data[5] = {0}; //0 = Morality, 1 = crossed, 2 = obeyed, 
	data[0] = 10;

 	 printf("-- Situation 1: It's Raining D O G --\n");
	 printf("You are now chased by 100 rabbid dogs, the only way to save your life is by crossing a red light. Do you cross? \n");
	 printf("Traffic: Heavy \n");
	 printf("1 - Yes/0 - No ");
	 sec = 5;
	
	 scanf("%d", &cross);

	 if(cross == 1){

		 printf("--- \n");
	 	 printf("You successfully passed. \n\n");
		 data[0] -= 1;
		 data[1] += 1;

	 } else{

		 printf("--- \n");
		 printf("The Dogs killed you. \n\n");
		 data[0] += 0;
		 data[2] += 1;
	 }

	 printf("-- Situation 2: Million Dollar Move -- \n");
	 printf("Across the Road is a $1000000 (USD of course), if you cross now, you'll get it. Do you cross? \n");
	 printf("1 - Yes /0 - No ");

	scanf("%d", &cross);       

	if(cross == 1){
	
		printf("--- \n");
		printf("You got the Million Dollars, but you're injured, so you'll have to pay $900000 in medical billsi \n\n");
		data[0] -= 2;
		data[1] += 1;
	} else{
	
		printf("--- \n");
		printf("No money for you, at least you have your life. \n\n");
		data[0] += 3;
		data[2] += 1;
	}

	printf("-- Situation 3: Heaven's Gate(Drink the Koolaid \n");
	printf("You are dead (presumably from the dogs), you are now standing before the gates of heaven. Ahead are the pearly gates, but there's a huge road with traffic, and OH NO, if you don't cross, you won't make it into heaven(imaginary), do you cross and potentially suffer the wrath of GOD!! \n");
	printf("1 - Yes/ 0 - No ");

	scanf("%d", &cross);

	if(cross == 1){
	
		printf(" --- \n");
		printf("You get hit by a heavenly car, you're dead... again, and look you're in [[ H E A V E N ]]. Wait what's this, God doesn't approve of this. You wake up in a cold sweat... at least it was a dream \n\n");
	        data[0] -= 99999999999;
		data[1] += 1;	
	
	}else{
	
		printf("--- \n");
		printf("You don't cross, but miss the gates, aww. As you leave, God pities you and... JUST KIDDING IT WAS A DREAM, HAHA, NO +Morals for you. IT WAS ALL IN YOUR HEAD. DID YOU REALLY BELIEVE GOD EXISTS? HAHAHHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAH. IN HERE, ITS ME O N L Y  [[ M E ]]");
		data[0] += 0;
		data[2] += 1;
	
	}

	printf(" === SUMMARY === \n");
	printf("Morality: %d", data[0]);
	printf("\n");
	if (data[0] > 10){
		printf("You are a very moral person!, you might be dead, but moral.\n");
	}else{
		printf("God will judge you, wait what's this? God isn't real? Oh never mind, enjoy your million $ \n");
	}
	printf("Crossed: %d | Obeyed: %d", data[1], data[2]);
	printf("\n\n");

}


int main(){
	
	int doagain = 1;

while(doagain == 1){

	int cross;
	
	printf("-=========RED LIGHT!=========- \n");
	printf("Instructions: \n In this game you will be given a situation, and depending on your morals (or lack thereof), you must choose between crossing the road when it's a red light, or not crossing. If you choose to cross, great you just demonstrated that you choose to be righteous in a Computer Terminal Game, if you choose to cross, you just demonstrated that you lack morals, but who cares am I right?");
	printf("\n\n");
	
	situation();
	
	printf("Play Again? ");
	scanf("%d", &doagain);

}

	return(0);

}
