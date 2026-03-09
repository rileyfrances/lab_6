#include <iostream>
using namespace std;

class Item{

    private:
        static int totalItems;
        string name;
        int value;

    public:
      Item(std::string name = "Scrap", int value = 0);
        static int getTotalItems();
        static void incrementTotalItems();
        string getName() const{
            return name;
        }

        int getValue () const{
            return value;
        }
        void display()const{
            cout<<"["<<getName()<<"] (Value: ["<<getValue()<<"]"<<endl;
            return;
        };
}