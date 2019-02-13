#include "priority_queue.h"

template <>
templatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
templatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool templatePriorityQueue<int>::empty() const{
        return storage_.empty();
}

template <>
int templatePriorityQueue<int>::size() {
        return storage_.size();
}

template <>
const int& templatePriorityQueue<int>::top() const{
        return storage_.top();
}

template <>
void templatePriorityQueue<int>::pop(){
        storage_.pop();
}

template <>
void templatePriorityQueue<int>::push(const int& val){
        storage_.push(val);
}
