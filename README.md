# alg-gen-ros
Paquetes:
- alg_gen: tiene el código para la práctica
- intro_pkg: ejemplo hecho en clase
- sim_pkg & msgs_control: sirve para la simulacion del pid
- sensor_interfaces: interfaces con el pid, elemplo hecho en clase

## Configuración inicial

```
colcon build --packages-select alg_gen
source install/setup.bash
```