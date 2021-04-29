#include <tadItem.hpp>

class Fila {
    public:
    Fila();
    virtual ~Fila();
    virtual void push(Item* i);
    virtual Item* pop();
    virtual bool isEmpty();
    virtual int size();

};