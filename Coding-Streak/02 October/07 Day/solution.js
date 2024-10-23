let str = 'ABFCACDB' ;

while (str.length){
    if(str.includes('AB'))
    {
        str = str.replace('AB','');
    }
    else if(str.includes('CD')){
        str = str.replace('CD','');
    }else{
        break;
    }
}

console.log(str)

