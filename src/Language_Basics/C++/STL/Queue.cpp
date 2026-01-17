
using namespace std;

int main(){

    queue<int> q;

    for(int i=0; i<3; i++){
        q.push(i);
    }

    while(!q.empty()){
        cout<<q.front() << " ";
        q.pop();
    }
}