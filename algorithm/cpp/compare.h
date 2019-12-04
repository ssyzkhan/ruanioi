#ifndef _COMPARE_H
#define _COMPARE_H
template <typename T>
class Greater{
    public:
        bool operator()(T *x,T *y)const{
            return *(x)>*(y);
        }
};

#endif /* _COMPARE_H */