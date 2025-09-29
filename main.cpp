#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

int main()
{

    int choice;

    std::cout << "Enter choice ( 1 - 17 ):" << std::endl;
    std::cout << "1. Testing Top level" << std::endl;
    std::cout << "2. Testing is_lat function" << std::endl;
    std::cout << "3. Testing member function" << std::endl;
    std::cout << "4. Testing last() function" << std::endl;
    std::cout << "5. Testing pair() function" << std::endl;
    std::cout << "6. Testing first() function" << std::endl;
    std::cout << "7. Testing flat function" << std::endl;
    std::cout << "8. Testing two of the same function" << std::endl;
    std::cout << "9. Testing equals function" << std::endl;
    std::cout << "10. Testing total_reverse function" << std::endl;
    std::cout << "11. Testing shape function" << std::endl;
    std::cout << "12. Testing intersection function" << std::endl;
    std::cout << "13. Testing union function" << std::endl;
    std::cout << "14. Testing substitute function" << std::endl;
    std::cout << "15. Testing remove function" << std::endl;
    std::cout << "16. Testing subset function" << std::endl;
    std::cout << "Enter choice: ";

    std::cin>>choice;

    switch(choice) {
        case 1: {
            std::cout<<"Testing Top level"<<std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);


            //top level function
            std::cout << "The number of nodes at the top level of the input list is: "
                << numNodesAtTheTopLevel(p) << std::endl;
            break;
        }
        case 2: {
            std::cout<<"Testing is_lat function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);


            // is_lat() function
            if ( is_lat(p)) {
                std::cout<< " The list consists entirely of atoms" << std::endl;
            }else {
                std::cout <<" The list does not consists entirely of atoms" << std::endl;
            }
            break;
        }
            case 3: {

            std::cout<<"Testing member function" << std::endl;

            std::cout << "Enter a list: ";
            list p = read_list();
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
            break;

        }
        case 4: {
            std::cout<<"Testing last() function" << std::endl;

            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            //last function
            std::cout<<"The last element of the list is: ";
            write_list(last(p));
            break;
        }
        case 5: {
            std::cout<<"Testing pair() function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an list: ";
            list q = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(q);



            //pair function
            std::cout << "The list of pairs are : " << std::endl;
            write_list(pair(p, q));
            break;

        }
        case 6:{
            std::cout<<"Testing first() function" << std::endl;

            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            //first function
            std::cout << "a list of the first element from each sublist: "<< std::endl;
            write_list( first(p));
            break;
        }
        case 7: {
            std::cout<<"Testing flat function" << std::endl;

            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            //flat
            std::cout << "a list in which all nested parentheses are removed" <<std::endl;
            write_list(flat(p));
            break;

        }
        case 8: {
            std::cout<<"Testing two of the same function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an list: ";
            list q = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(q);

            //two of the same function
            if (two_of_same(p, q)) {
                std::cout << "p and q contain at least one atom in common" << std::endl;
            }else {
                std::cout << "p and q do not contain at least one atom in common" << std::endl;
            }
            break;

        }
        case 9: {

            std::cout<<"Testing equals function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an list: ";
            list q = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(q);


            // equals function
            if (equal(p, q)) {
                std::cout << "p and q are identical recursive list" << std::endl;
            }else {
                std::cout << "p and q are not identical recursive list" << std::endl;
            }
            break;

        }
        case 10: {
            std::cout<<"Testing total_reverse function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            //total reverse function
            std::cout<< "The mirror of the list is: " <<std::endl;
            write_list(total_reverse(p));
            break;


        }
        case 11: {

            std::cout<<"Testing shape function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            //shape function
            std::cout << "The shape of the original function: " <<std::endl;
            write_list(shape(p));
            break;

        }
        case 12: {
            std::cout<<"Testing intersection function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an list: ";
            list q = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(q);

            //intersection
            std::cout<< "atoms that appear in both P and Q are: "<<std::endl;
            write_list(intersection(p,q));
            break;
        }
        case 13: {

            std::cout<<"Testing union function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an list: ";
            list q = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(q);

            //union
            std::cout<< "atoms that appear in P and Q are: "<<std::endl;
            write_list(list_union(p,q));
            break;
        }
        case 14: {
            std::cout<<"Testing substitute function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an atom to replace: ";
            list q = read_list();
            std::cout << "Echoing the atom that you entered below." << std::endl;
            write_list(q);

            std::cout << "Enter replacing atom: ";
            list g = read_list();
            std::cout << "Echoing the atom that you entered below." << std::endl;
            write_list(g);
            //substitue
            std:: cout << "The substitute list is: " << std::endl;
            write_list(substitute(q, g, p));
            break;

        }
        case 15: {
            std::cout<<"Testing remove function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an atom: ";
            list q = read_list();
            std::cout << "Echoing the atom that you entered below." << std::endl;
            write_list(q);

            //remove function
            std::cout<<"The list with the removed atom: "<<std::endl;
            write_list(remove(p,q));
            break;
        }

        case 16: {
            std::cout<<"Testing subset function" << std::endl;
            std::cout << "Enter a list: ";
            list p = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(p);

            std::cout << "Enter an list: ";
            list q = read_list();
            std::cout << "Echoing the list that you entered below." << std::endl;
            write_list(q);


            //subset function
            std::cout<<"Is P a subset of Q: "<<std::endl;
            if (subset(p,q)) {
                std::cout << "p is a subset of Q" << std::endl;
            }else {
                std::cout << "p is NOT a subset of Q" << std::endl;
            }
        }
            break;

    }



    return 0;
}
