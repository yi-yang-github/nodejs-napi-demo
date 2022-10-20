//index.js
const testAddon = require('./build/Release/testaddon.node')

console.log("test");
console.log('hello ', testAddon.hello());
console.log('add(5,10) =', testAddon.add(5, 10));

module.exports = testAddon