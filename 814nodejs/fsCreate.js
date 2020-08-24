const fs = require('fs').promises;
const constants = require('fs').constants;

fs.access('./folder', constants.F_OK || constants.W_OK || constants.R_OK)
    .then(() => {
        return Promise.reject('이미 폴더 있음');
    })
    .catch((err) => {
        if(err.code === 'ENOENT'){
            console.log('폴더없음');
            return fs.mkdir('./folder');
        }
        return Promise.reject(err);
    })