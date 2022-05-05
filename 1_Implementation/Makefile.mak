#TargetName : Dependencies
#<TAB>commands

Build : Sumof.c 
	gcc Sumof.c
	

Run : Sumof.out
	./Sumof.out

	
	

Clean :
	rm -rf *.o *.out *.s *.i