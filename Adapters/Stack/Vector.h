#include <iostream>

template <typename T>
class Vector {
private:
    T* ptr;
    int capacity ;
    int size ;

public:
    Vector() {
        ptr = new T[capacity];
    }

    Vector(const Vector& obj) {
        this->size = obj.size;
        this->capacity = obj.capacity;
        this->ptr = new T[capacity];
        for (int i = 0; i < size; i++) {
            this->ptr[i] = obj.ptr[i];
        }
    }

    Vector& operator=(const Vector& obj) {
        if (this != &obj) {
            delete[] this->ptr;
            this->capacity = obj.capacity;
            this->size = obj.size;
            this->ptr = new T[capacity];
            for (int i = 0; i < size; i++) {
                this->ptr[i] = obj.ptr[i];
            }
        }
        return *this;
    }

    Vector(Vector&& obj) {
		this->size = obj.size;
		this->capacity = obj.capacity;
		this->ptr = obj.ptr;
		obj.size = 0;
		obj.capacity = 0;
		obj.ptr = nullptr;
	}

    T& operator[](int index) {
        if (index >= 0 && index < size) {
            return ptr[index];
        } else {
            throw std::out_of_range("Index out of range");
        }
    }

    ~Vector() {
        delete[] ptr;
    }

public:
    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << ptr[i] << ' ' << std::endl;
        }
        std::cout << std::endl;
    }

    void push_back(const T& obj) {
        if (size == capacity) {
            if (size == 0) {
                capacity = 1;
            } else {
                capacity = 2 * capacity;
            }
            T* temp = new T[capacity];
            for (int i = 0; i < size; i++) {
                temp[i] = ptr[i];
            }
            delete[] ptr;
            ptr = temp;
        }
        ptr[size] = obj;
        size++;
    }

    void pop_back() {
        if (size > 0) {
            size--;
            if (size == 0) {
                delete[] ptr;
                ptr = nullptr;
                capacity = 0;
            } else if (size < capacity / 2) {
                capacity = capacity / 2;
                T* temp = new T[capacity];
                for (int i = 0; i < size; i++) {
                    temp[i] = ptr[i];
                }
                delete[] ptr;
                ptr = temp;
            }
        }
    }

    void erase(int index) {
        if (index < size - 1) {
            if (size == 1) {
                delete[] ptr;
                ptr = nullptr;
                capacity = 0;
                size = 0;
            } else if (size == 2) {
                if (index == 0) {
                    swap(ptr[0], ptr[1]);
                }
                pop_back();
            } else {
                for (int i = index; i < size - 1; i++) {
                    swap(ptr[i], ptr[i + 1]);
                }
                pop_back();
            }
        } else if (index == size - 1) {
            pop_back();
        }
    }

    void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    void insert(int pos, const T& value) {
        if (pos > size) {
            std::cout << "Error: Position is out of range." << std::endl;
            return;
        }

        if (size == capacity) {
            capacity = 2 * (size + 1);
            T* temp = new T[capacity];
            for (int i = 0; i < size; i++) {
                temp[i] = ptr[i];
            }
            delete[] ptr;
            ptr = temp;
        }

        for (int i = size; i > pos; i--) {
            ptr[i] = ptr[i - 1];
        }

        ptr[pos] = value;
        size++;
    }

    int length() const {
        return size;
    }

    T back() const {
        return ptr[size - 1];
    }

    T front() const {
        return ptr[0];
    }

    bool empty() {
        return size == 0;
    }
};
