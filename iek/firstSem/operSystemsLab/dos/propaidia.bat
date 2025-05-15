@ECHO OFF
CLS
SETLOCAL
TITLE Propaidia tou 2
ECHO Propaidia tou 2
FOR /L %%X IN (1,1,32) DO CALL :propaidia2
PAUSE
EXIT
:propaidia2
SET /A X =%X%+1
SET /A C=%X%*2
ECHO %X% x 2 = %C%
GOTO:EOF
ENDLOCAL