#include <iostream>
using namespace std;

//Functions declarations
void print_move(int, char, char);
void move_disk(int, char, char, char);

int main() {
  int n = 3; //Number of disks
  move_disk(n, 'A', 'C', 'B'); //A, B, and C are the names of rods

  return 0;
}

//                                            auxlery/aux means extra
void move_disk(int n, char from_rod, char to_rod, char aux_rod){
  if(n == 1){
    //only the smallest disk, can be move to any rod
    print_move(n, from_rod, to_rod);
    return;
  }

  // move all except the largest one, from FROM to AUX (using TO as extra)
  move_disk(n-1, from_rod, aux_rod, to_rod);

  // move largest disk
  print_move(n, from_rod, to_rod);

  // move all except the largest from AUX (where we left them) to TO (using FROM as extra)
  move_disk(n-1, aux_rod, to_rod, from_rod);
}

//methotd to display commands
void print_move(int disk, char from_rod, char to_rod){
  cout << "Move disk " << disk << " from rod " << from_rod << " to rod " << to_rod << endl;
}
