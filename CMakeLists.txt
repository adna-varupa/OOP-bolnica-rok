cmake_minimum_required(VERSION 3.23)
project(BolnicaRok)

set(CMAKE_CXX_STANDARD 14)

add_executable(BolnicaRok main.cpp Pacijent.cpp Pacijent.h BolnickiPacijent.cpp BolnickiPacijent.h AmbulantniPacijent.cpp AmbulantniPacijent.h Bolnica.cpp Bolnica.h)
