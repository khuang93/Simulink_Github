set MATLAB=D:\Programs\MATLAB2019a

cd .

if "%1"=="" ("D:\Programs\MATLAB~3\bin\win64\gmake"  -f MATLAB0.mk all) else ("D:\Programs\MATLAB~3\bin\win64\gmake"  -f MATLAB0.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
