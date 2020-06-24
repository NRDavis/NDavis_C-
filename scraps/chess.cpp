
bool legalRook(std::string cur, std::string tar){
	if(cur[0]!=tar[0] && cur[1]!=tar[1]){
		return false;
	}
	return true;
}

bool legalPawn(std::string cur, std::string tar){
	if(cur[0]==tar[0]){
		if(cur[1] == '2'){
			if(tar[1]=='4'|| tar[1]=='3'){
				return true;
			}
			else if (tar[1] - cur[1] > 1){
				return false;
			}
		}	
	}
	else
		return false;
	
	return true;
}


bool legalBishop(std::string cur, std::string tar){
	int x = cur[0] - tar[0];
	int y = cur[1] - tar[1];
	
	if(x < 0)
		x = -x;
	if(y < 0)
		y = -y;
	
	if(x == 0 || y == 0)
		return false;
	else if(x == y)
		return true;
	else
		return false;
	
}

bool legalKing(std::string cur, std::string tar){
	int x = cur[0] - tar[0];
	int y = cur[1] - tar[1];
	
	if(x < 0)
		x = -x;
	if(y < 0)
		y = -y;
	
	if(x == 1 && y == 1)
		return true;
	else if(x == 1 && y == 0)
		return true;
	else if(x == 0 && y == 1)
		return true;
	else
		return false;
}

bool legalQueen(std::string cur, std::string tar){
	if(cur[0]==tar[0] && cur[1] == tar[1])
		return false;
	
	// same column
	if(cur[0] == tar[0] && cur[1] != tar[1])
		return true;	// legal
	//same row
	if(cur[1] == tar[1] && cur[0] != tar[0])
		return true;	// legal
	// diagonal
	int x = cur[0] - tar[0];
	int y = cur[1] - tar[1];
	if(x < 0)
		x = -x;
	if(y < 0)
		y = -y;
	if(x != y)
		return false;
	else
		return true;
	
}

bool legalKnight(std::string cur, std::string tar){
	int x = cur[0] - tar[0];
	int y = cur[1] - tar[1];
	if(x < 0)
		x = -x;
	if(y < 0)
		y =-y;
	
	if(x == 1 && y == 2)
		return true;
	else if(y==1 && x ==2)
		return true;
	else 
		return false;
	
	
}




bool canMove(std::string piece, std::string current, std::string target) {
	if(piece.compare("Rook")==0)
		return legalRook(current, target);
	if(piece.compare("Pawn")==0)
		return legalPawn(current, target);
	if(piece.compare("Knight")==0)
		return legalKnight(current, target);
	if(piece.compare("Bishop")==0)
		return legalBishop(current, target);
	if(piece.compare("Queen")==0)
		return legalQueen(current, target);
	if(piece.compare("King")==0)
		return legalKing(current, target);
	
}