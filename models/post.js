const Sequelize = require('sequelize');

module.exports = class Post extends Sequuelize.Model {
    static init(sequelize) {
        return super.init({
            content: {
                type: Sequelize.STRING(140),
                allowNull: false,
            },
            img: {
                typ: Sequelize.STRING(200),
                allowNull: true,
            },
        }, {
            sequelize,
            timestamps: true,
            underscored: false,
            modelName: 'Post',
            tableName: 'posts',
            paranoid: false,
            charset: 'utf8mb4',
            collate: 'utf8mb4_general_ci',
        });
    }

    static associate(db) {
        db.Post.belongTo(db.User);
        db.Post.belongsToMany(db.Hashtag, { through: 'PostHashtag'}); // through를 통해 관계 테이블을 만들어냄
    }
};