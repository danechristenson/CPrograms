@echo off

mkdir ..\..\build
pushd ..\..\build
cl -FC -Zi ..\..\CPrograms\code\KandR.c
popd
