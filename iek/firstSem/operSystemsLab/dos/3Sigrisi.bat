@ECHO OFF
CLS
SETLOCAL
TITLE Checker
ECHO Dwse mou ena arithmo
SET /P Protos=
ECHO Dwse mou ena allo arithmo
SET /P Defteros=
ECHO Oi sinthikes pou isxioun gia %Protos% kai %Defteros%
IF %Protos% EQU %Defteros% (ECHO Oi arithmoi einai isoi) ELSE (GOTO:check)
PAUSE
:check
IF %Protos% LSS %Defteros% (ECHO %Protos% einai mikroteros  apo ton %Defteros%) ELSE (ECHO %Defteros% einai mikroteros apo ton %Protos%)
PAUSE
GOTO:EOF
ENDLOCAL