#include "tableau_dynamique.h"




t_tab_dyn* create_tab_dyn(int base_capactiy){
    int *tab = malloc(sizeof(int)*base_capactiy);
    t_tab_dyn* td = malloc(sizeof(t_tab_dyn));
    td->tab = tab;
    td->length = 0;
    td->capacity = base_capactiy;
    return td;
}

void print_tab_dyn(t_tab_dyn* td){
    for(int i=0; i<td->length; i++){
        printf("%d ", td->tab[i]);
    }
    printf("\n");
}

void insert_tab_dyn(t_tab_dyn* td, int elt){
    if(td->length >= td->capacity){
        int *new_tab = malloc(sizeof(int)*td->capacity*2);
        for(int i=0; i<td->length; i++){
            new_tab[i] = td->tab[i];
        } 
       free(td->tab);
        td->tab = new_tab;
        td->capacity = td->capacity*2; //*=2
    }
    td->tab[td->length] = elt;
    td->length += 1;
}

void remove_at(t_tab_dyn* td, int index){
    for(int i= index; i < td->length-1; i++){
      td->tab[i] = td->tab[i+1];  
    }
    td->length -= 1;
}

void replace_at(t_tab_dyn* td, int index, int elt){
    td->tab[index]=elt;
}

int element_at(t_tab_dyn* td, int index){
    return td->tab[index];
}


void free_tab(t_tab_dyn* td){
    free(td->tab);
    free(td);
}


 

