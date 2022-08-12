#include <iostream>
#include "class_vector.hpp"
#include "functions_vector.hpp"
#include "operators.hpp"
int main(){
    Vector<int> vec = {1,2,6,8};
    vec.push_back(34);
    vec.push_back(45);
    std::cout << "vector = ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    
    vec.pop_back();
    std::cout << "vector = ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    
    vec.push_front(12);
    vec.push_front(23);
    std::cout << "vector = ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    
    Vector<int> vec1 = {22,4,5,7,8,6,5};
    Vector<int> vec2 = vec + vec1;
    std::cout << "vector2 = ";
    for (int i = 0; i < vec2.size(); ++i) {
        std::cout << vec2[i] << " ";
    }
    std::cout << std::endl;
    
    
    Vector<int> vec3(vec2);
    std::cout << "vector3 = ";
    for (int i = 0; i < vec3.size(); ++i) {
        std::cout << vec3[i] << " ";
    }
    std::cout << std::endl;
    
    
    vec3.clear();
    std::cout << "vector3 = ";
    for (int i = 0; i < vec3.size(); ++i) {
        std::cout << vec3[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << vec3.isEmpty() << std::endl;
    
    vec3.back();
    vec3.front();
    
    int a = 6;
    std::cout << "firt appearance of " << a << " is under index " << vec2.find_by_value(a) << std::endl;
    
    vec2.remove_by_value(6);
    std::cout << "vector2 = ";
    for (int i = 0; i < vec2.size(); ++i) {
        std::cout << vec2[i] << " ";
    }
    std::cout << std::endl;
}
