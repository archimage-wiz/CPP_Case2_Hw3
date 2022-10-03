
class Counter {

private:
    int counter;

public:

    int get_counter(){ return counter; }
    void inc_counter() { this->counter++; }
    void dec_counter() { 
        if (this->counter > 1) {
            this->counter--; 
        }
    }


    Counter() {
        this->counter = 1;
    }
    Counter(int counter) {
        this->counter = counter;
    }
    ~Counter() { }

};


