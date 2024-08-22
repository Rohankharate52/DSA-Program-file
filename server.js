const {MongoClient} = require("mongodb");
const URL = "mongodb://localhost:27017";

const client = new MongoClient(URL);

//////////////////////////////////////////////////////
//  GetConnection
//  It is used to connect node + express serever to mongodb
//////////////////////////////////////////////////////
async function GetConnection()
{
    let result = await client.connect();
    let db = result.db("MarvellousInfosystems");
    return db.collection("Batches");
}


//////////////////////////////////////////////////////
//  ReadData
//  It is used to read the data
//////////////////////////////////////////////////////
async function ReadData()
{
    let data = await GetConnection();
    data = await data.find().toArray();
    console.log("Data from tha Marevllous Database is : ");
    console.log(data);
}

//////////////////////////////////////////////////////
//  main
//  Entry point function
//////////////////////////////////////////////////////
function main()
{
    let ret;
    ret = GetConnection();
    console.log("Database connected");

    ReadData();
}

main()