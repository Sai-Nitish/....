# include <iostream>
using namespace std;

class Matrix { int e_[10][10]; int m_, n_;
public:
    Matrix(int m, int n) : m_(m), n_(n) {
// Arbitrary initialization
        for (int i = 0; i < m_; ++i)
            for (int j = 0; j < n_; ++j)
                e_[i][j] = 0;
    }
    void Input(){
        cout << "enter the elements:";
        for (int i = 0; i < m_; ++i) {
            for (int j = 0; j < n_; ++j) {
                cin >> e_[i][j] ;
            }
        }
    }
    void Show() { //Show the matrix
        for (int i = 0; i < m_; ++i) {
            for (int j = 0; j < n_; ++j)
                cout << e_[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
//    void Clear(){ // Set a Zero Matrix
//        for (int i = 0; i < m_; ++i) {
//            for (int j = 0; j < n_; ++j) {
//                e_[i][j] = 0;
//            }
//        }
//    }
    friend Matrix operator+(Matrix A, Matrix B);
    friend Matrix operator-(Matrix A, Matrix B);
    friend Matrix operator*(Matrix A, Matrix B);
};
Matrix operator+(Matrix A, Matrix B){
    Matrix Temp(A.m_,A.n_);
    for (int i = 0; i < A.m_; ++i) {
        for (int j = 0; j < A.n_; ++j) {
            Temp.e_[i][j] = A.e_[i][j] + B.e_[i][j];
        }
    }
    return Temp;
}
Matrix operator-(Matrix A, Matrix B){
    Matrix Temp(A.m_,A.n_);
    for (int i = 0; i < A.m_; ++i) {
        for (int j = 0; j < A.n_; ++j) {
            Temp.e_[i][j] = A.e_[i][j] - B.e_[i][j];
        }
    }
    return Temp;
}
Matrix operator*(Matrix A, Matrix B){
    Matrix Temp(A.m_,B.n_);
//    Temp.Clear();
    for (int i = 0; i < A.m_; ++i) {
        for (int j = 0; j < B.n_; ++j) {
            for (int k = 0; k < A.n_; ++k) {
                Temp.e_[i][j] =Temp.e_[i][j] + (A.e_[i][k] * B.e_[k][j]);
            }
        }
    }
    return Temp;
}
int main(){
    int m,n,p,q;
    cout << "Enter the dimensions of Matrix 1:";
    cin >> m >> n;
    cout << "Enter the dimensions of Matrix 2:";
    cin >> p >> q;
    Matrix M(m,n);
//    M.Clear();
    cout<< "For Matrix 1 ";
    M.Input();
    cout << "Matrix 1:"<<endl;
    M.Show();
    Matrix N(p,q);
//    N.Clear();
    cout << "For Matrix 2 ";
    N.Input();
    cout << "Matrix 2:"<<endl;
    N.Show();
    if(m == p and n == q){
        Matrix ADD(m,n);
//        ADD.Clear();
        ADD = M + N;
        cout << "The Addition of Matrix 1 and Matrix 2:"<<endl;
        ADD.Show();
    }
    else{
        cout << "The Matrices are not operable on Addition"<<endl;
    }
    if(m == p and n == q){
        Matrix SUB(m,n);
//        SUB.Clear();
        SUB = M - N;
        cout << "The Subtraction of Matrix 1 and Matrix 2:"<<endl;
        SUB.Show();
    }
    else{
        cout << "The Matrices are not operable on Subtraction"<<endl;
    }
    if(n == p){
        Matrix MUL(m,p);
//        MUL.Clear();
        MUL = M*N;
        cout<<"The Multiplication of Matrix 1 and Matrix 2:"<<endl;
        MUL.Show();
    }
    else{
        cout << "The Matrices are not operable on Multiplication:"<<endl;
    }
    return 0;
}
