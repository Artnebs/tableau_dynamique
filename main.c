#include "tableau_dynamique.h"


int main(int argc, char** argv){

    struct tab_dyn* tableau1 = create_tab_dyn(2);
    insert_tab_dyn(tableau1, 1);
    print_tab_dyn(tableau1);
    insert_tab_dyn(tableau1, 2);
    insert_tab_dyn(tableau1, 3);
    print_tab_dyn(tableau1);

}