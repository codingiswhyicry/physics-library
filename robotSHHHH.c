

int main() {

    int servo_one = 0; //arm
    int servo_two = 1; //claw
    
    int motor_one = 0; 
    int motor_two = 1; 
    
    wait_for_light(0);
    
    msleep(1000);
    
    //enable servos
    
    enable_servos(); 
    msleep(1000);
    
    //bring to halfway mark 
    set_servo_position(servo_one, );
    msleep(1000);

    mav(motor_one, 1000); 
    mav(motor_two, 1000);
    msleep(5000);
    
    ao(); 
    msleep(1000);
    
    //drives to top 
    
    //bring to halfway
    set_servo_position(servo_one, );
    msleep(1000);
    
    set_servo_position(servo_two, );
    msleep(1000);
    
    mav(motor_one, 1000); 
    mav(motor_two, 1000);
    msleep(2000);
    
    //adjust claw as you move 
    
    set_servo_position(servo_two);
    msleep(1000);
    
    mav(motor_one, 200); 
    mav(motor_two, 200);
    msleep(10000);
    
    ao(); 
    msleep(1000);
    
    //move claw up 
    set_servo_position(servo_two, ); 
    msleep(1000);
    
    //raise arm 
    set_servo_position(servo_one, );
    msleep(1000);
    
    //drive forward 
    
    mav(motor_one, 600); 
    mav(motor_two, 600);
    msleep(2000);
    
    //shake claw 
    
    set_servo_position(servo_two, 100); 
    msleep(500); 
    set_servo_position(servo_two, 2000); 
    msleep(500); 
    
    set_servo_position(servo_two, 100); 
    msleep(500); 
    set_servo_position(servo_two, 2000); 
    msleep(500); 
    
    set_servo_position(servo_two, 100); 
    msleep(500); 
    set_servo_position(servo_two, 2000); 
    msleep(500); 
    
    set_servo_position(servo_two, 100); 
    msleep(500); 
    set_servo_position(servo_two, 2000); 
    msleep(500); 
    
    set_servo_position(servo_two, 100); 
    msleep(500); 
    set_servo_position(servo_two, 2000); 
    msleep(500); 
    
    set_servo_position(servo_two, 100); 
    msleep(500); 
    set_servo_position(servo_two, 2000); 
    msleep(500); 
    
    msleep(2000); 
    
    //move back for 3 seconds 
    
    mav(motor_one, -1000); 
    mav(motor_two, -1000);
    msleep(2000);
    
    ao(); 
    msleep(1000);
    
    return 0; 
} 
