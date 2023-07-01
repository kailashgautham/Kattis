#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    ans=((x==true&&y==false)||(x==false&&y==true));
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    ans=(x==true&&y==false?false:true);
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    ans=(x==y);
}