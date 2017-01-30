double ohms_volts(double resistance, double current) {
    
    return resistance * current;
}

double ohms_resistance(double volts, double current) {
    
    return volts / current;
}

double ohms_current(double resistance, double volts) {
    
    return volts / resistance;  
}

double wav_watts(double amps, double volts) {
    
    return amps * volts
} 

double wav_amps(double watts, double volts) {
    
    return watts / volts;
}

double wav_volts(double watts, double amps) {
    
    return watts / amps; 
}

double jvc_joules(double coulombs, double volts) {
    
    return volts * coulombs; 
}

double jvc_coulombs(double volts, double joules) {
    
    return joules / volts; 
}

double jvc_volts(double joules, double coulombs) {
    
    return joules / coulombs; 
}
