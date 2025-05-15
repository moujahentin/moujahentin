@echo off
cls
setlocal

call :hello de gomena tha vrei mike o
exit

:hello
	echo  %6 %5 %1 %3 %4 %2
	pause 
	goto:eof
endlocal