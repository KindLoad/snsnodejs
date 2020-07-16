var express = require('express')
    , http = require('http');

var app = express();

app.use(function(req, res, next){
    console.log('첫 번째 미들웨어에서 요청을 처리함.');
    
    var userAgent = req.header('User-Agent');
    var paramName = req.query.name;

    res.writeHead(200, {'Conetent-Type' : 'text/html; charset=utf8'});
    res.write('<h1></h1>');
    res.write('<div><p>User-Agent : ' + userAgent + '</p></div>');
    res.write('<div><p>Param name : ' + paramName + '</p></div>');
    res.end();

});

http.createServer(app).listen(3000, function(){
    console.log('익스프레스 서버 시작합니다.');
});