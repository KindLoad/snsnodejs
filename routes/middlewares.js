exports.isLoggedIn = (req, res, next) => {
    if(req.isAuthenticated()){ //로그인 중이라면
        next();
    } else {
        res.status(403).send('로그인이 필요');
    }
};

exports.isNotLoggedIn = (req, res, next) => {
    if(!req.isAuthenticated()){ //로그인이 되어 있지 않다면
        next();
    } else {
        const message = encodeURIComponent('로그인한 상태입니다.');
        res.redirect(`/?error=${message}`);
    }
}