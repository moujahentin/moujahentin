@ECHO OFF
CLS
SETLOCAL
TITLE Propaidia
ECHO Dwse ena arithmo
SET /P Target=
ECHO Propaidia tou %Target%
CALL :propaidia_target
PAUSE
EXIT
:propaidia_target
	SET /A X =%X%+1
	SET /A LIMIT = 10
	SET /A C=%X%*%Target%
	ECHO %X% x %Target% = %C% 
	IF %X% LSS %LIMIT% GOTO:propaidia_target ELSE GOTO:EOF
ENDLOCAL