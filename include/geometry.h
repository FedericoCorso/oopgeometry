#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <iostream>

using namespace std;

 class Point
 {
    private :
       int x , y ;
    public :        
        Point ( const int u=0, const int v=0 );
        int get_x () const;
        int get_y () const;
        void set_x(const int x);
        void set_y(const int y);
        string as_string() const;
 };


 class PointArray {

    private:
        int size;
        Point* points;

    protected:
        void resize(int n);

    public:

        PointArray();

        PointArray(const Point points[], const int size);

        PointArray(const PointArray& pv);

        ~PointArray();

        void push_back(const Point &p);

        void insert(const int pos, const Point &p);

        void remove(int pos);

        int get_size();

        void clear();

        string as_string() const;

        const Point * get(const int pos) const;

        Point * get(const int pos);
 };


#endif  // GEOMETRY_H 
