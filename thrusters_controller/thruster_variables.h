#ifndef THRUSTER_VARIABLES_H
#define THRUSTER_VARIABLES_H
#include <string>
#include <vector>

extern int number_of_thrusters;
extern int max_thrust;
extern int min_thrust;
extern int full_thrust;
extern int zero_thrust_pwm;
extern int min_pwm;
extern int max_pwm;
extern float Kp;
extern float Ki;
extern float Kd;
extern float Acceptable_error;
extern float Output_min;
extern float Output_max;
extern float Integral_min;
extern float Integral_max;

extern std::vector<float> surge_vector_init, sway_vector_init, heave_vector_init, yaw_vector_init, pitch_vector_init, roll_vector_init;

void loadThrusterValues();
void printThrusterValues();

#endif