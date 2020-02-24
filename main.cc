#include <iostream>
#include <string>

using namespace std

int main(){

  cout << "What are you: \n (1)Enlisted \n (2)Officer \n Please type a number" << endl;
  int rankType;
  cin >> rankType;

  if(rankType == 1){
    //Enlisted (Army)
    cout << "What is your rank?
             1)Private (E-1)
             2)Private (E-2)
             3)PFC     (E-3)
             4)Specialist/Corporal (E-4)
             5)Sergeant (E-5)
             6)Staff Sergeant (E-6)
             7)SFC (E-7)
             8)Master Sergeant/First Sergeant (E-8)
             9)Sergeant Major (E-9)
\n Please type a number" << endl;
    int rankValue;
    cin >> rankValue;

    cout << "What is your time in service in years (round down)?" endl;
    double timeInService;
    cin >> timeInService;

    //Calculate their pay level
  }
  else if(rankType == 2){
    //Officer
  }
  else{
    //bad input 
  }
  
  return 0;
}
