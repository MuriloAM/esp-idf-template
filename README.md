# esp-idf-template

Este é um framework para trabalhos com ESP32, oferecendo os acessos aos recursos básicos da IDF para os próximos projetos.

## Começando

Para executar o projeto, será necessário os seguintes hardwares:

- IDF da espressif minimo v3.3 [ESP-IDF](https://github.com/espressif/esp-idf.git)
- ESP32
- Placa de leitura de corrente baseado no CI HWL8012
- Acesso a internet
- Equipamento ou dispositivo elétrico com potência conhecida

## Desenvolvimento

Para iniciar o desenvolvimento, é necessário clonar o projeto do GitHub num diretório de sua preferência:

```shell
cd "diretorio de sua preferencia"
git clone https://github.com/MuriloAM/esp-idf-template.git
```

### Construção

Para construir o projeto com o ESP IDF, deve-se criar o sdkconfig através do comando:

```shell
idf.py menuconfig
```

Após finalizar as configurações do dispositivo, compile o código através do comando:

```shell
idf.py build
```

Tudo certo após compilar o código, execute a escrita da flash do seu ESP32 com o comando[substitua o COMx pela porta COM em que seu ESP32 está registrado em seu computador, você pode verificar isso no menu 'Gerenciador de Dispositivos' no windows]:

```shell
idf.py -p COMx flash
```

## Recursos

Esta é a lista de coisas a fazer para finalizar o projeto:

- Conexão com WiFi. [:heavy_check_mark:]
- MQTT. [:]
- Novos recursos a serem adicionados....



## Features

O projeto pode ser usado como modelo para iniciar o desenvolvimento de um projeto para ESP32 utilizando FreeRTOS.

## Licença

Não se aplica.
