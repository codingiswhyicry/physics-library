#ifndef FORCES_H
#define FORCES_H

double speed(double distance, double time);

double acceleration(double f_velo, double s_velo, double time);

double force(double mass, double acceleration);

double weight(double mass, double gravity);

double momentum(double mass, double velocity);

double changeInMomentum(double force, double time);

double density(double mass, double volume);

double pressure(double force, double area);

#endif