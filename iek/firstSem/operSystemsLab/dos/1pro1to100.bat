@ECHO OFF
CLS
SETLOCAL ENABLEDELAYEDEXPANSION
TITLE Propaidia 1 eos 10

FOR /L %%Y IN (12,1,22) DO (
							ECHO PROPAIDIA TOY %%Y
							FOR /L %%X IN (1,1,10) DO (CALL :propaidia %%Y %%X)
							)
PAUSE
EXIT

:propaidia
	SET /A RESULT = %1 * %2
	ECHO %1 * %2 = %RESULT%
ENDLOCAL
