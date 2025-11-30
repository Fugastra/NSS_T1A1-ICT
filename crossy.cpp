#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void cls(string OS){
 if(OS == "1"){
   system("cls");
 } 
 else if(OS == "2"){
   system("clear");
 }
}

void situ(int sit){
  switch (sit) {
    case 1:
      cout << "--- Situation 1: It's Raining Dogs --- \n";
      cout << "You are now being chased by 100 rabid dogs, the only way to save yourself is to cross the road, but OH NO, its a red light. Do you still cross?\n";
      cout << "---\n Identity: Random Citizen \n Urgency: Urgent \n\n"; 
      cout << "1. Cross \n2. No, I love dogs\n\n";
      break;
    case 2:
      cout << "--- Situation 2: Late to school --- \n";
      cout << "It's a red light, but if you don't cross you'll be late to school (+1 black mark). But there's a teacher watching from across the street, do you do it?\n";
      cout << "--- \n Identity: Righteous CCSC Student \n Urgency: Critically Urgent \n\n";
      cout << "1. Cross \n2. +1 Black Mark\n\n";
      break;
    case 3:
      cout << "--- Situation 3: Bomb defusion ---\n";
      cout << "There's a bomb about to go off any second across the street, you're a bomb defuser who can do it, but it's a red light. DO you cross?\n";
      cout << "--- \n Identity: Bomb defuser \n Urgency: Critically Urgent \n\n";
      cout << "1. Defuse the bomb \n2. Be a good citizen \n\n"; 
      break;
    case 4:
      cout << "--- Situation 4: Dante's Dilemma --- \n";
      cout << "You are at the infamous jump to heaven having traversed through Dante's Inferno(go read it). But this time, it's a road, the green light is flashing, if you cross, you'll make it to heaven,if you don't you'll be stuck in hell. Do you do it? \n";
      cout << "--- \n Identity: ??? \n Urgency: Depends \n\n";
      cout << "1. Cross \n2. Don't \n\n";
      break;
    case 5:
      cout << "--- Situation 5: Mr Krabs ---\n";
      cout << "Across the street is $100 billion(USD), if you can get it before someone else, you'll be a billionaire (you won't be punished because you're rich now, and rich people suffer no consequences). But it's a red light, do you cross? \n";
      cout << "--- \n Identity: Passerby \n Urgency: Meh \n\n";
      cout << "1. Cross and get the money \n2. Be moral \n\n";
      break;
  }
}


void sitsw(string OS){
  cin.get();
  cout << "Press any key to continue... \n";
  cin.get();
  cls(OS);
}

void rangay(string OS){
  int cross;
  int sit;
  int data[5] = {0};
  data[0] = rand() % 6;
  data[3] = rand() % 11;

  cout << "Select Situation: \n---\n1. Dog Rain \n2.Late to School \n3. Bomb Defuser \n4. Dante's Dilemma \n5.Mr Krabs \n\nAction: ";
  cin >> sit;

  switch (sit) {
    case 1:
      situ(1);
      cout << "Action: ";
      cin >> cross;
      switch (cross) {
        case 1:
          cout << "\n---\n";
          cout << "Congrats, you crossed safely! Unfortunately you were filmed by the AI camera across the street, so you're fined $5000 \n\n";
          data[0] -= 1;
          data[1] += 1;
          break;
        case 2:
          cout << "\n---\n";
          cout << "You survived, barely, not big surprise. Play next rounds carefully, if you die, it's game over \n\n";
          data[0] += 1;
          data[2] += 2;
          data[3] -= 8;
          break;
      }
      sitsw(OS);
      break;
    case 2:
      situ(2);
      break;
    case 3:
      situ(3);
      break;
    case 4:
      situ(4);
      break;
    case 5:
      situ(5);
      break;
  }
}

void game(string OS){
  int cross;
  int sit = rand() % 5;
  int data[5] = {0};
  data[0] = rand() % 6;
	data[3] = rand() % 11;
  /**
	 * 0 = Morality, 1 = crossed, 2 = obeyed, 3 = health (THIS COMMENT IS <em> IMPORTANT </em> )
	 * REMOVING RUNS THE RISK OF BEING HORRIBLY CONFUSED AT WTF WHAT HAPPENS LATER!! YOU HAVE BEEN WARNED
	 * -Sincerely,
	 *  A mentally stable person (trust me)
	 **/ 
  if(data[3] > 0 || data[0] > 0){
    situ(1);
    cout << "Action: ";
    cin >> cross;
    switch (cross) {
      case 1:
        cout << "\n---\n";
        cout << "Decision: CROSS \n";
        cout << "Note: Congrats, you crossed safely! Unfortunately you were filmed by the AI camera across the street, so you're fined $5000 \n\n";
        data[0] -= 1;
        data[1] += 1;
        break;
      case 2:
        cout << "\n---\n";
        cout << "Decision: NOT CROSS \n";
        cout << "You survived, barely, not big surprise. Play next rounds carefully, if you die, it's game over \n\n";
        data[0] += 1;
        data[2] += 2;
        data[3] -= 8;
        break;
    }

    sitsw(OS);
  
    situ(2);
    cout << "Action: ";
    cin >> cross;
    switch (cross) {
      case 1:
        cout << "\n---\n";
        cout << "Decision: CROSS \n";
        cout << "You nearly got hit, the shock caused you to lose 2 pts of health\n\n";
        data[0] -= 1;
        data[1] += 1;
        data[3] -= 2;
        break;
      case 2:
        cout << "\n---\n";
        cout << "Decision: NOT CROSS \n";
        cout << "+1 Black Mark, don't say I didn't warn you. (-1 health) \n\n";
        data[0] += 1;
        data[2] += 1;
        data[3] -= -1;
        break;
    }
    
    sitsw(OS);

    situ(3);
    cout << "Action: ";
    cin >> cross;
    switch (cross) {
      case 1:
        cout << "\n---\n";
        cout << "Decision: CROSS \n";
        cout << "The bomb got defused and a lot of people's lives were saved \n\n";
        data[0] += 3;
        data[1] += 1;
        data[3] += 2;
        break;
      case 2:
        cout << "\n--\n";
        cout << "Decision: NOT CROSS \n";
        cout << "You watch as the bomb blows up the building, before you die in the explosion as well \n\n";
        data[0] -= 10;
        data[2] += 1;
        data[3] -= 5;
    }

    sitsw(OS);
   
    situ(4);
    cout << "Action: ";
    cin >> cross;
    switch (cross) {
      case 1:
        cout << "\n---\n";
        cout << "Decision: CROSS \n";
        cout << "You didn't make it, now you're going straight to the deepest pits of hell because you didn't wait for the next green light. \n\n";
        data[0] -= 666; //Get it? 
        data[1] += 1;
        data[3] -= 67;
        break;
      case 2:
        cout << "\n--\n";
        cout << "Decision: NOT CROSS \n";
        cout << "You did not make it, but for being moral, God forgave you. (Read source code comment) \n\n"; //Made this just for the people who think all I do is make it so crossing is better, ahaha I use the notion of god, that defeats logic (sarcasm) >:P
        data[0] -= 10;
        data[2] += 1;
        data[3] -= 5;
    }

    sitsw(OS);
    situ(5);
    cout << "Action: ";
    cin >> cross;
    switch (cross) {
      case 1:
        cout << "\n---\n";
        cout << "Decision: CROSS \n";
        cout << "You got the cash and became a billionaire. No consequences :) (except for your soul, which doesn't exist anyways)\n\n";
        data[0] -= 2; //Is this secretly a commentary about our current socio-economic climate? Idk that's for the philosophers to argue to death over.
        data[1] += 1;
        data[3] += 0;
        break;
      case 2:
        cout << "\n--\n";
        cout << "Decision: NOT CROSS \n";
        cout << "Well I mean you past the morality test? You'll be rewarded by god (never) \n\n"; //Made this just for the people who think all I do is make it so crossing is better, ahaha I use the notion of god, that defeats logic (sarcasm) >:P
        data[0] += 5;
        data[2] += 1;
        data[3] += 0;
    }
  }
  
  if(data[3] < 0){
    data[3] = 0;
  }

  cout << "Game over: \n\n";
  cout << "---\n";
  cout << "Morality: " << data[0] << "\n";
  cout << "Health: " << data[3] << "\n";
  cout << "Times crossed: " << data[1] << "\n";
  cout << "Times Obeyed: " << data[2] << "\n";
  if (data[0] > 5){
    cout << "You were a very moral person, but that can also cost you yours or others life sometimes. It all depends on the situation. Sometimes, its better to be alive and wrong, than dead but right\n";
  }
  else{
    if(data[3] > 0){
      cout << "Naughty, naughty. Santa will put you on the naughty list(It's December, just say it's Xmas), but you're alive and that's what matters most\n";
    }
    else{
      cout << "Skill issue. (No further elaboration needed) \n";
    }
  }
  cout << "---\n\n";
}

int main(){
  string type;
  int edna_mode;
  int pagain = 1;
  cout << "Enter your operating system\n";
  cout << "1. Windows \n2. Linux\n";
  cin >> type;
  
  cls(type);
 
  cout << "--- Game Mode select --- \n";
  cout << "1. Normal Mode \n2. Quickplay (Random question) \n\n";
  cout << "Action: ";
  cin >> edna_mode;

  while(pagain == 1){
    switch (edna_mode) {
      case 1:
       cls(type);
       game(type);
       cout << "Play Again? \n1. Yes \n2. No \n\nAction: ";
       cin >> pagain;
        switch (pagain) {
          case 1:
            pagain = 1;
            break;
          case 2:
            pagain = 0;
            break;
        }
       break;
      case 2:
       cls(type);
       rangay(type);
        cout << "Play Again? \n1. Yes \n2. No \n\nAction: ";
        cin >> pagain;
          switch (pagain) {
            case 1:
              pagain = 1;
              break;
            case 2:
              pagain = 0;
              break;
          }
        break;
    }
  }
  return 0;
}
