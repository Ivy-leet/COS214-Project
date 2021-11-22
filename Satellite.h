class Satellite //Prototype interface
{
private:
    /* data */
public:
    virtual Satellite* clone() = 0;
    Satellite(/* args */);
    ~Satellite();
};

