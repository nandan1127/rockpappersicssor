#include <iostream>
#include <ctime>
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void showwinner(char player,char computer);
int main(){
    char player;
    char computer;
    player=getuserchoice();
    std::cout<<"your choice is:\n";
    showchoice(player);
    
    computer= getcomputerchoice();
    std::cout<<"computer choice is\n";
    showchoice(computer);

    showwinner(player,computer);
    return 0;
}
char getuserchoice(){
    char player;
    std::cout<<"rock papper scissor game!\n";
    do{
    std::cout<<"enter the following choice:\n";
    std::cout<<"*************************\n";
    std::cout<<"r for rock\n";
    std::cout<<"s for scissor\n";
    std::cout<<"p for papper\n";
    std::cin>>player;
    std::cout<<"*******************\n";
    }while(player!='r' && player!='p' && player!='s');
    return player;
}
char getcomputerchoice(){
   srand(time(0));
   int num= rand()% 3+1;
 switch(num){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
 }
    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r': std::cout<<"rock\n";
                  break;
        case 'p': std::cout<<"papper\n";
                  break;
        case 's': std::cout<<"sissors\n";
                  break;      
        default : 
                  break;
    }
}
void showwinner(char player,char computer){
    switch(player){
       case 'r': if(computer=='r'){
                  std::cout<<"its a tie\n";
                  }
                else if(computer=='p'){
                    std::cout<<"computer won\n";
                }
                else{
                    std::cout<<"you won\n";
                }
                break;
       case 'p': if(computer=='r'){
                  std::cout<<"you won\n";
                  }
                else if(computer=='p'){
                    std::cout<<"its a tie\n";
                }
                else{
                    std::cout<<"you lost,computer won\n";
                }
                break;
       case 's': if(computer=='r'){
                  std::cout<<"you lost\n";
                  }
                else if(computer=='p'){
                    std::cout<<"you won\n";
                }
                else{
                    std::cout<<"its a tie\n";
                }
                break;
    }
}