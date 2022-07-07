s21_math:
	gcc -c ./func/*.c
	ar rcs s21_math.a *.o
	ranlib s21_math.a
	rm ./*.o

test:
	gcc -c ./tests/*.c
	gcc *.o s21_math.a -lcheck -lm -lpthread -o test_run/test

clean:
	rm -rf *.o *.gch a.out  
