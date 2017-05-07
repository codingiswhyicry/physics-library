 //include libraries up here 
 #include <iostream>
 #include "electricity.h"
 #include "energy.h"
 #include "forces.h"
 #include "light.h"
 
 using namespace std; 
 
 void start(); 
 void find_module(int input); 
 void help(); 
 void mod_elec();
 void mod_ener(); 
 void mod_force();
 void mod_light(); 
 void mod_waves(); 
 
 int main() {
     
    cout << "Hello, this is the command line interface for a physics calculator." << endl; 
    
    start(); 
    
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
 
 void start() {
     
     cout << "Type the number of the module you wish to use" << endl << "1) electricity" << endl << "2) energy" << endl << "3) forces" << endl << "4) light" << endl << "5) waves" << endl << "type HELP for manual" << endl; 
     
     int x; 
    
     cout << "enter the number" << endl; 
     cin >> x; 
     
     find_module(x); 
 }
 
 void help() {
     
     cout << "welcome to the physics calculator!" << endl;
 }
 
 void mod_elec() {
     
     cout << "Type the number of the equation you're looking for:" << endl << "1) volts" << endl << "2) resistance" << endl << "3) current" << endl << "4) watts" << endl << "5) amps" << endl << "6) joules" << endl << "7) coloumbs" << endl; 
     
     int in_num; 
     cin >> in_num; 
     
     switch (in_num) {
         
         case 1:
         //volts 
         cout << "Type the number that matches the units in the equation" << endl << "1) resistance / current" << endl << "2) watts / amps" << endl << "3) joules / coloumbs" << endl; 
         
         int user_in; 
         
         cin >> user_in; 
         
         switch(user_in) {
             
             case 1:
             
                 int resistance;
                 int current;
                 
                 cout << "input your resistance:" << endl; 
                 cin >> resistance; 
                 cout << "input your current:" << endl; 
                 cin >> current; 
                 
                 cout << current << " x " << resistance << " = " << ohms_volts(resistance, current) << " volts" << endl; 
             
             case 2: 
             
                 int watts;
                 int amps;
                 
                 cout << "input your watts:" << endl; 
                 cin >> watts; 
                 cout << "input your amps:" << endl; 
                 cin >> amps; 
                 
                 cout << watts << " / " << amps << " = " << wav_volts(watts, amps) << " volts" << endl; 
                 
             case 3: 
             
                 int joules;
                 int coloumbs;
                 
                 cout << "input your joules:" << endl; 
                 cin >> joules; 
                 cout << "input your coloumbs:" << endl; 
                 cin >> coloumbs; 
                 
                 cout << joules << " / " << coloumbs << " = " << jvc_volts(joules, coulombs) << " volts "<< endl; 
                 
             
             default:
             
             cout << "something happened. it mine have been your fault. it might have been mine. but you're gonna suffer and start at the beginning."
             
             start()
         }
         
         case 2: 
         //resistance
             int volts; 
             int current; 
             
             cout << "input your volts:" << endl; 
             cin >> volts; 
             cout << "input your current" << endl; 
             cin >> current; 
             
             cout << volts << " / " << current << " = " << ohms_resistance(volts, current) << endl; 
         
         case 3: 
         //current
             int resistance; 
             int volts; 
             
             cout << "input your resistance:" << endl; 
             cin >> resistance; 
             cout << "input your volts:" << endl; 
             cin >> volts; 
             
             cout << volts << " / " << resistance << " = " << ohms_current(resistance, volts) << endl; 
            
         case 4: 
         //watts
            int amps; 
            int volts; 
         
            cout << "input your amps: " << endl;
            cin >> amps; 
            cout << "input your volts: " << endl; 
            cin >> volts; 
            
            cout << amps << " * " << volts << " = " << wav_watts(amps, volts) << endl; 
         
         case 5:
         //amps
         int watts; 
         int volts; 
         
         cout << "input your watts: " << endl; 
         cin >> watts; 
         cout << "input your volts: " << endl; 
         
         cout << watts << " / " << volts << " = " << wav_amps(watts, volts) << endl; 
         
         case 6: 
         //joules
         
         int coloumbs; 
         int volts; 
         
         cout << "input your coloums" << endl; 
         cin >> coloumbs; 
         cout << "input your volts"
         
         cout << volts << " x " << coloumbs << " = " << jvc_joules(volts, coloumbs) << endl; 
         
         case 7: 
         //coloumbs
         int joules; 
         int volts; 
         
         cout << "input your joules: " << endl; 
         cin >> joules; 
         cout << "input your volts: " << endl; 
         cin >> volts; 
         
         cout << joules << " / " << volts << " = " << jvc_coulombs(volts, coloumbs) << endl; 
         
         default: 
         cout << "the number you typed wasn't found. you'll be taken back to the start so you can learn from your mistakes and pay for your sins."
         
         start()
     }
 }
 
 void mod_ener() {
     
     cout << "Type the number of the equation you're looking for:" << endl << "" << endl << "" << endl;
 } 
 
 void mod_force() {
     
     cout << "Type the number of the equation you're looking for:" << endl << "" << endl << "" << endl;
 }
 
 void mod_light() {
     
     cout << "Type the number of the equation you're looking for:" << endl << "" << endl << "" << endl;
 }
 
 void mod_waves() {
     
     cout << "Type the number of the equation you're looking for:" << endl << "" << endl << "" << endl;
 }