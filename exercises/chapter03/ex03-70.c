union ele {
	struct {
		long *p;
		long y;
	} e1;
	struct {
		long x;
		union ele *next;
	} e2;
};

void proc(union ele *up) {
	up->e2->next = *() - ;
}
