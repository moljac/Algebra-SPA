

all: 					\
						clean \
						lab_01_01_pico_stub \
						lab_01_02_mini_stub \
						lab_01_03_andreicek_original
						

lab_01_01_pico_stub:
						cd lab-01-01-pico_stub
						make all
						
						
lab_01_02_mini_stub:
						cd lab-01-02-mini_stub
						make all

						
lab_01_03_andreicek_original:	
						cd lab-01-03-andreicek_original
						make all

						
						
clean:
			rm -fr bin\
			rm -fr obj\
			rm -fr Debug\
			rm -f a.out main_executable *.o *.obj .DS_Store	
			rm -f *.suo *.v11.suo *.sdf *.user *.userprefs