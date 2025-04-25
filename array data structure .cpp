class array
{
private:
    int capacity ;
    int lastIndex;
    int *ptr;

public:
    void createArray(int);
    void insert(int , int );
    void append(int);
    void getitem(int);
    bool isEmpty();
    bool isFull();
    void del(int);
    void edit(int,int);
    int count();
    int getCapacity();

};
