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

double effiency(double e_out, double e_in) {
    
    return (e_out / e_in) * 100; 
}

double GPE(double mass, double gravity, double height) {
    
    return mass * gravity * height; 
}

double kinetic(double mass, double velocity) {
    
    double squared_1 = velocity * mass;
    
    double squared_2 = squared_1 * squared_1;
    
    return 0.5 * squared_2;
}

double work_done(double force, double distance) {
    
    return force * distance; 
}

double power(double energy, double time) {
    
    return energy / time; 
}

double speed(double distance, double time) {
    
    return distance / time;
}

double acceleration(double f_velo, double s_velo, double time) {
    
    int change = s_velo - f_velo; 
    
    return change / time; 
}

double force(double mass, double acceleration) {
    
    return mass * acceleration; 
} 

double weight(double mass, double gravity) {
    
    return mass * gravity;
}

double momentum(double mass, double velocity) {
    
    return mass * velocity; 
}

double changeInMomentum(double force, double time) {
    
    return force * time; 
}

double density(double mass, double volume) {
    
    return mass / volume; 
}

double pressure(double force, double area) {
    
    return force / area; 
}

double velocity(double frequency, double wavelength) {
    
    return frequency * wavelength; 
}

double frequency(double velocity, double wavelength) {
    
    return velocity / wavelength; 
}

double wavelength(double velocity, double frequency) {
    
    return velocity / frequency;
}
