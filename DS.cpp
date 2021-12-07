#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <list>
#include <unistd.h>
using namespace std;

struct Floordestined{
  int floorno;
  Floordestined *next;
  Floordestined *prev;
  // Floordestined()
  // {
  //   floorno = 0;
  //   next = NULL;
  //   prev = NULL;
  // }
  // void remove()     //function removes the reached floors 
  // {

  // }

  // void add()     //function adds new floors requested
  // {

  // }

  // void sort()   // function sorts the floor
  // {

  // }
};

struct Floorrequested{
  int floorno;
  Floorrequested *next;
  // Floorrequested()
  // {
  //   floorno = 0;
  //   next = NULL;
  // }

  // void add(Floorrequested head,int data) // function adds the floor from where lift is called 
  // {
  //   Floorrequested *floor = new Floorrequested();
  //   Floorrequested *last = head;
  //   floor->
  // }

  // void remove()   //function removes the reached floor
  // {

  // }

};
class Elevator{
private:
  int elev_id; //Private id of the elev
public:
  Floorrequested *requests; // request sequence
  Floordestined destinations; // destined sequence
  int onfloor; //Active Floor
  int nextfloor; //Next Floor in the sequence
  int inlift; //No of users in the lift
  bool direction;

  Elevator(int id,Floorrequested *requestqueue , Floordestined destinedqueue)
  {     
    elev_id = id;
    requests = requestqueue;
    destinations = destinedqueue;
    onfloor = 0;
    nextfloor = 0;
    inlift = 0;
  }

};
void insertintofloorreq(Floorrequested *Floorreqlist,int data){
  if(Floorreqlist==NULL){
    Floorrequested *node = new Floorrequested();
    node->floorno = 0;
    node->next = NULL;
    Floorreqlist = node;
  }
  else{
    Floorrequested *node = new Floorrequested();
    node->floorno = data;
    node->next = NULL;
    Floorrequested *Floorreqlistcpy = Floorreqlist;
    while(Floorreqlistcpy->next == NULL){
      Floorreqlistcpy = Floorreqlistcpy->next;
    }
    Floorreqlistcpy->next = node;
  }
}
// void insertintofloordest(){

// }
// void deletefromfloorreq(Floorrequested *Floorreqlist){
  
// }
// void deletefromfloordest(){

// }
int getLiftFloor(Elevator E1){
  Floorrequested *liftfloorreq = E1.requests;
  int liftfloor = liftfloorreq->floorno;
  if(liftfloor==0){
  cout<<endl<<"The lift is at Ground Floor";
  }
  else{
    cout<<endl<<"The lift is at"<<liftfloor;
  }
  return liftfloor;
}
void themainfunction(Elevator E1){
    int onfloor,floordiff,destfloor,noofusers,indfloornoofusers;
    cout<<endl<<"Enter your floor no: ";
    cin>>onfloor;
    cout<< endl << "Your request has been made.";
    int currfloor = getLiftFloor(E1);
    if(currfloor>onfloor){
      floordiff = currfloor - onfloor;
    }
    else if(onfloor>currfloor){
      floordiff = onfloor - currfloor;
    }
    cout<<endl<<"It will arrive in "<< floordiff*10<<" secs";
    for(int i=0;i<floordiff;i++){
      getLiftFloor(E1);
      sleep(10);
    }
    cout<<endl<<"The lift has arrived!";
    cout<<endl<<"Enter the number of users entering the lift: ";
    cin>>noofusers;
    for(int j=0;j<noofusers;j++){
      cout<<"Destination floor for user "<<j+1<<": ";
      cin>>destfloor;
    }
}
int main(){
  int onfloor,reqflo,no_user,flag=1;      //initilization of variables
  Floorrequested *RE1 = NULL;
  insertintofloorreq(RE1, 0);
  while(RE1==NULL){
    cout<<RE1->floorno;
    RE1 = RE1->next;
  }
  // Floordestined DE1;
  // Floorrequested RE2;
  // Floordestined DE2;

  // Elevator E1(1,RE1,DE1);                 //initilisation of elevator 1    
  // // Elevator E2(2,RE2,DE2);                 //initilisation of elevator 2
  
  // cout << endl << "***********WELCOME TO SUS ELEVATOR SERVICE*************";
  // while(true)
  // {
  //   themainfunction(E1);
  // }
  return 0;
}