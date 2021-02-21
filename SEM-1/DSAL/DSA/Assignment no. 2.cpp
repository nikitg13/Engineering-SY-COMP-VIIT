 #include <iostream> 
using namespace std; 
 
struct spar 
{ 
    int row, col, data; 
}; 
 
void convert (int row, int col, int** mat, spar sparse[], int non_zero_elements) 
{ 
    sparse[0].row = row; 
    sparse[0].col = col; 
    sparse[0].data = non_zero_elements; 
  
    int row_count = 0, i , j;    
    for(i = 0; i < row; i++) 
    { 
        for(j = 0; j < col; j++) 
        { 
            if( mat[i][j] != 0) 
            { 
                row_count++; 
                sparse[row_count].row = i; 
                sparse[row_count].col = j; 
                sparse[row_count].data = mat[i][j]; 
            }  
        }                
    }            
     
}; 
 
void simple_transpose (spar sp[], spar tr[]) 
{ 
 tr[0].row = sp[0].col; 
 tr[0].col = sp[0].row; 
 tr[0].data = sp[0].data; 
 
 int row_count = 0; 
 int noc = sp[0].col; 
 int num_t = sp[0].data; 
   
 for(int col = 0; col < noc; col++) // Used to identify column number so to change it to row 
 { 
  for(int j = 1; j <= num_t; j++) // Used to traverse the sparse matrix 
  { 
   if(sp[j].col == col) 
   { 
    row_count++; 
    tr[row_count].col = sp[j].row; 
    tr[row_count].row = sp[j].col; 
    tr[row_count].data = sp[j].data; 
   } 
  } 
 }  
 
 
}; 
 
void fast_transpose (spar sp[], spar tr[]) 
{ 
 tr[0].row = sp[0].col; 
 tr[0].col = sp[0].row; 
 tr[0].data = sp[0].data; 
 
 int num_t = sp[0].data; 
 int i; 
 int noc = sp[0].col; 
 int* freq = new int[noc]; 
 int* pos = new int[noc]; 
 
 for(i = 0; i < noc; i++) 
  freq[i] = 0; 
 
 for(i = 1; i <= num_t; i++) 
  freq[sp[i].col]++; 
 
 pos[0] = 1; 
 for(i = 1; i < noc; i++) 
  pos[i] = pos[i - 1] + freq[i - 1]; 
 
 int j; 
 
 for(i = 1; i <= num_t; i++) // To traverse 
 { 
  j = pos[sp[i].col]; 
  tr[j].row = sp[i].col; 
  tr[j].col = sp[i].row; 
  tr[j].data = sp[i].data; 
  pos[sp[i].col]++; 
 } 
 
}; 
 
void print_sparse(spar sparse[]) 
{ 
    int i; 
    for(i = 0; i <= sparse[0].data; i++) 
        cout << sparse[i].row << "  " << sparse[i].col << "  " << sparse[i].data << "\n"; 
}; 
 
int main() 
{ 
    int row, col, i, non_zero_elements = 0; 
    cout << "Enter row and column of matrix :\n"; 
    cin >> row >> col; 
     
    int** mat = new int*[row]; 
    for(i = 0; i < row; i++) 
        mat[i] = new int[col]; 
         
    int j; 
    cout << "Enter data :\n"; 
    for(i = 0; i < row; i++) 
    { 
        for(j = 0; j < col; j++) 
        { 
            cin >> mat[i][j]; 
            if(mat[i][j] != 0) 
                non_zero_elements++; 
        } 
     } 
     
    spar* sparse = new spar[non_zero_elements + 1]; 
    
    convert(row, col, mat, sparse, non_zero_elements); // Conversion of matrix to sparse matrix 
 cout << "Sparse Matrix is :\n"; 
    print_sparse(sparse); 
 
 int choice; 
  
 spar* transpose = new spar[non_zero_elements + 1]; 
 while(choice !=3) 
{       cout<<"\n-------------------------------------------------------------------\n"; 
        cout << "Enter which operation you want to perform :\n(1 - Simple Transpose, 2 - Fast Transpose, 3 -Exit)\n"; 
 cin >> choice; 
         switch(choice) 
 { 
            
  case 1: 
  simple_transpose(sparse, transpose); 
  cout << "\nTranspose :\n"; 
  print_sparse(transpose); 
  break; 
   
  case 2: 
  fast_transpose(sparse, transpose); 
  cout << "\nTranspose :\n"; 
  print_sparse(transpose); 
        }  
 
} 
 
    return 0; 
} 
 
