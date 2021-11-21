#pragma once
#include <iostream>

struct Node{
    int val;
    Node* next;

    Node(){
        next = NULL;
    }

    Node(int x){
        val = x;
        next = NULL;
    }
};