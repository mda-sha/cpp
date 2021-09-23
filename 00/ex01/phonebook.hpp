#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class phonebook{
        int lastAdded;
public:
        contact vasya[8];
        
        phonebook();
        void add();
        void by_index();
        void search();
};
#endif