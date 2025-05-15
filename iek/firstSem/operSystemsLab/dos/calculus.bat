@ECHO OFF
CLS
TITLE Ipologistis Arithmwn
ECHO Dwse ton proto arithmo
SET /P Num1Add=
ECHO Dwse ton deftero arithmo
SET /P Num2Add=
SET /A Ans=%Num1Add%+%Num2Add%
ECHO To apotelesma einai: %Ans%
PAUSE