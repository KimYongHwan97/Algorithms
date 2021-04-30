 #include<iostream>
#include<cstring>
using namespace std;
 
class Book {
    char *title; // ���� ���ڿ� 
    int price; // ���� 
public:
    Book(const Book& b); 
    Book(char* title, int price); 
    ~Book();
    void set(const char* title, int price);    
    void show() { cout << title << ' ' << price << "��" << endl; }
};
 
Book::Book(char* title, int price){
    this->price = price;
    int size = strlen(title) + 1;
    this->title = new char[size];
    strcpy(this->title, title);
}
 
Book::Book(const Book& b){
    this->price = b.price;
    int size = strlen(b.title) + 1;
    this->title = new char[size];
    strcpy(this->title, b.title);
}
 
Book::~Book() { 
    delete [] title; 
}
 
void Book::set(const char* title, int price) {
    if(this->title) delete [] this->title;
    this->price = price;
    int size = strlen(title) + 1;
    this->title = new char[size];
    strcpy(this->title, title);
}
 
 
int main() {
    Book cpp("��ǰ C++", 10000); 
    Book java = cpp; // ���� ������ ȣ��� 
    java.set("��ǰ�ڹ�", 12000);
    cpp.show();
    java.show();
}

