typedef struct tnodeone* tpointer;

struct tnodeone {
    tpointer llink;
    int id;
    char grade;
    tpointer rlink;
};

void sorting(tpointer troot) {
    if (troot) {
        sorting(troot->llink);
        printf("%d ", troot->id);
        sorting(troot->rlink);
    }
}

void gradeA(tpointer troot) {
    if (troot) {
        gradeA(troot->llink);
        if (troot->grade == 'A')
            printf("%d %d\n", troot->id, troot->grade);
        sorting(troot->rlink);
    }
}