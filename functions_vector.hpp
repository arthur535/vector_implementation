template<typename T>
Vector<T>::Vector() {
    m_capacity = 0;
    m_size = 0;
    m_arr = nullptr;
}

template<typename T>
Vector<T>::Vector(int x):m_capacity(x) {
    m_size = 0;
    m_arr = new T [m_capacity];
}

template<typename T>
Vector<T>::Vector(const Vector<T>& vec) {
    m_size = vec.m_size;
    m_capacity = vec.m_capacity;
    m_arr = new T[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_arr[i] = vec.m_arr[i];
    }
}
template<typename T>
Vector<T>::~Vector() {
    if (!m_arr) {
        delete[] m_arr;
    }
    m_arr = nullptr;
}

template<typename T>
Vector<T>::Vector(const std::initializer_list<T>& init) {
    m_capacity = static_cast<int>(init.size());
    m_size = static_cast<int>(init.size());
    m_arr = new T[m_capacity];
    int i = 0;
    for (auto it = init.begin(); it != init.end(); ++it) {
        m_arr[i++] = *it;
    }
}

template<typename T>
void Vector<T>::push_back(T element) {
    if (m_size == m_capacity) {
        resize();
    }
    m_arr[m_size++] = element;
}


template<typename T>
void Vector<T>::pop_back() {
    if (0 == m_size) {
        std::cout << "vector is empty" << std::endl;
        return;
    }
    m_size--;
}


template<typename T>
void Vector<T>::resize() {
    m_capacity *= 2;
    T* tmp = new T [m_capacity];
    for (int i = 0; i < m_size; ++i) {
        tmp[i] = m_arr[i];
    }
    delete[] m_arr;
    m_arr = tmp;
}


template<typename T>
void Vector<T>::push_front(T element) {
    if (m_size == m_capacity) {
        resize();
    }
    m_size++;
    for (int i = 0; i < m_size; ++i) {
        my_swap(m_arr[m_size-1-i],m_arr[m_size-i]);
    }
    m_arr[0] = element;
}


template<typename T>
void Vector<T>::my_swap(T& a,T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}



template<typename T>
void Vector<T>::erase(int pos1,int pos2) {
    T* vec = new T[m_capacity];
    int j = 0;
    int temp_size = m_size-(pos2-pos1+1);
    for (int i = 0; i < m_size; ++i) {
        if (i >= pos1 && i <= pos2) {
        }
        else{
            vec[j] = m_arr[i];
            j++;
        }
    }
    m_size = temp_size;
    delete[] m_arr;
    m_arr = vec;
}


template<typename T>
int Vector<T>::size(){
    return m_size;
}


template<typename T>
int Vector<T>::capacity(){
    return m_capacity;
}


template<typename T>
int Vector<T>::front(){
    if(isEmpty()){
        std::cout << "Segmentation fault\n";
        return -1;
    }
    return m_arr[0];
}


template<typename T>
int Vector<T>::back(){
    if(isEmpty()){
        std::cout <<"Segmentation fault\n";
        return -1;
    }
    return m_arr[m_size-1];
}


template<typename T>
void Vector<T>::insert(int pos, T element) {
    if (m_size == m_capacity) {
        resize();
    }
    m_size++;
    for (int i = 0; i < pos; ++i) {
        my_swap(m_arr[m_size-i],m_arr[m_size-i-1]);
    }
    m_arr[pos] = element;
}


template<typename T>
bool Vector<T>::isEmpty() {
    return (m_size == 0);
}


template<typename T>
void Vector<T>::clear() {
    T* tmp = new T[m_capacity];
    m_size = 0;
    delete[] m_arr;
    m_arr = tmp;
}


template<typename T>
int Vector<T>::find_by_value(T value) {
    for (int i = 0; i < size(); ++i) {
        if (m_arr[i] == value) {
            return i;
        }
    }
    return -1;
}

template<typename T>
void Vector<T>::remove_by_value(T value) {
    for (int i = 0; i < size(); ++i) {
        if (m_arr[i] == value) {
            erase(i, i);
        }
    }
    return;
}


template<typename T>
T Vector<T>::at(int index) {
    if (isEmpty() || index < 0 || index >= size()) {
        throw std::out_of_range("segmentation fault");
    }
    return m_arr[index];
}

template<typename T>
int Vector<T>::reserve(int count) {
    if (count < 0) {
        throw std::out_of_range("segmentation fault");
    }
    return m_capacity = count;
}

