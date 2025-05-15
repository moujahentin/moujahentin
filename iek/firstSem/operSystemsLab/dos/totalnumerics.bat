@ECHO OFF
CLS
SET /A a = 10
SET /A b = 2
SET /A c = %a% + %b%
ECHO %c%
SET /A c = %a% - %b%
ECHO %c%
SET /A c = %a% / %b%
ECHO %c%
SET /A c = %a% * %b%
ECHO %c%
PAUSE