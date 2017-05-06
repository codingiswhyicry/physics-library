 //include libraries up here 
 #include <iostream>
 #include "electricity.h"
 #include "energy.h"
 #include "forces.h"
 #include "light.h"
 
 using namespace std; 
 
 void find_module(int input); 
 void help(); 
 void mod_elec();
 void mod_ener(); 
 void mod_force();
 void mod_light(); 
 void mod_waves(); 
 
 int main() {
     
    cout << "Hello, this is the command line interface for a physics calculator." << endl; 
    cout << "Type the number of the module you wish to use" << endl << "1) electricity" << endl << "2) energy" << endl << "3) forces" << endl << "4) light" << endl << "5) waves" << endl << "type HELP for manual" << endl; 
     
    int x; 
    
    cout << "enter the number" << endl; 
    cin >> x; 
    
    while (1 == 1) {
        
        //check to see if user wrote help 
    }
     
     return 0;
 }
 
  
 void find_module(int input) {
     
     switch(input) {
         
         case 1: 
             mod_elec();
         case 2:
             mod_ener(); 
         case 3: 
             mod_force();
         case 4:
             mod_light();
         case 5:
             mod_waves(); 
        default: 
             cout << "You didn't enter a valid number, please try again (and with a valid number this time)!" << endl; 
     }
     
 }
 
 void help() {
     
     cout << "welcome to the physics calculator!" << endl;
 }
 
 void mod_elec() {
     
     
 }
 
 void mod_ener() {
     
     
 } 
 
 void mod_force() {
     
     
 }
 
 void mod_light() {
     
     
 }
 
 void mod_waves() {
     
     
 }