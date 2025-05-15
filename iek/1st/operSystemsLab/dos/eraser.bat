@echo on
cls
mkdir example
cd example
call > one.txt
call > two.txt
dir
del *.txt
pause
cd..
rmdir example
