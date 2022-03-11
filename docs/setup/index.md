# Setup

Si eres nuevo en el ecosistema de C/C++ es posible que no estes familiarizado del todo
con conceptos como _toolchain_, _compilidor_, _linker_ entre otros por eso esta guia te ayudara
a configurar todo lo que necesitaras para el curso y para poder usar el codigo en este repositorio.

Dado que C/C++ generan archivos binarios que son dependientes de la plataforma, para cada
sistema operativo existen conjustos de herramientas o formas de configuracion distintas
en esta guia cubriremos las combinaciones mas comunes.

Como regla general necesitaras los siguientes componentes
- Compiler (Cada compilador ya trae su toolchain completa junto con las librerias estandar)
- IDE/Editor de texto para poder trabajar con el codigo fuente
- CMake Herramienta de build para poder compilar el codigo fuente independiente de la combinacion de Compilador/IDE que uses

## Windows
El sistema operativo windows es por mucho el mas comun, y si ya has usado algo para programar antes
es posible que ya tengas alguna herramientas instalada, selecciona la que prefieras o si ya la tienes
intalada sigue la guia para esa herramienta.

- [Visual Studio 2019 | 2022](vsstudio.md)
- Visual Studio Code
- [CLion](clion.md)

## Windows 10 + WSL2

## Linux

### Ubuntu _20.04_