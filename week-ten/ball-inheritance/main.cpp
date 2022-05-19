#include <iostream>

using namespace std;

class Ball{
    protected:
        float _circumference;
        float _weight;
    
    public:
        float getCircumference(){
            return _circumference;
        }

        float getWeight(){
            return _weight;
        }

        void bounce(){
            cout << "Bouncing" << endl;
        }

        void roll(){
            cout << "Rolling" << endl;
        }

        void stop(){
            cout << "Stopping" << endl;
        }
};

class SoccerBall: public Ball{
    private:
        bool _isInflated;

    public:
        SoccerBall(bool isInflated, float circumference, float weight){
            _circumference = circumference;
            _weight = weight;
            _isInflated = isInflated;
            cout << "Creating soccer ball" << endl;
        }

        void inflate(){
            if(_isInflated == true){
                cout << "No need to inflate the ball." << endl;
            }else{
                 _isInflated = true;
                cout << "The ball is now inflated." << endl;
            }
        }

};

int main(){
    SoccerBall ball(true, 10, 20);
    ball.roll();
    ball.bounce();
    ball.stop();
    cout << "The circumference of the ball is " << ball.getCircumference();
    cout << "The weight of the ball is " << ball.getWeight();
    return 0;
}