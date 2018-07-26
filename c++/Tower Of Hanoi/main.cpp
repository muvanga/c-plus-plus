#include<iostream>
using namespace std;
int step;
void TH(int disk,char FirstTower, char ThirdTower, char SecondTower){

if(disk==1) {
        step++;cout<<step<<". "<<FirstTower<<" -> "<<ThirdTower<<endl;
                }
else{

//move disk-1 disks from FirstTower to SecondTower
TH(disk-1,FirstTower,SecondTower,ThirdTower);

//increase step
++step;

//move disk 1 from FirstTower to ThirdTower
cout<<step<<". "<<FirstTower<<" -> "<<ThirdTower<<endl;

//move disk-1 disks from SecondTower to ThirdTower
TH(disk-1,SecondTower,ThirdTower,FirstTower); }
  }

 int main() {

 step=0;int n;

cout<<"Enter number of disks:";

cin>>n;

TH(n,'A','C','B');
 cout<<"The steps taken are: "<<step;
return 0;
}
