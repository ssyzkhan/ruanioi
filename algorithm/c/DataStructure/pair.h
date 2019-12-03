#ifndef _PAIR_H
#define _PAIR_H
typedef struct {
    void *first;
    void *second;
}pair;
pair make_pair(void *f,void *d){
    pair p={f,d};
    return p;
}

#endif /* _PAIR_H */