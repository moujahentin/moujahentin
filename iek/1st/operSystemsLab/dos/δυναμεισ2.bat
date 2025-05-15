@echo off
setlocal enabledelayedexpansion

set "base=2"
set "exponent=1"

:loop
if %exponent% leq 33 (
    echo %base% ^ %exponent% = !result!
    set /a "result=!base! * !result!"
    set /a "exponent+=1"
    goto loop
)
pause
endlocal
