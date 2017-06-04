#ifndef PHYSICS_H
#define PHYSICS_H

    double ohms_volts(double resistance, double current);

    double ohms_resistance(double volts, double current);
    
    double ohms_current(double resistance, double volts);   

    double wav_watts(double amps, double volts);

    double wav_amps(double watts, double volts);

    double wav_volts(double watts, double amps);

    double jvc_joules(double coulombs, double volts);

    double jvc_coulombs(double volts, double joules);

    double jvc_volts(double joules, double coulombs);
    
    double effiency(double e_out, double e_in);

    double GPE(double mass, double gravity, double height);
    
    double kinetic(double mass, double velocity);
    
    double work_done(double force, double distance);
    
    double power(double energy, double time);
    
    double speed(double distance, double time);
    
    double acceleration(double f_velo, double s_velo, double time);
    
    double force(double mass, double acceleration);
    
    double weight(double mass, double gravity);
    
    double momentum(double mass, double velocity);
    
    double changeInMomentum(double force, double time);
    
    double density(double mass, double volume);
    
    double pressure(double force, double area);

    double velocity(double frequency, double wavelength);
    
    double frequency(double velocity, double wavelength);
    
    double wavelength(double velocity, double frequency);

#endif
