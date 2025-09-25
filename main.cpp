#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

int main()
{
    std::cout<<"Testing Top level"<<std::endl;
    std::cout << "Enter a list: ";
    list p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);


    //top level function
    std::cout << "The number of nodes at the top level of the input list is: "
        << numNodesAtTheTopLevel(p) << std::endl;


    std::cout<<"Testing is_lat function" << std::endl;
    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);


    // is_lat() function
    if ( is_lat(p)) {
        std::cout<< " The list consists entirely of atoms" << std::endl;
    }else {
        std::cout <<" The list does not consists entirely of atoms" << std::endl;
    }


    std::cout<<"Testing member function" << std::endl;

    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an atom: ";
    list q = read_list();
    std::cout << "Echoing the atom that you entered below." << std::endl;
    write_list(q);


    //member function
    if (member(q, p)) {
        std::cout << "The list contains that atom.\n";
    } else {
        std::cout << "The list does not contain that atom.\n";
    }


    std::cout<<"Testing last() function" << std::endl;

    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);


    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);


    //last function
    std::cout<<"The last element of the list is: ";
    write_list(last(p));


    std::cout<<"Testing pair() function" << std::endl;
    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an list: ";
     q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(q);



    //pair function
    std::cout << "The list of pairs are : " << std::endl;
    write_list(pair(p, q));


    std::cout<<"Testing first() function" << std::endl;

    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    //first function
    std::cout << "a list of the first element from each sublist: "<< std::endl;
    write_list( first(p));


    std::cout<<"Testing flat function" << std::endl;

    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    //flat
    std::cout << "a list in which all nested parentheses are removed" <<std::endl;
    write_list(flat(p));

    std::cout<<"Testing two of the same function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an list: ";
     q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(q);

    //two of the same function
    if (two_of_same(p, q)) {
        std::cout << "p and q contain at least one atom in common" << std::endl;
    }else {
        std::cout << "p and q do not contain at least one atom in common" << std::endl;
    }

    std::cout<<"Testing equals function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an list: ";
     q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(q);


    // equals function
    if (equal(p, q)) {
        std::cout << "p and q are identical recursive list" << std::endl;
    }else {
        std::cout << "p and q are not identical recursive list" << std::endl;
    }


    std::cout<<"Testing total_reverse function" << std::endl;
    std::cout << "Enter a list: ";
    p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    //total reverse function
    std::cout<< "The mirror of the list is: " <<std::endl;
    write_list(total_reverse(p));


    std::cout<<"Testing shape function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    //shape function
    std::cout << "The shape of the original function: " <<std::endl;
    write_list(shape(p));

    std::cout<<"Testing intersection function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an list: ";
     q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(q);

    //intersection
    std::cout<< "atoms that appear in both P and Q are: "<<std::endl;
    write_list(intersection(p,q));



    std::cout<<"Testing union function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an list: ";
     q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(q);

    //union
    std::cout<< "atoms that appear in P and Q are: "<<std::endl;
    write_list(list_union(p,q));



    std::cout<<"Testing substitute function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an atom to replace: ";
    q = read_list();
    std::cout << "Echoing the atom that you entered below." << std::endl;
    write_list(q);

    std::cout << "Enter replacing atom: ";
    list g = read_list();
    std::cout << "Echoing the atom that you entered below." << std::endl;
    write_list(g);
    //substitue
    std:: cout << "The substitute list is: " << std::endl;
    write_list(substitute(q, g, p));




    std::cout<<"Testing remove function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an atom: ";
     q = read_list();
    std::cout << "Echoing the atom that you entered below." << std::endl;
    write_list(q);

    //remove function
    std::cout<<"The list with the removed atom: "<<std::endl;
    write_list(remove(p,q));


    std::cout<<"Testing subset function" << std::endl;
    std::cout << "Enter a list: ";
     p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);

    std::cout << "Enter an list: ";
     q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(q);


    //subset function
    std::cout<<"Is P a subset of Q: "<<std::endl;
    if (subset(p,q)) {
        std::cout << "p is a subset of Q" << std::endl;
    }else {
        std::cout << "p is NOT a subset of Q" << std::endl;
    }


    return 0;
}
