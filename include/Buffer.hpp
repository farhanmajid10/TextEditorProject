#ifndef BUFFER
#define BUFFER

#include<iostream>
#include<vector>
class Buffer{
    private:
        std::string text;
    public:
        Buffer();
        ~Buffer();
        void insert(size_t position, char c);
        void insert(size_t position, std::string str);
        void deletechar(size_t position);
        void deleterange(size_t position, size_t range);
        void replaceChar(size_t position, char c);
        void replaceString(size_t position, std::string str);
        std::string getText();
        void clear();
};

#endif 