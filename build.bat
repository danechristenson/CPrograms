@echo off

mkdir ..\build
pushd ..\build
cl -FC -Zi ..\Cprograms\code\KandR.c
popd
