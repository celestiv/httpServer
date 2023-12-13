# httpServer
Simple http server written on C++

# Simple http-server на C++

## Sources:

* [Building an HTTP Server From Scratch in C++](https://medium.com/@osasazamegbe/showing-building-an-http-server-from-scratch-in-c-2da7c0db6cb7)

* [Beej's Guide to Network Programming](https://beej.us/guide/bgnet/html/split/)

* [How to send messages over sockets and create your own messanging protocols in C++](https://habr.com/en/articles/779176/)

* [Simple DNS Server](https://sourcedaddy.com/networking/simple-dns-server.html)

* [http documentation on MDN](https://developer.mozilla.org/en-US/docs/Web/HTTP)

## Usage:

1. ```docker build . -t server```

Создаем образ на основе файлов в текущей директории, скачиваем туда все необходимые зависимости

2. ```docker run -d -p 81:8080```

Собираем и запускаем контейнер на основе образа сервера. Контейнер будет запущен в фоновом режиме с флагом ```-d```, приветственная страница сервера будет доступна по адресу ```localhost:81```
