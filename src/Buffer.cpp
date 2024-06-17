#include "Buffer.hpp"

Buffer::Buffer(){
    text = "";
}
void Buffer::insert(size_t position, char c){
    if(position <= text.size()){//less than or equalto because we might just want to add it as the next character in the string.
        text.insert(position,1, c);//when inserting characters to a string, you can either give the position and a char pointer, or the position, size and character.
    }
}

void Buffer::insert(size_t position, std::string str){
    if(position <= text.size()){
        text.insert(position, str);// for strings on the other hand ,you just need to give the position and the string.
    }
}

void Buffer::deletechar(size_t position){
    if(position < text.size()){
        text.erase(position, 1);
    }
}

void Buffer::deleterange(size_t position, size_t range){
    
}