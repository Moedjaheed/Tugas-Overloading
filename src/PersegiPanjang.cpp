#include <iostream>
#include <cmath>
#include "include/rectangular.hpp"
using namespace std;


void persegiPanjang::output(){
    float length = this->x_max - this->x_min; length = abs(length);
    float width  = this->y_max - this->y_min; width  = abs(width);
    cout << "Titik tengah x   : " << (this->x_max - this->x_min)/2 + this->x_min; cout << endl;
    cout << "Titik tengah y   : " << (this->y_max - this->y_min)/2 + this->y_min; cout << endl;
    cout << "Panjang          : " << length; cout << endl;
    cout << "Lebar            : " << width; cout << endl;
    cout << "Nilai x_min      : " << this->x_min; cout << endl;
    cout << "Nilai x_max      : " << this->x_max; cout << endl;
    cout << "Nilai y_min      : " << this->y_min; cout << endl;
    cout << "Nilai y_max      : " << this->y_max; cout << endl;
}

persegiPanjang::persegiPanjang(float midpoint_x, float midpoint_y, float length, float width){
    this->x_min = midpoint_x - (length/2);
    this->y_min = midpoint_y - (width/2);
    this->x_max = midpoint_x + (length/2);
    this->y_max = midpoint_y + (width/2);
}

bool persegiPanjang::operator==(persegiPanjang const &new_var)const{
    if (this->x_max > new_var.x_min && this->x_min < new_var.x_max && this->y_max > new_var.y_min && this->y_min < new_var.y_max){
        return true;
    }else{
        return false;
    }
}

persegiPanjang persegiPanjang::operator-(persegiPanjang const &new_var){
    persegiPanjang temp(0,0,0,0);
    if (*this == new_var){
        temp.x_min = max(this-> x_min,new_var.x_min);
        temp.y_min = max(this-> y_min,new_var.y_min);
        temp.x_max = min(this-> x_max,new_var.x_max);
        temp.y_max = min(this-> y_max,new_var.y_max);
    }else{
        cout << "Kedua bangun tidak beririsan" << endl;
    }
    return temp;
}

persegiPanjang persegiPanjang::operator+(persegiPanjang const &new_var){
    persegiPanjang temp(0,0,0,0);
    if (*this == new_var){
        temp.x_min = min(this-> x_min,new_var.x_min);
        temp.y_min = min(this-> y_min,new_var.y_min);
        temp.x_max = max(this-> x_max,new_var.x_max);
        temp.y_max = max(this-> y_max,new_var.y_max);
    }else{
        cout << "Objek tidak beririsan" << endl;
    }
    return temp;
}

void persegiPanjang::operator--(){
    float length = 0, width = 0, midpoint_x = 0, midpoint_y = 0;
    length = this->x_max - this->x_min; length = abs(length);
    width = this->y_max - this->y_min; width = abs(width);
    midpoint_x = this->x_min + length/2;
    midpoint_y = this->y_min + width/2;

    length = length / 2;
    width = width / 2;

    this->x_min = midpoint_x - length/2;
    this->y_min = midpoint_y - width/2;
    this->x_max = midpoint_x + length/2;
    this->y_max = midpoint_y + width/2;
}

void persegiPanjang::operator++(){
    float length = 0, width = 0, midpoint_x = 0, midpoint_y = 0;
    length = this->x_max - this->x_min; length = abs(length);
    width = this->y_max - this->y_min; width = abs(width);
    midpoint_x = this->x_min + length/2;
    midpoint_y = this->y_min + width/2;

    length = length * 2;
    width = width * 2;

    this->x_min = midpoint_x - length/2;
    this->y_min = midpoint_y - width/2;
    this->x_max = midpoint_x + length/2;
    this->y_max = midpoint_y + width/2;
}


float persegiPanjang::operator[](int pilihan){
    switch (pilihan){
    case 1:
        return this->x_min;
        break;
    case 2:
        return this->x_max;
        break;
    case 3:
        return this->y_min;
        break;
    case 4:
        return this->y_max;
        break;
    }
    return 0;
}