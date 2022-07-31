const express = require('express')

const application = express()

application.get('/', function(request, response){
	response.send('HaGa IT Solution')
})

application.listen(3000)
