int Point::slope(Point a, Point b){
int x = (b.getY() + a.getY())/(b.getX() + a.getX());
return x;
}
