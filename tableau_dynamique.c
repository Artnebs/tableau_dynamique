#include <stdlib.h>
#include <stdio.h>


struct tab_dyn { 
    int * tab; 
    int length;
    int capacity;
};

struct tab_dyn* create_tab_dyn(int base_capactiy){
    int *tab = malloc(sizeof(int)*base_capactiy);
    struct tab_dyn* td = malloc(sizeof(struct tab_dyn));
    td->tab = tab;
    td->length = 0;
    td->capacity = base_capactiy;
    return td;
}

void print_tab_dyn(struct tab_dyn* td){
    for(int i=0; i<td->length; i++){
        printf("%d ", td->tab[i]);
    }
    printf("\n");
}

void insert_tab_dyn(struct tab_dyn* td, int elt){
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

void remove_at(struct tab_dyn* td, int index){
    for(int i= index; i < td->length-1; i++){
      td->tab[i] = td->tab[i+1];  
    }
    td->length -= 1;
}

void replace_at(struct tab_dyn* td, int index, int elt){
    td->tab[index]=elt;
}

int element_at(struct tab_dyn* td, int index){
    return td->tab[index];
}


void free_tab(struct tab_dyn* td){
    free(td->tab);
    free(td);
}


 

int main(int argc, char** argv){

    struct tab_dyn* tableau1 = create_tab_dyn(2);
    insert_tab_dyn(tableau1, 1);
    print_tab_dyn(tableau1);
    insert_tab_dyn(tableau1, 2);
    insert_tab_dyn(tableau1, 3);
    print_tab_dyn(tableau1);

}