#ifndef TABLEAU_DYNAMIQUE_H
#define TABLEAU_DYNAMIQUE_H


#include <stdlib.h>
#include <stdio.h>


struct tab_dyn { 
    int * tab; 
    int length;
    int capacity;
};

struct tab_dyn* create_tab_dyn(int base_capactiy);
void insert_tab_dyn(struct tab_dyn* td, int elt);
void print_tab_dyn(struct tab_dyn* td);
void print_tab_dyn(struct tab_dyn* td);
void remove_at(struct tab_dyn* td, int index);
void replace_at(struct tab_dyn* td, int index, int elt);
int element_at(struct tab_dyn* td, int index);
void free_tab(struct tab_dyn* td);


#endif 