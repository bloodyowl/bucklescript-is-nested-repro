let express = require("express");

let app = express();

app.use(express.static("./"));

app.listen(8000);
console.log("Listening http://localhost:8000")
