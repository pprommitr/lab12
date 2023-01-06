#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=1;i <=3;i++){
        cin.get();
    }

    int x = rand()%9;
    string g;
    if(x==0){
        g = "A";
    }
    else if(x==1){
        g = "B+";
    }
    else if(x==2){
        g = "B";
    }
    else if(x==3){
        g = "C+";
    }
    else if(x==4){
        g = "C";
    }
    else if(x==5){
        g = "D+";
    }
    else if(x==6){
        g = "D";
    }
    else if(x==7){
        g = "F";
    }
    else if(x==8){
        g = "W";
    }
   cout << "You will get "<< g <<" in this 261102.";

   return 0;

}
// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
