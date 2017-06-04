double effiency(double e_out, double e_in) {
    
    return (e_out / e_in) * 100; 
}

double GPE(double mass, double gravity, double height) {
    
    return mass * gravity * height; 
}

double kinetic(double mass, double velocity) {
    
    double my_velo = velocity * velocity; 
    
    return 0.5 * mass * my_velo; 
}

double work_done(double force, double distance) {
    
    return force * distance; 
}

double power(double energy, double time) {
    
    return energy / time; 
}

double energy() {
    
    /*
        e = Specific Heat Capacity * mass * change in temp
    */
    
    return; 
}