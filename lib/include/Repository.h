//
// Created by student on 19.01.2020.
//

#ifndef POBI_REPOSITORY_H
#define POBI_REPOSITORY_H

class Repository{

public:
    Repository();
    virtual void remove(int i) = 0;
    virtual ~Repository();
    virtual int size() = 0;

};




#endif //POBI_REPOSITORY_H
