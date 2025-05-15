@echo on
cls
color 4
setlocal
title Saltsas
prompt "O billis einai saltsas"

for /L %%x in (1,1,10) do call: Saltsas
pause
exit
:Saltsas
echo 
echo
echo
endlocal

