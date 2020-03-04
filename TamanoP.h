
#ifndef TAMANOP_H
#define TAMANOP_H

#include <string>

class TamanoP {
public:
    TamanoP()=default;
    TamanoP(std::string _msg, float _radioAc);
    TamanoP(const TamanoP& orig)=default;
    virtual ~TamanoP();
    std::string getError();
private:
    std::string _msg="";
    float _radioActual=0;
};

#endif /* TAMANOP_H */

