@ECHO OFF
CLS
SETLOCAL
TITLE Mesos Oros Vathmwn
ECHO Oi Vathmoi Prepei na einai akeraioi
ECHO Dwse ton prwto vathmo
SET /P Prwtos=
IF %Prwtos% GEQ 11 (GOTO:invalid)
IF %Prwtos% LSS 0 (GOTO:invalid)
ECHO Dwse ton deftero vathmo
SET /P Defteros=
IF %Defteros% GEQ 11 (GOTO:invalid)
IF %Defteros% LSS 0 (GOTO:invalid)
ECHO Dwse ton trito vathmo
SET /P Tritos=
IF %Tritos% GEQ 11 (GOTO:invalid)
IF %Tritos% LSS 0 (GOTO:invalid)
ECHO Dwse ton tetarto vathmo
SET /P Tetartos=
IF %Tetartos% GEQ 11 (GOTO:invalid)
IF %Tetartos% LSS 0 (GOTO:invalid)
SET /A Apotelesma=%Prwtos%+%Defteros%+%Tritos%+%Tetartos%
SET /A Telikos=%Apotelesma%/4
ECHO Telikos Vathmos (Akairaia diairesi) %Apotelesma% / 4 = %Telikos%
IF %Telikos% GEQ 5 (GOTO:success) ELSE (GOTO:failure)
:success
	ECHO Perases
	PAUSE
	GOTO:EOF
:failure
	ECHO Kopikes
	PAUSE
	GOTO:EOF
:invalid
	ECHO Mi apodektos vathmos
	PAUSE
	GOTO:EOF
ENDLOCAL
