CC=clang

.PHONY: learn_tsa


learn_tsa: learn_tsa.o
	$(CC) $^ -o $@

