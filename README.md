# nodejs-napi-demo

To run your app from CLI:

First time, or if needs rebuild:
```
docker-compose up
```
or
```
docker-compose run node-backend npm install -g node-gyp 
docker-compose run node-backend npm run install
docker-compose run node-backend npm run clean
docker-compose run node-backend npm run configure
docker-compose run node-backend npm run build
...
```


Afterwards, you can run the node app - index.js.
```
docker-compose run node-backend node index.js
```

Expected result:
```
test
hello  Hello World
add(5,10) = 15
```


## References
- https://github.com/nodejs/node-gyp
- https://blog.atulr.com/node-addon-guide/ (https://github.com/a7ul/blog-addons-example)