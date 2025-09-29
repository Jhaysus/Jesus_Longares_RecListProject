#include "reclists.hpp"
#include "solutions.hpp"

// As you implement functions in this file, you should add the
// function-prototype to the solutions.hpp.
//


int numNodesAtTheTopLevel(list p) {
    // p is one of
    //    a null list
    //    an atom
    //    a recursive list

    // The function returns the number of nodes at the top-level
    // of p.

    if( is_null(p) )
        return 0;
    if( is_atom(p) )
        return 1;
    return 1 + numNodesAtTheTopLevel(cdr(p));
}

bool is_lat(list p) {
   // Takes a list (possibly empty) but not an atom and returns true if the list consists entirely of atoms

    //confused for empty list
    if ( is_null(p)) {// you want to stop
        return true;
    }

    if (is_atom(car(p))) { //continue going through the list if they are atoms else return false
        return is_lat(cdr(p));
    }
    return false;
}


bool member( list p, list q) {
    //p is an atom
    //q is a list (possibly empty,not an atom)
    //Returns true if p appears anywhere in q
    if ( is_null(q)) { //stop
        return false;
    }

    if ( is_atom(car(q))) {
        //found
        if (eq(car(q) , p)) {
            return true;
        }
        //go right
        return member(p, cdr(q));
    }
    //go down and right
    return member(p, cdr(q)) || member(p, car(q));
}

list last( list p) {
    // p is a non-empty list and is not an atom
    //return last element
    if ( is_null( cdr(p))) {
        return car(p);
    }
    return last(cdr(p));

}


list pair( list p, list q) {
    //p is a list of atoms
    //q is a list of atoms
    //both the same length
    //returns list of pairs

    if ( is_null( p)) {
        return null();
    }

    return cons( cons(car(p), cons(car(q), null())) , pair( cdr(p), cdr(q)) );
}


list first( list p) {
    //p is a list of elements
    //returns a list of the first element from each sublist
    //follows the same idea as append
    if ( is_null(p)) {
        return p;
    }
    return cons( car(car(p)), first(cdr(p)) );
}

list append( list p, list q) {
    if (is_null(p))
        return q;

    return cons(car(p), append(cdr(p), q));

}

list flat(list p) {
    //p is a list(probably nested)
    if ( is_null(p)) {
        return p;
    }
    //if it is current is an atom, just add to list
    if ( is_atom( car ( p) )) {
        return cons( car( p), flat( cdr( p)));
    }
    //continue going through list ( down and right)
    return append( flat( car( p)), flat ( cdr( p)) );

}

bool two_of_same(list p, list q) {
    //fix this one, only at level one
    //P & Q are both list( not atoms)
    //if at least P and Q contain one atom in common
    //not the same size
    if ( is_null(p) || is_null(q) ) {
        return false;
    }
    //check if there is an atom for p
    if ( is_atom(car(p))) {
        return member(car(p), q);
    }

    if ( two_of_same(car(p), q)) {
        return true;
    }
    return two_of_same(cdr(p), q);

}

bool equal(list p, list q) {
    //two recursive list if they are idential
    //parathesis and atoms must match
    //they might not even be the same size
    //return true if they are the same
    if ( is_null(p) && is_null(q) ) {
        return true;
    }
    if ( is_null(p) && ! is_null(q) ) {
        return false;
    }
    if ( ! is_null(p) && is_null(q) ) {
        return false;
    }

    if ( is_atom(car(p)) && is_atom(car(q)) ) {
        if ( eq( car(p), car(q)) ) {
            return equal( cdr(p), cdr(q) );
        }
        return false;
    }

    if (!is_atom( car(p)) && !is_atom( car(q)) ) {
        return equal( car(p) ,  car( q)) && equal( cdr(p), cdr(q) );
    }

    return false;

}

list total_reverse(list p) {
    //takes a reursive list
    //return mirror
    if (is_null(p)) {
        return p;
    }
    if ( is_atom(car(p)) ) {
        return append(total_reverse(cdr(p)), cons(car(p), null()));
    }
    return append(total_reverse(cdr(p)), cons(total_reverse(car(p)), null()));
}

list shape(list p) {
    //list p is a list(not atom)
    //returns a recursive list that consists only of the parentheses structure of the original
    if (is_null(p)) {
        return null();
    }

    if ( is_atom( car(p))) {
        //you are adding () and continue through
        return shape(cdr(p));
    }
    //go down and right
    return cons(shape(car(p)), shape(cdr(p)));
}

list intersection(list p, list q) {
    //P and Q are distinct list of atoms
    //return list of atoms that appear in both P and Q
    //if none, then return null

    if ( is_null(p) || is_null(q) ) {
        return null();
    }
    //check each atom in p if they exist in q
    if (member( car(p), q)) {
        // grab the atom and continue the search
        return cons(car(p), intersection(cdr(p), q));
    }
    //continue
    return intersection(cdr(p), q);

}

list list_union(list p, list q) {
    //P and Q are distinct list of atoms
    //return list of atoms that appear in P and Q but no repetition
    if ( is_null(p)) {
        return q;
    }
    //check if exist in both then check if exist in current list
    if ( member( car(p), q)) {
        return list_union(cdr(p), q);
    }
    return cons(car(p), list_union(cdr(p), q) );

}

list substitute( list old, list new_list, list p) {
    //Takes a list of atoms (atoms may repeat) and returns a copy of p with every occurrence of atom old replaced by atom new.
    //p is a list of atoms
    //old is an atom
    //new is an atom
    // substitute(a, x, (a b a c)) = (x b x c)
    if ( is_null(p)) {
        return null();
    }

    if (eq(car(p), old)) {
        //replace the atom with new
        return cons(new_list, substitute(old, new_list, cdr(p)));
    }
    //continue through the list
    return cons(car(p), substitute(old, new_list, cdr(p)));
}


list remove(list p, list q) {
    //p is a list of atoms
    //q is an atom
    //return a list that does not contain a
    if ( is_null(p)) {
        return null();
    }
    if ( eq(car( p), q)) {
        return remove(cdr(p), q);
    }
    return cons( car(p), remove(cdr(p), q));
}

bool subset(list p, list q) {
    //stop
    if ( is_null(p)) {
        return true;
    }
    //check through each atom and see if they exist in q
    if (is_atom( car(p)) ) {
        if (member(car(p), q)) {
            return subset(cdr(p), q);
        }
        return false;
    }
    //go in depth and continue
    if ( subset(car(p), q)) {
        return subset(cdr(p), q);
    }

    return false;
}


// list premute(list p) {
//     if (is_null(p)) {
//         return p;
//     }
//     if ( member( car( p), car(premute(p)))) {
//         return premute(cdr(p));
//     }
//     return cons(cons(car(p), null()), append(premute(cdr(p))));
//
// }






