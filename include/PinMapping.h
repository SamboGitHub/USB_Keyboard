#ifndef KEY_PRESSER
#define KEY_PRESSER = 1


class Keyboard_; //feex point to real


class PinMapping
{
public:
    PinMapping (int pin, int key);
    void init();
    void run(Keyboard_ &keyboard_out); //feex
    
private:
    int pin;
    int key;
    int button_state_val;
    int prev_button_state_val;
    
    enum key_state
    {
      Idle,
      KeyDown,
      KeyDown_Waiting_Response,

    };
    key_state state;
    //state/
    //enum state

    unsigned long start_time;


};






#endif