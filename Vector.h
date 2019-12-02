#ifndef VECTOR_H
#define VECTOR_H

#include<iostream>
using namespace std;

namespace myVector
{

template <class T>
class vector
{
    int size_v;
    T *elem;
    int space;

public:
    // Default constructor
    vector()
    {
        size_v = 0;
        elem = nullptr;
        space = 0;
    }


    explicit vector(int s)
    {
        size_v = s;
        elem = new T[s];
        space = s;

        for (int i = 0; i < size_v; ++i)
            elem[i] = 0;
    }

    vector(const vector &other)
    {
        size_v = other.size_v;
        elem = new T[other.size_v];
        space = other.space;

        copy(other.elem, other.elem + size_v, elem);
    }

    vector &operator=(const vector &another)
    {
        // Allocates new space
        T *p = new T[another.size_v];

        // Copies elements using the std::copy() algorithm
        copy(another.elem, another.elem + another.size_v, p);

        // Deallocates old space
        delete[] elem;

        // Resets elem
        elem = p;
        size_v = another.size_v;

        return *this;
    }

    // Destructor
    ~vector()
    {
        delete[] elem;
    }

    // Overloaded subscript operator
    T &operator[](int n)
    {
        return elem[n];
    }

    // Overloaded constant subscript operator
    const T &operator[](int n) const
    {
        return elem[n];
    }

    // Returns the size of the vector
    int size() const
    {
        return size_v;
    }

    // Returns the capacity of the vector
    int capacity() const
    {
        return space;
    }

    // Resizes the vector
    void resize(int newsize)
    {
        reserve(newsize);

        // Initializes new elements
        for (int i = size_v; i < newsize; ++i)
            elem[i] = 0;

        size_v = newsize;
    }

    // Adds a new element to the vector
    // Increases the vector size by one; initializes the new element with the passed in element

    void push_back(T elem)
    {
        // Starts with space for 8 elements.
        // If this is not enough space, gets more space.
        if (space == 0)
            reserve(8);
        else if (size_v == space)
            reserve(2 * space);

        // Adds the passed in value to the vector after resizing it.
        elem[size_v] = elem;

        // Increases the size (size_v is the number of elements)
        ++size_v;
    }

    // Reserves more space on the heap for the vector
    // Never decreases allocation, just allocates new space
    // newalloc the amount of space to be reserved on the heap
    void reserve(int newalloc)
    {
        T *p = new T[newalloc];

        // Copies old elements
        copy(elem, elem + size_v, p);

        // Deallocates old space
        delete[] elem;

        elem = p;
    }

    using iterator = T *;
    using const_iterator = const T *;

    // Defines the iterator begin - points to the first element
    // Read or Write
    iterator begin()
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    // Defines the constant iterator begin - points to the first element
    // Read Only
    const_iterator begin() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    // Defines the iterator end - points to one beyond the last element
    // Read/Write
    iterator end()
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    // Defines the constant iterator end - points to one beyond the last element
    // Read Only
    const_iterator end() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    // Inserts a new element before the location of the passed in iterator
    // p - the iterator location
    // val - the value to be inserted at p
    iterator insert(iterator p, const T &val)
    {
        // Ensures there is space to add
        // If there is not enough space, resizes the vector
        if(space <= size_v)
        {
            resize(size_v + 1);
        }

        T tempAr[space];
        int count = 0;

        // For loop to get the values from the right side of p (including p)
        for(int i = p; i < size_v; ++i)
        {
            tempAr[count] = elem[i];
            count++;
        }

        // Inserts new value into p
        elem[p] = val;

        count = 0;

        // For loop adds the old elements after p
        for(int i = p + 1; i < size_v; ++i)
        {
            elem[i] = tempAr[count];
            count++;
        }

        return p;
    }

    // Erases a value at a specified location.
    // p - the iterator location
    iterator erase(iterator p)
    {
        if (p == end())
            return p;

        // Copies the element one position to the left for the entire vector
        for (iterator pos = p + 1; pos != end(); ++pos)
            *(pos - 1) = *pos;

        // Decrements the size of the vector
        --size_v;

        return p;
    }
};
}
#endif // VECTOR_H
