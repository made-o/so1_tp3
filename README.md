# Trabajo Practico #3 - Sistemas Operativos I	

### Integrantes:
- Oroná, Madeléin Ayelén - 37 852 092
- Piñero, Tomás Santiago - 39 445 871

## Información importante:

El proyecto se encuentra realizado para el sistema 
operativo de Linux, para una arquitectura de 64 bits.


### Guia de Instalación y Uso.

El proyecto se encuentra contenido en formato .zip. 
Luego de que descomprima se puede ejecutar el programa con los siguientes pasos:


* Desde la carpeta "encrypter":
```sh
$ make
$ insmod encrypter.ko
$ mknod -m 0666 /dev/encrypter c 100 0
```

* Desde la carpeta "decrypter":
```sh
$ make
$ insmod decrypter.ko
$ mknod -m 0666 /dev/decrypter c 101 0
```

## Funciones a realizar:

ESCRIBIR EN EL DEVICE FILE CON <echo>:
```sh
$ echo abcde > /dev/encrypter
```

LEER EL CONTENIDO DEL DEVICE FILE */dev/encrypter* CON <cat>:
```sh
$ cat /dev/encrypter
```
La salida debería ser la cadena: "bcdef"


ENVIAR LA CADENA ENCRIPTADA AL DEVICE FILE */dev/decrypter* :
```sh
$ cat /dev/encrypter > /dev/decrypter
```


LEER EL CONTENIDO DEL DEVICE FILE */dev/decrypter* CON <cat>:
```sh
$ cat /dev/decrypter
```
La salida debería ser la cadena inicial: "abcde"


### NOTA: 
## Si se desea remover el dispositivo, emplear el comando:
```sh
$ rrmod decrypter
```

```sh
$ rrmod encrypter
```# so1_tp3
