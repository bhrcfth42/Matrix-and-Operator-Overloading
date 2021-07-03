#include<iostream>
#include <cmath>
#include <fstream>
#define MAXROWS 10
#define MAXCOLS 10

using namespace std;

class Matrix{
    int rows;
    int cols;
    float data[MAXROWS][MAXCOLS];
    public:
        Matrix();
        Matrix(float n_data[MAXROWS][MAXCOLS],int n_rows,int n_cols);
        void print(void);
    private:
        bool test_stochastic(void);
    public:
        Matrix operator+(const Matrix &sonuc_Matrix){
            Matrix temp;
		    for(int i=0 ;i<this->rows;i++)
			    for(int j=0;j<this->cols;j++)
				    temp.data[i][j] = this->data[i][j] + sonuc_Matrix.data[i][j];
        };
        Matrix operator+(float scalar_value){
            Matrix temp;
		for(int i=0 ;i<this->rows;i++)
			for(int j=0;j<this->cols;j++)	
				temp.data[i][j]= this->data[i][j]+scalar_value;	
		return temp;
        };
        void operator++(void){
            for(int i=0 ;i<this->rows;i++)
		        for(int j=0;j<this->cols;j++)	
			        this->data[i][j]= this->data[i][j]+1.0;
        };
        void operator+=(const Matrix &sonuc_Matrix){
            for(int i=0 ;i<this->rows;i++)
			    for(int j=0;j<this->cols;j++)
				    this->data[i][j] = this->data[i][j] + sonuc_Matrix.data[i][j];
        };
};
Matrix::Matrix(){
    rows=0;
    cols=0;
}
Matrix::Matrix(float n_data[MAXROWS][MAXCOLS],int n_rows,int n_cols){
    rows = n_rows;
	cols = n_cols;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			data[i][j] = n_data[i][j];
}
void Matrix::print(void){
    for (int i = 0; i < this->rows; i++)
		{
			for (int j = 0; j < this->cols; j++)
				cout << this->data[i][j] << "\t";
			cout << endl;
		}
    if(test_stochastic()==true)
        cout << "Bu Matris Stokastik Bir Matristir"<<endl;
    cout<<"================ "<<endl;
}
bool Matrix::test_stochastic(void){
    for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
            if (sizeof(this->data[i][j] == '2' & '4' & '9' & '16' & '25' & '36'))
		        return true;
            else
		        return false;
}
int main(){
    float sayi[MAXROWS][MAXCOLS];
    Matrix Mat[20];
    ifstream dosyaOku;
    dosyaOku.open("Matrisler.txt");
    for(int i=0;i<MAXROWS;i++){
        for(int j=0;j<MAXCOLS;j++){
            dosyaOku>>sayi[i][j];
            Mat[i]=Matrix(sayi,i,j);
        }
    }
    dosyaOku.close();
    Matrix Sonuc1,Sonuc2;
    Sonuc1.operator+(Mat[0]);
    Sonuc1.operator+(Mat[2]);
    Sonuc1.print();
    Sonuc2=Mat[4].operator+(70);
    Sonuc2.print();
    Mat[2].operator++();
    Mat[2].print();
    Mat[3].operator+=(Mat[3]);
    Mat[3].operator+=(Mat[1]);
    Mat[3].print();
    for(int i=0;i<20;i++)
        Mat[i].print();
}
