
*{
    padding: 0%;
    margin: 0%;
    font-family: 'Roboto', sans-serif;
}

.logo{
    position: fixed;
    float: left;
    top: 3%;
    margin-left: 8%;
    color: black;
    font-weight: bold;
    font-size: 30px;
}
nav{
    position: fixed;
    width: 100%;
    top: 3%;

}
.menu ul{
    list-style: none;
    background: white;
    overflow: hidden;
    color: black;
    padding: 0;
    text-align: center;
    margin: 0;
    transition: 1s;
    
}
nav.black ul{
    background: white;
}
.menu ul li{
    display: inline-block;
    padding: 15px;
}
.menu ul li a{
    text-decoration: none;
    color: black;
    font-size: 17px;
}
.burger {
    width: 100%;
    background: white;
    text-align: right;
    box-sizing: border-box;
    padding: 15px 24px;
    cursor: pointer;
    color: black;
    display: none;
}
@media(max-width: 580px){
    .logo {
        position: fixed;
        top: 0;
        margin-top: 16px;
    }
    .menu ul {
        max-height: 0px;
        background: white;
    }
    nav.black ul{
        background: white;
    }
    .showing{
        max-height: 20cm;
    }
    .menu ul li{
        box-sizing: border-box;
        width: 100%;
        padding: 24px 0;
        text-align: center;
    }


