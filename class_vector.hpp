template<typename T>
class Vector {
private:
    
    int m_capacity;
    int m_size;
    T* m_arr;
    void resize();
    
public:
    
    void my_swap(T&,T&);
    Vector();
    ~Vector();
    Vector(int x);
    Vector(const Vector<T>&);
    Vector(const std::initializer_list<T>&);
    void push_back(T);
    void pop_back();
    void push_front(T);
    T& operator[](int);
    const T& operator[](int) const;
    Vector& operator=(const Vector&);
    Vector operator+(const Vector&);
    Vector& operator+=(const Vector&);
    void erase(int,int);
    int size();
    int capacity();
    int front();
    int back();
    void insert(int,T);
    bool isEmpty();
    void clear();
    int find_by_value(T);
    void remove_by_value(T);
    T at(int);
    int reserve(int);
};
