 //include libraries up here 
 #include <iostream>
 #include "physics.h" 
 
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
     
     //write help stuff here
     
 }
 
 void mod_elec() {
     
     cout << "Type the number of the equation you're looking for:" << endl << "1) volts" << endl << "2) resistance" << endl << "3) current" << endl << "4) watts" << endl << "5) amps" << endl << "6) joules" << endl << "7) coloumbs" << endl; 
     
     int in_num; 
     cin >> in_num; 
     
     cout << endl; 
     
     switch (in_num) {
         
         case 1:
         //volts 
         cout << "Type the number that matches the units in the equation" << endl << "1) resistance / current" << endl << "2) watts / amps" << endl << "3) joules / coloumbs" << endl; 
         
         int user_in; 
         
         cin >> user_in; 
         cout << endl; 
         
         switch(user_in) {
             
             case 1:
             
                 double resistance, current;
                 
                 cout << "input your resistance:" << endl; 
                 cin >> resistance; 
                 cout << "input your current:" << endl; 
                 cin >> current; 
                 
                 cout << current << " x " << resistance << " = " << ohms_volts(resistance, current) << " volts" << endl; 
             
             case 2: 
             
                 double watts, amps;
                 
                 cout << "input your watts:" << endl; 
                 cin >> watts; 
                 cout << "input your amps:" << endl; 
                 cin >> amps; 
                 
                 cout << watts << " / " << amps << " = " << wav_volts(watts, amps) << " volts" << endl; 
                 
             case 3: 
             
                 double joules, coloumbs;
                 
                 cout << "input your joules: "; 
                 cin >> joules; 
                 cout << endl; 
                 
                 cout << "input your coloumbs: "; 
                 cin >> coloumbs; 
                 cout << endl;
                 
                 cout << joules << " / " << coloumbs << " = " << jvc_volts(joules, coulombs) << " volts "<< endl; 
                 
             
             default:
             
             cout << "something happened. it mine have been your fault. it might have been mine. but you're gonna suffer and start at the beginning."
             
             start(); 
         }
         
         case 2: 
         //resistance
             double volts, current; 
             
             cout << "input your volts: "; 
             cin >> volts; 
             cout << endl; 
             
             cout << "input your current: "; 
             cin >> current; 
             cout << endl; 
             
             cout << volts << " / " << current << " = " << ohms_resistance(volts, current) << endl; 
         
         case 3: 
         //current
             double resistance, volts; 
             
             cout << "input your resistance: "; 
             cin >> resistance; 
             cout << endl; 
             
             cout << "input your volts: "; 
             cin >> volts; 
             cout << endl; 
             
             cout << volts << " / " << resistance << " = " << ohms_current(resistance, volts) << endl; 
            
         case 4: 
         //watts
            double amps, volts; 
         
            cout << "input your amps: ";
            cin >> amps; 
            cout << endl; 
            
            cout << "input your volts: "; 
            cin >> volts; 
            cout << endl; 
            
            cout << amps << " * " << volts << " = " << wav_watts(amps, volts) << endl; 
         
         case 5:
             //amps
             double watts, volts; 
             
             cout << "input your watts: "; 
             cin >> watts; 
             cout << endl; 
             
             cout << "input your volts: "; 
             cin >> volts; 
             cout << endl; 
             
             cout << watts << " / " << volts << " = " << wav_amps(watts, volts) << endl; 
             
         case 6: 
         //joules
         
         double coloumbs, volts; 
         
         cout << "input your coloumbs: "; 
         cin >> coloumbs; 
         cout << endl; 
        
         cout << "input your volts: "; 
         cin >> volts; 
         cout << endl; 
         
         cout << volts << " x " << coloumbs << " = " << jvc_joules(volts, coloumbs) << endl; 
         
         case 7: 
         //coloumbs
         double joules, volts; 
         
         cout << "input your joules: "; 
         cin >> joules;
         cout << endl; 
         
         cout << "input your volts: "; 
         cin >> volts; 
         cout << endl; 
         
         cout << joules << " / " << volts << " = " << jvc_coulombs(volts, coloumbs) << endl; 
         
         default: 
         cout << "the number you typed wasn't found. you'll be taken back to the start so you can learn from your mistakes and pay for your sins."
         
         start()
     }
 }
 
 void mod_ener() {
     
      cout << "Type the number of the equation you're looking for:" << endl << "1) efficency" << endl << "2) potential energy" << endl << "3) kinetic energy" << endl  << "4) work done" << endl  << "5) power" << endl;
     
     int equation; 
     
     cin >> equation;
     
     cout << endl; 
     
     switch(equation) {
         case 1: //efficency
            double e_out, e_in; 
            
            cout << "input the amount of work input: "; 
            cin >> e_in; 
            cout << endl; 
            
            cout << "input the amount of work output: "; 
            cin >> e_out; 
            cout << endl; 
            
            cout << e_out << " / " << e_in << " = " << efficency(e_out, e_in) << "% "<< endl; 
            
         case 2: //potential energy
            double mass, gravity, height; 
            
            cout << "input the amount of mass: "; 
            cin >> mass; 
            cout << endl; 
            
            cout << "input the amount of gravity: "; 
            cin >> gravity; 
            cout << endl; 
            
            cout << "input the amount of height: "; 
            cin >> height; 
            cout << endl; 
            
            cout << mass << " * " << gravity <<  " * " << height << " = " << GPE(mass, gravity, height) << endl; 
         
         case 3: //kinetic energy
            double mass, velocity; 
            
            cout << "input the amount of mass: "; 
            cin >> mass; 
            cout << endl; 
            
            cout << "input the amount of velocity: "; 
            cin >> velocity; 
            cout << endl; 
            
            cout << mass * velocity << " * " << mass * velocity << " * " << "0.5" << " = " << kinetic(mass, velocity) << endl; 
            
         case 4: //work 
            double force, distance; 
            
            cout << "input the amount of force: "; 
            cin >> force; 
            cout << endl; 
            
            cout << "input the amount of distance: "; 
            cin >> distance; 
            cout << endl; 
            
            cout << force << " * " << distance << " = " << work_done(force, distance); 
            
         case 5: //power
            double energy, time; 
            
            cout << "input the amount of energy: "; 
            cin >> energy; 
            cout << endl; 
            
            cout << "input the amount of time: "; 
            cin >> force; 
            cout << endl; 
            
            cout << energy << " / " << time << " = " << power(energy, time);
         
         default: 
         
         cout << "the number you typed wasn't found. you'll be taken back to the start so you can learn from your mistakes and pay for your sins."
         
         start()
     }
     
    
 } 
 
 void mod_force() {
     
     cout << "Type the number of the equation you're looking for: " << endl << "1) speed" << endl << "2) acceleration" << endl << "3) force" << endl << "4) weight" << endl << "5) momentum" << endl << "6) chnage in momentum" << endl << "7) density" << endl << "8) pressure" << endl;
     
     int user_input;
     
     cin >> user_input;
     
     switch (user_input) {
     
         case 1:
         //speed
             
             double distance, time;
             
             cout << "input your distance: ";
             cin >> distance;
             cout << endl;
             
             cout << "input your time: ";
             cin >> time;
             cout << endl;
             
             cout << distance << " / " << time << " = " << speed(distance, time) << endl;
             
             
         case 2:
         //acceleration
             
             double f_velo, s_velo, time;
             
             cout << "input your start velocity: ";
             cin >> s_velo;
             cout << endl;
             
             cout << "input your end velocity: ";
             cin >> f_velo;
             cout << endl;
             
             cout << "input your time: ";
             cin >> time;
             cout << endl;
             
             cout << f_velo << " - " << s_velo << " * " << time << " = " << acceleration(f_velo, s_velo, time) << endl; 
             
         case 3:
         //force
         
             double mass, acceleration;
             
             cout << "input your mass: "; 
             cin >> mass; 
             cout << endl; 
             
             cout << "input your acceleration: "; 
             cin >> acceleration; 
             cout << endl; 
                 
             cout << mass << " * " << acceleration << " = " << force(mass, acceleration); << endl; 
            
         case 4:
         //weight
        
            double mass, gravity; 
            
            cout << "input your mass: "; 
            cin >> mass; 
            cout << endl; 
            
            cout << "input your gravity: "; 
            cin >> gravity; 
            cout << endl; 
        
            cout << mass << " * " << gravity << " = " << weight(mass, gravity) << endl; 
    
         case 5:
         //momentum
         
            double mass, velocity; 
            
            cout << "input your mass: "; 
            cin >> mass; 
            cout << endl; 
            
            cout << "input your velocity: "; 
            cin >> velocity; 
            cout << endl; 
            
            cout << mass << " * " << velocity << " = " << momentum(mass, velocity) << endl; 
        
         case 6:
         //change in momentum
             
             double force, time; 
             
             cout << "input your time: "; 
             cin >> time; 
             cout << endl; 
             
             cout << "input your force: "; 
             cin >> force; 
             cout << endl; 
             
             cout << force << " * " << time << " = " << changeInMomentum(force, time) << endl; 
             
         case 7:
         //density
         
            double mass, volume; 
            
            cout << "input your mass"; 
            cin >> mass; 
            cout << endl; 
            
            cout << "input your volume"; 
            cin >> volume; 
            cout << endl; 
            
            cout << mass << " / " << volume << " = " << density(mass, volume) << endl;  
             
         case 8:
         //pressure
            double force, area; 
            
            cout << "input your force: "; 
            cin >> force; 
            cout << endl; 
            
            cout << "input your area"; 
            cin >> area; 
            cout << endl; 
            
            cout << force << " / " << area << " = " << pressure(force, area) << endl;  
        
         default:
             
            cout << "sorry, your input was valid. you'll be returned to the start page." << endl;
             start();
     }
     
 }
 
 void mod_light() {
     
     cout << "Type the number of the equation you're looking for: " << endl << "" << endl << "" << endl;
 }
 
 void mod_waves() {
     
     cout << "Type the number of the equation you're looking for: " << endl << "1) velocity" << endl << "2) frequency" << endl << "3) wavelength" << endl;
     
    int user_in; 
    
    cin >> user_in; 
    cout << endl; 
    
    switch(user_in) {
        
        case 1:
        //velocity
        
        double frequency, wavelength; 
        
        cout << "input your frequency: "; 
        cin >> frequency; 
        cout << endl; 
        
        cout << "input your wavelength: "; 
        cin >> wavelength; 
        cout << endl; 
        
        cout << frequency << " * " << wavelength << velocity(frequency, wavelength) << endl; 
        
        
        case 2: 
        //frequency
        
        double velocity, wavelength; 
        
        cout << "input your velocity: "; 
        cin >> velocity; 
        cout << endl; 
        
        cout << "input your wavelength: "; 
        cin >> wavelength; 
        cout << endl; 
        
        cout << 
        
        case 3: 
        //wavelength
        
        
        default: 
        
    }
 }
 
 /*
 
    cout << ""; 
    cin >> ; 
    cout << endl; 
 
 */
