#include <iostream>

int move,count = 5;
int attack = 1, magicPower = 5, ultimate = 7;

class FirstEnemy {
private:
    int ehp;
    int hp;
    int enemyAttack;
    int enemyMagic;
    int enemyUltimate;

public:
    void levelFirst();
    void Prize();
    FirstEnemy(int ehp,int hp, int enemyAttack, int enemyMagic, int enemyUltimate) {
        this->ehp = ehp;
        this->hp = hp;
        this->enemyAttack = enemyAttack;
        this->enemyMagic = enemyMagic;
        this->enemyUltimate = enemyUltimate;
    }

};

class SecondEnemy {
private:
    int ehp;
    int hp;
    int enemyAttack;
    int enemyMagic;
    int enemyUltimate;

public:
    void Prize();
    void level2();
    SecondEnemy(int ehp,int hp, int enemyAttack, int enemyMagic, int enemyUltimate) {
        this->ehp = ehp;
        this->hp = hp;
        this->enemyAttack = enemyAttack;
        this->enemyMagic = enemyMagic;
        this->enemyUltimate = enemyUltimate;
    }

};

class Boss {
private:
    int ehp;
    int hp;
    int enemyAttack;
    int enemyMagic;
    int enemyUltimate;

public:
    void bossFight();
    Boss(int ehp,int hp, int enemyAttack, int enemyMagic, int enemyUltimate) {
        this->ehp = ehp;
        this->hp = hp;
        this->enemyAttack = enemyAttack;
        this->enemyMagic = enemyMagic;
        this->enemyUltimate = enemyUltimate;
    }

};

void lose () { 
    std::cout << "You lose. TRY AGAIN LATER. MAYBE YOU NEED TO CHANGE YOUR STRATEGY WITH BOOSTS" << std::endl;
                                           
std::cout << "▀████▀     ▄▄█▀▀██▄  ▄█▀▀▀█▄████▀▀▀███ "<< std::endl;
std::cout << "  ██     ▄██▀    ▀██▄██    ▀█ ██    ▀█ "<< std::endl;
std::cout << " ██     ██▀      ▀█████▄     ██   █    "<< std::endl;
std::cout << "  ██     ██        ██ ▀█████▄ ██████   "<< std::endl;
std::cout << "  █▓     ▄█        ██     ▀██ ██   █  ▄ "<< std::endl;
std::cout << "  █▓    ▒███      ██▀█     ██ █▓     ▄█ "<< std::endl;
std::cout << "  ▓▓     ▓██      ▓█▓     ▀█▓ ▓▓   ▓  ▓ "<< std::endl;
std::cout << "  ▓▒    ▓▓█▓▓▓    ▓▓▓▓     ▓▓ ▓▓     ▓▓ "<< std::endl;
std::cout << "▒ ▒▒ ▓▒ ▒  ▒ ▒ ▒ ▒  ▒▓▒ ▒ ▒▓▒ ▒▒▒▓▒ ▒ ▒ "<< std::endl;
                                       
                                       

    exit(1);
} 

void win () { 
    std::cout << "YOU WIN! CONGRATULATIONS!" << std::endl; 
}

void victory () { 
    std::cout << "YOU WIN! CONGRATULATIONS!" << std::endl;


std::cout << "██╗   ██╗██╗ ██████╗████████╗ ██████╗ ██████╗ ██╗   ██╗"<< std::endl;
std::cout << "██║   ██║██║██╔════╝╚══██╔══╝██╔═══██╗██╔══██╗╚██╗ ██╔╝"<< std::endl;
std::cout << "██║   ██║██║██║        ██║   ██║   ██║██████╔╝ ╚████╔╝ "<< std::endl;
std::cout << "╚██╗ ██╔╝██║██║        ██║   ██║   ██║██╔══██╗  ╚██╔╝  "<< std::endl;
std::cout << "╚████╔╝ ██║╚██████╗   ██║   ╚██████╔╝██║  ██║   ██║   "<< std::endl;
std::cout << "  ╚═══╝  ╚═╝ ╚═════╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝   ╚═╝   "<< std::endl;

    exit(1); 
}

void FirstEnemy::levelFirst(){
  while(count == 5){
      std::cout << "ENEMY HP: " << ehp << std::endl << "YOUR HP: " << hp << std::endl << "(1) USE BASIC ATTACK" << std::endl << "(2) USE MAGIC POWER" <<std::endl << "(3) ULTIMATE ATTACK" << std::endl;
      std::cout << "YOUR TURN: ";
      std::cin >> move;
      if(move == 1){
        std::cout << "You choose 1 " << std::endl;
        ehp -= attack;
        std::cout << "The enemy used his sword." << std::endl;
        hp -= enemyAttack;
        std::cout << "----------------------------------------------------" << std::endl;

      }
      else if(move == 2){
        std::cout << "You choose 2 " << std::endl;
        ehp -= magicPower;
        std::cout << "The enemy cast a Magic Missle." << std::endl;
        hp -= enemyMagic;
        std::cout << "----------------------------------------------------" << std::endl;
      } 
      else if(move == 3){
        std::cout << "You choose 3 " << std::endl;
        ehp -= ultimate;
        std::cout << "The enemy cast a Magic Missle." << std::endl;
        hp -= enemyUltimate;
        std::cout << "----------------------------------------------------" << std::endl;
      }
      while(move > 3 || move < 1){
        std::cout << "You entered incorrect move number" << std::endl;
        std::cout << "YOUR TURN: ";
        std::cin >> move;
      }
      if(ehp <= 0){
        win();
        count--;
      }
      if (hp <= 0){ 
        lose();   
      }
   }
}

void FirstEnemy::Prize(){
  int chest;
  std::cout << "YOU FINISHED FIRST LEVEL. TAKE YOUR PRIZE(ONLY ONE): " << std::endl;
  std::cout << "(1) HEAL POTION(REGENERATES ALL YOU HP + increase (+5)) " << std::endl;
  std::cout << "(2) STRENGTH POTION(INCREASE  ALL YOUR DAMAGE STATS) " << std::endl;
  std::cout << "(3) GOLD CHEST(CHOOSE 1 OR 2, AND TRY TO WIN THE GLADIATOR SWORD) " << std::endl;

  std::cout << "YOUR TURN: ";
  std::cin >> move;
  if(move == 1){
    std::cout << "You choose 1 " << std::endl;
    hp += 13;
    std::cout << "YOUR HP NOW: " << hp << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
  }
  else if(move == 2){
    std::cout << "You choose 2 " << std::endl;
    attack = attack + 2;
    magicPower = magicPower + 1;
    ultimate = ultimate + 1;
    std::cout << "YOUR ATTACK STATS INCREASED: " << hp << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
  } 
  else if(move == 3){
    std::cout << "You choose 3 " << std::endl;
    std::cout << "Enter number from 1 to 15, and test your luck:" << std::endl;
    std::cin >> chest;
    if(chest == 10){
      std::cout << "You are so lucky! This sword will increase your attack. Now feel like GLADIATOR!";
      attack = attack + 7;
      ultimate = ultimate + 5;
    }else{
      std::cout << "Maybe next time you will get this god sword! KEEP GOING WARRIOR!";
    }
    std::cout << "----------------------------------------------------" << std::endl;
  }
  count--;
}

void SecondEnemy::Prize(){
  int chest;
  std::cout << "YOU FINISHED SECOND LEVEL. TAKE YOUR PRIZE(ONLY ONE): " << std::endl;
  std::cout << "(1) HEAL POTION(REGENERATES ALL YOU HP) " << std::endl;
  std::cout << "(2) STRENGTH POTION(INCREASE  ALL YOUR DAMAGE STATS) " << std::endl;
  std::cout << "(3) NEW ABILITY(SPAMMING ATTACK - 3 ATTACKS WITH CRITICAL DAMAGE) " << std::endl;

  std::cout << "YOUR TURN: ";
  std::cin >> move;
  if(move == 1){
    std::cout << "You choose 1 " << std::endl;
    hp += 13;
    std::cout << "YOUR HP NOW: " << hp << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
  }
  else if(move == 2){
    std::cout << "You choose 2 " << std::endl;
    attack = attack + 2;
    magicPower = magicPower + 1;
    ultimate = ultimate + 1;
    std::cout << "----------------------------------------------------" << std::endl;
  } 
  else if(move == 3){
    std::cout << "You choose 3 " << std::endl;
    std::cout << "Enter number from 1 to 15, and test your luck:" << std::endl;
    std::cin >> chest;
    if(chest == 10){
      std::cout << "You are so lucky! This sword will increase your attack. Now feel like GLADIATOR!";
      attack = attack + 7;
      ultimate = ultimate + 5;
    }else{
      std::cout << "Maybe next time you will get this god sword! KEEP GOING WARRIOR!";
    }
    std::cout << "----------------------------------------------------" << std::endl;
  }
  count--;
}


void SecondEnemy::level2(){
  while(count == 3){
      std::cout << "ENEMY HP: " << ehp << std::endl << "YOUR HP: " << hp << std::endl << "(1) USE BASIC ATTACK" << std::endl << "(2) USE MAGIC POWER" <<std::endl << "(3) ULTIMATE ATTACK" << std::endl;
      std::cout << "YOUR TURN: ";
      std::cin >> move;
    if(move == 1){
      std::cout << "You choose 1 " << std::endl;
      ehp -= attack;
      std::cout << "The enemy used his sword." << std::endl;
      hp -= enemyAttack;
      std::cout << "----------------------------------------------------" << std::endl;

    }
    else if(move == 2){
      std::cout << "You choose 2 " << std::endl;
      ehp -= magicPower;
      std::cout << "The enemy cast a Magic Missle." << std::endl;
      hp -= enemyMagic;
      std::cout << "----------------------------------------------------" << std::endl;
    } 
    else if(move == 3){
      std::cout << "You choose 3 " << std::endl;
      ehp -= ultimate;
      std::cout << "The enemy cast a Magic Missle." << std::endl;
      hp -= enemyUltimate;
      std::cout << "----------------------------------------------------" << std::endl;
    }
    while(move > 3 || move < 1){
      std::cout << "You entered incorrect move number" << std::endl;
      std::cout << "YOUR TURN: ";
      std::cin >> move;
    }
    if(ehp <= 0){
      win();
      count--;
    }
    if (hp <= 0){ 
      lose();   
    }
  }
  system("clear");
}


void Boss::bossFight(){
  while(count == 1){
      std::cout << "ENEMY HP: " << ehp << std::endl << "YOUR HP: " << hp << std::endl << "(1) USE BASIC ATTACK" << std::endl << "(2) USE MAGIC POWER" <<std::endl << "(3) ULTIMATE ATTACK" << std::endl;
      std::cout << "YOUR TURN: ";
      std::cin >> move;
    if(move == 1){
      std::cout << "You choose 1 " << std::endl;
      ehp -= attack;
      std::cout << "The enemy used his sword." << std::endl;
      hp -= enemyAttack;
      std::cout << "----------------------------------------------------" << std::endl;

    }
    else if(move == 2){
      std::cout << "You choose 2 " << std::endl;
      ehp -= magicPower;
      std::cout << "The enemy cast a Magic Attack." << std::endl;
      hp -= enemyMagic;
      std::cout << "----------------------------------------------------" << std::endl;
    } 
    else if(move == 3){
      std::cout << "You choose 3 " << std::endl;
      ehp -= ultimate;
      std::cout << "The enemy use an Ultimate." << std::endl;
      hp -= enemyUltimate;
      std::cout << "----------------------------------------------------" << std::endl;
    }
    while(move > 3 || move < 1){
      std::cout << "You entered incorrect move number" << std::endl;
      std::cout << "YOUR TURN: ";
      std::cin >> move;
    }
    if(ehp <= 0){
      victory();
      count--;
    }
    if (hp <= 0){ 
      lose();   
    }
  }
}

int main(){
FirstEnemy stats(30,20,6,1,1);
SecondEnemy statics(40,20,1,9,1);
Boss enemy(100,20,20,15,1);


std::cout << "██████╗  █████╗ ████████╗████████╗██╗     ███████╗"<< std::endl;
std::cout << "██╔══██╗██╔══██╗╚══██╔══╝╚══██╔══╝██║     ██╔════╝"<< std::endl;
std::cout << "██████╔╝███████║   ██║      ██║   ██║     █████╗  "<< std::endl;
std::cout << "██╔══██╗██╔══██║   ██║      ██║   ██║     ██╔══╝  "<< std::endl;
std::cout << "██████╔╝██║  ██║   ██║      ██║   ███████╗███████╗"<< std::endl;
std::cout << "╚═════╝ ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚══════╝╚══════╝"<< std::endl;

std::cout << " ██╗       ██╗     ███████╗██╗   ██╗███████╗██╗  "<< std::endl;   
std::cout << "███║       ██║     ██╔════╝██║   ██║██╔════╝██║   "<< std::endl;  
std::cout << "╚██║       ██║     █████╗  ██║   ██║█████╗  ██║    "<< std::endl; 
std::cout << " ██║       ██║     ██╔══╝  ╚██╗ ██╔╝██╔══╝  ██║     "<< std::endl;
std::cout << " ██║██╗    ███████╗███████╗ ╚████╔╝ ███████╗███████╗"<< std::endl;
std::cout << " ╚═╝╚═╝    ╚══════╝╚══════╝  ╚═══╝  ╚══════╝╚══════╝"<< std::endl;
std::cout << "----------------------------------------------------" << std::endl;

stats.levelFirst();
stats.Prize();

std::cout << "██████╗        ██╗     ███████╗██╗   ██╗███████╗██╗ "<< std::endl;    
std::cout << "╚════██╗       ██║     ██╔════╝██║   ██║██╔════╝██║    "<< std::endl; 
std::cout << " █████╔╝       ██║     █████╗  ██║   ██║█████╗  ██║     "<< std::endl;
std::cout << "██╔═══╝        ██║     ██╔══╝  ╚██╗ ██╔╝██╔══╝  ██║     "<< std::endl;
std::cout << "███████╗██╗    ███████╗███████╗ ╚████╔╝ ███████╗███████╗"<< std::endl;
std::cout << "╚══════╝╚═╝    ╚══════╝╚══════╝  ╚═══╝  ╚══════╝╚══════╝"<< std::endl;
std::cout << "----------------------------------------------------" << std::endl;

statics.level2();
statics.Prize();

                                     
std::cout << "▀███▀▀▀██▄ ▄▄█▀▀██▄  ▄█▀▀▀█▄█▄█▀▀▀█▄█" << std::endl;
std::cout << "  ██    ████▀    ▀██▄██    ▀███    ▀█"<< std::endl;
std::cout << "  ██    ███▀      ▀█████▄   ▀███▄    "<< std::endl;
std::cout << "  ██▀▀▀█▄▄█        ██ ▀█████▄ ▀█████▄"<< std::endl;
std::cout << "  ██    ▀██▄      ▄██     ▀██     ▀██"<< std::endl;
std::cout << "  ██    ▄███▄    ▄██▀█     ███     ██"<< std::endl;
std::cout << "▄████████  ▀▀████▀▀ █▀█████▀█▀█████▀ "<< std::endl;

enemy.bossFight();  

}
