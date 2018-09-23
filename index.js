require("../index.html");

var pageManager = require("../scripts/page_manager.js");
var io = require ( 'socket.io' ) (http);

require("../styles/page_manager.css");

io.on ( 'connection' , function ( socket ) { console .log ( 'user connected' ); });

pageManager.init();
