#pragma once
#include "JAR-Template/drive.h"

class Drive;

extern Drive chassis;

void default_constants();

void drive_test();
void turn_test();
void swing_test();
void full_test();
void odom_test();
void tank_odom_test();
void holonomic_odom_test();

//Auton functions

//One Long Goal Autons

//No-Odom

    void no_odom_four_left();//Done
    void no_odom_four_right();//Done
    void no_odom_matchload_left();
    void no_odom_matchload_right();

    void six_ball_no_odom_left();
    void six_ball_no_odom_right();



void drive_to_point_test();

void four_right();

//Long and Middle Goal Auton

//Middle Goal Autons(Only)

//2Long and Middle Goal Auton

