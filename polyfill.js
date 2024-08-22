



Array.prototype.mymap = function(cb) {
    let temp = [];
    for (let i =0; i<this.length; i++) {
        temp.push(cb(this[i],i,this));

    }
    return temp;

};


const nums = [1,2,3,4];

const multiplayThree = nums.mymap((num,i,arr) => {
    return num *  3 +i  ;

}); 
console.log(multiplayThree); 

