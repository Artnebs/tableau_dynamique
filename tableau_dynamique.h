#ifndef TABLEAU_DYNAMIQUE_H
#define TABLEAU_DYNAMIQUE_H


#include <stdlib.h>
#include <stdio.h>


typedef struct{ 
    int * tab; 
    int length;
    int capacity;
} t_tab_dyn;



t_tab_dyn* create_tab_dyn(int base_capactiy);
void insert_tab_dyn(t_tab_dyn* td, int elt);
void print_tab_dyn(t_tab_dyn* td);
void print_tab_dyn(t_tab_dyn* td);
void remove_at(t_tab_dyn* td, int index);
void replace_at(t_tab_dyn* td, int index, int elt);
int element_at(t_tab_dyn* td, int index);
void free_tab(t_tab_dyn* td);


#endif 