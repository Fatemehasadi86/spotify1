#pragma once

#include <optional>

template <class T>
class AbstractRepository
{
public:
    ~AbstractRepository(){}

    virtual int save(const T& entity) = 0;

    virtual bool remove(int id) = 0;

    virtual std::optional<T> search(int id) = 0;
};