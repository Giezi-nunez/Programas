function drawGrid() {
	noStroke()
	fill(0, 75) // Draw the darker edges of the map
	rectSize = 10 * 100 / scaleFactor
	rect(mapWidth - User.x, 0 - User.y, rectSize, mapHeight + rectSize) // Right
	rect(0 - User.x - rectSize, -User.y, rectSize, mapHeight + rectSize) // Left
	rect(0 - User.x, mapHeight - User.y, mapWidth, rectSize) // Bottom
	rect(0 - User.x - rectSize, -User.y - rectSize, mapWidth + rectSize * 2, rectSize) // Top
	push()

	stroke(0)
	
	let gSize= 120

	for (x = 0 - (User.x % gSize); x < (width / scaleFactor - (User.x % gSize)) + (gSize+20); x += gSize) {
		line(x, -(height / 2) / scaleFactor, x, (height / 2) / scaleFactor)
		line(-x - gSize - (User.x % gSize) * 2, -(height / 2) / scaleFactor, -x - gSize - (User.x % gSize) * 2, (height / 2) / scaleFactor)
	}
	for (y = 0 - (User.y % gSize); y < (height / scaleFactor - (User.y % gSize)) + (gSize+20); y += gSize) {
		line(-(width / 2) / scaleFactor, y, (width / 2) / scaleFactor, y)
		line(-(width / 2) / scaleFactor, -y - gSize - (User.y % gSize) * 2, (width / 2) / scaleFactor, -y - gSize - (User.y % gSize) * 2)
	}
	pop()
}

function drawMiniMap() {
	let mapSize = 200
	let offSet = 5
	fill(0, 55)
	rect(-width / 2 + offSet, height / 2 - mapSize - offSet, mapSize, mapSize, 5)
	stroke(255)
	strokeWeight(User.size / mapWidth * mapSize)
	point(map(User.x, 0, mapWidth, 0, mapSize) - width / 2 + offSet, map(User.y, 0, mapHeight, 0, mapSize) + height / 2 - mapSize - offSet)
	stroke(255, 100)
	for (i = 0; i < players.length; i++) {
		if (!players[i].dead) {
			strokeWeight(players[i].size / mapWidth * mapSize)
			point(map(players[i].x, 0, mapWidth, 0, mapSize) - width / 2 + offSet, map(players[i].y, 0, mapHeight, 0, mapSize) + height / 2 - mapSize - offSet)
		}
	}
}

var sizes = []
var sizesToNames = {}

function leaderBoard(){
	push()
	scale(1/scaleFactor, 1/scaleFactor)
	
	sizes = []
	sizesToNames = {}
	if(!User.dead){
		sizes = [User.size]
		sizesToNames[User.size] = User.name
	}
	for(let i = 0; i < players.length; i++){
		if(!players[i].dead){
			sizes.push(players[i].size)
			sizesToNames[players[i].size] = players[i].name
		}
	}
	sizes.sort()
	
	resetSizesToNames = sizesToNames
	
	noStroke()
	fill(255)
	textSize(21)
	for(let i = 0; i < sizes.length; i++){
		// textAlign(LEFT, CENTER)
		// text(sizesToNames[sizes[i]] + ":", width/2 - 195, -height/2 + 0 + ((sizes.length - i) * 30))
		textAlign(RIGHT, CENTER)
		text(sizesToNames[sizes[i]] + ": " + round(sizes[i]) , width/2-10, -height/2 + 0 + ((sizes.length - i) * 30))
	}	
	sizesToNames = resetSizesToNames

	pop()
}