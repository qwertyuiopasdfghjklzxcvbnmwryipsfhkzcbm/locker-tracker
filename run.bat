@echo off
set SOURCE_FILE=main.cpp
set OUTPUT_FILE=run.exe
g++ -o %OUTPUT_FILE% %SOURCE_FILE%
%OUTPUT_FILE%
