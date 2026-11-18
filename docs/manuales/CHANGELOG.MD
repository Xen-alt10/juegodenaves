# Registro de cambios — Manuales

Este archivo registra los cambios realizados en la documentación de `docs/manuales/`.
El formato sigue [Keep a Changelog](https://keepachangelog.com/es-ES/1.1.0/) y las versiones siguen [Versionado Semántico](https://semver.org/).

## [No publicado]

*Nada registrado hasta el momento.*

## [1.0.0] - 2026-11-17

### Agregado

- `manual_usuario.md`: guía para quien juega: requisitos, puesta en marcha, controles, objetivo y puntuación, lectura del HUD, final de la partida y solución de problemas. Incluye la referencia a la captura de `capturas/combate_consola.png`.
- `manual_programador.md`: documentación técnica del código: estructura del repositorio, compilación con g++/MSVC, arquitectura del bucle de juego, referencia de las clases `Nave`, `Asteroide` y `Bala`, descripción de `main()`, gestión de memoria, puntos de personalización y limitaciones conocidas.
- Este registro de cambios, con la definición del formato y las convenciones de versionado.

### Notas

- El archivo `CHANGELOG.MD` existía desde el 23/10/2026 sin contenido; esta es su primera entrada registrada.
- Los manuales documentan el estado actual de `src/main.cpp`. No modifican el funcionamiento del juego.
- `funcionalidad_1_score.cpp` se menciona como material de pista, no como código compilable.
