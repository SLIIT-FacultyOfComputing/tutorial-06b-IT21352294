class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
     void setLngth(int l);
     void setWidth(int w);
     void setHeight(int h);
       // write prototypes of getters for length, width and height
     void getLength();
     void getWidth();
     void getHeight();
 
       int calcVolume();
};
