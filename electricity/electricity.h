#ifndef ELECTRICITY_H
#define ELECTRICITY_H

    double ohms_volts(double resistance, double current);

    double ohms_resistance(double volts, double current);
    
    double ohms_current(double resistance, double volts);   

    double wav_watts(double amps, double volts);

    double wav_amps(double watts, double volts);

    double wav_volts(double watts, double amps);

    double jvc_joules(double coulombs, double volts);

    double jvc_coulombs(double volts, double joules);

    double jvc_volts(double joules, double coulombs);
    
#endif