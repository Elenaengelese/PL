int distance(Point* p1, Point* p2);
int slope(Point* coord1, Point* coord2);
string print(int x, int y);
int main(){
	// Point* p1 = create1(3,4);
	// Point* p2 = create2(4,5);
	// delete p1;
	// delete p2;
	Point nums[8]; // integer array declaration

	for(int i = 0; i<8; i++){
		nums[i].setX(i);
		nums[i].setY(i);
	}
	for(int i = 0; i<8; i++){
		int x = nums[i].getX();
		int y = nums[i].getY();
		print(x, y);
		printf("%s", "Slope of all coordinates");
		std::cout<< nums[i].slope(nums[i], nums[i+1])<< std::endl;
	}

}
string print(int x, int y){
	std::cout<< "("<< x<< ", "<< 
	y<< ")"<< std::endl;
}
