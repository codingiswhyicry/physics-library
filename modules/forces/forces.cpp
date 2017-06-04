double speed(double distance, double time) {
    
    return distance / time;
}

double acceleration(double f_velo, double s_velo, double time) {
    
    int change = f_velo - s_velo;
    
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
