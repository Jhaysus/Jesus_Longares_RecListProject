## Student Recursive List Project
## Student infromation:
- Jesus Longares
- Id: 008685606
- https://github.com/Jhaysus/Jesus_Longares_RecListProject.git
## Collaboration & Sources
- Partner: None
- Sources: None

## Implementation Details:
- Operates on Recursive list from reclists.hpp
- all algorithms are functional except premute which rely on recursion
  * Is_lat fucntion:
    * complexity: O(n)
    * Takes a list (possibly empty) but not an atom and returns true if the list consists entirely of atoms
  * Member function:
    * complexity: O(n)
    * p is an atom 
    * q is a list (possibly empty,not an atom)
    * Returns true if p appears anywhere in q
  * Last function 
    * p is a non-empty list and is not an atom 
    * return last element
    * complexity: O(n)
  * Pair function 
    * p is a list of atoms 
    * q is a list of atoms 
    * both the same length 
    * returns list of pairs
    * complexity: O(n)
  * First
    * p is a list of elements
    * returns a list of the first element from each sublist
    * follows the same idea as append
  * flat
    * returns a list of atoms
  * two of same
    * fix this one, only at level one
    * P & Q are both list( not atoms)
    * if at least P and Q contain one atom in common
    * not the same size
  * equal
    * two recursive list if they are identical
    * parathesis and atoms must match
    * they might not even be the same size
    * return true if they are the same
  * total reverse
    * takes a reursive list
    * return mirror
    * uses append
    * Complexity: O(n^2)
  * shape
    * list p is a list(not atom)
    * returns a recursive list that consists only of the parentheses structure of the original
  * intersection
    * P and Q are distinct list of atoms 
    * return list of atoms that appear in both P and Q 
    * if none, then return null
    * uses member
  * list union
    * P and Q are distinct list of atoms
    * return list of atoms that appear in P and Q but no repetition
  * substitute
    * Takes a list of atoms (atoms may repeat) and returns a copy of p with every occurrence of atom old replaced by atom new.
    * p is a list of atoms
    * old is an atom
    * new is an atom
  * remove
    * p is a list of atoms
    * q is an atom
    * return a list that does not contain a
  * subset
    * True if every atom occurring anywhere in p appears somewhere in (possibly nested) q. Traverses deeply in p and calls member.
# Not implemented
  * Premute function
    * commeneted out