# StressTestC- “Абстрактный конфигуратор микропроцессорного оборудования”

Проект находится в папке test.

1.Реализованная графическая часть проекта.
![image](https://user-images.githubusercontent.com/81958264/203873670-a1b7dc98-5ab2-476f-b1e6-b36bbb4269aa.png)


2.В проект добавлена библиотека RapidJson. (Местоположение 1\Test\external\) Не вся, только include.


3.Создание конфигурации по серии, модели, тактовой частоте, интерфейсы(в формате масива) и режим работы GPIO портов(в формате масива).
  - Для взаимодейстиве с файлом конфигурации,нажмем на кнопку "выбрать JSON файл" и выберем его в папке configuration в корне проекта.
  - Далее, если мы хотим добавить конфигурацию, нажмем на кнопку "добавить устройство", при успешном добавление мы увидем дерево конфигурации, со всеми конфигами.
  - Если мы просто хотим посмотреть, что находится в файле, нажмем на кнопку "выгрузка данных", при успешном срабатывание мы также получим таблицу с конфигами. 
  - Можно добавить GPIO порты и указать их режим работы. 
4.Дизайн сделал немного другим, для этого разобрался со StyleSeet.

