#ifndef KEY_PRESSER
#define KEY_PRESSER = 1


class Keyboard_; //feex point to real


class PinMapping
{
public:
    PinMapping (int pin, int key);
    void run(Keyboard_ &keyboard_out); //feex
    
private:
    int pin;
    int key;
    //state/
    //enum state

    unsigned long start_time;


};






#endif