// Mai Văn Hiếu - 201200123 - CNTT4 - K61
#include <iostream>
using namespace std;

template <typename T>  // khai báo hàm mẫu
void swap(T *x, T *y); // tiền khai báo cho hàm hoán vị

template <typename T> // khai báo khuôn mẫu lớp
class Heap
{
private:
    T *node; // con trỏ trỏ tới mảng các phần tử trong cây
    unsigned int capacity, num;
    bool reverse;        // biến xác định Max heap - Min heap
    void heapify(int i); // vun đống

public:
    Heap() // Hàm tạo không đối - khởi gán
    {
        node = NULL;
        num = capacity = 0;
        reverse = false; //  khởi gán false <=> Max heap
    }
    Heap(int capacity, bool reverse = false) // Hàm tạo hai đối-khởi gán
    {                                        // reverse mặc định là false
        num = 0;
        this->capacity = capacity;
        node = new T[capacity];
        this->reverse = reverse;
    }
    ~Heap() // Hàm hủy - xóa vùng nhớ
    {
        if (node)
            delete[] node;
    }
    int parent(int i) { return (i - 1) / 2; } // lấy vị trí nút cha tại vị trí i
    int left(int i) { return (2 * i + 1); }   // lấy vị trí nút con trái tại vị trí i
    int right(int i) { return (2 * i + 2); }  // lấy vị trí nút con phải tại vị trí i
    bool empty() { return num == 0; }         // kiểm tra xem cây có phải cây rỗng
    bool full() { return num == capacity; }   // kiểm tra xem cây đã đầy hay chưa
    unsigned int size() { return num; }       // trả về số phần tử hiện tại có trong cây
    void push(T value);                       // thêm một phần tử vào cây
    T top() { return node[0]; }               // trả về giá trị phần tử gốc của cây
    void pop()                                // lấy phần tử gốc khỏi cây
    {
        if (!empty()) // nếu cây có chứa nút
        {
            node[0] = node[num - 1];
            num--;
            heapify(0);
        }
    }
};

/* vun dong */
template <typename T>
void Heap<T>::heapify(int i)
{
    int l = left(i);
    int r = right(i);
    int root = i;
    if (reverse) // nếu đúng thì là Min heap
    {
        if (l < num && node[l] < node[i])
            root = l;
        if (r < num && node[r] < node[root])
            root = r;
    }
    else // Max heap
    {
        if (l < num && node[l] > node[i])
            root = l;
        if (r < num && node[r] > node[root])
            root = r;
    }
    if (root != i)
    {
        swap(&node[i], &node[root]); // hoán vị
        heapify(root);
    }
}

/* insert */
template <typename T>
void Heap<T>::push(T value)
{
    if (full())
    {
        capacity = capacity * 2 + 1; // mở rộng kích thước tối đa của cây
        T *temp = new T[capacity];
        for (int i = 0; i < num; i++) // sao chép các phần tử của cây
            temp[i] = node[i];
        if (node)
            delete[] node; // xóa vùng nhớ của node
        node = temp;
    }
    int i = num;
    node[num] = value;
    num++;
    if (reverse)
    {
        while (i != 0 && node[parent(i)] > node[i])
        {
            swap(&node[i], &node[parent(i)]);
            i = parent(i);
        }
    }
    else
    {
        while (i != 0 && node[parent(i)] < node[i])
        {
            swap(&node[i], &node[parent(i)]);
            i = parent(i);
        }
    }
}
/* swap */
template <typename T>
void swap(T *x, T *y) // Hàm hoán vị
{
    T temp = *x;
    *x = *y;
    *y = temp;
}

/* MAIN */
int main()
{
    /* Nhập vào một dãy xuất ra dãy giảm dần */
    int n, a, b, x, res = 0;
    cout << "Nhap so phan tu: ";
    cin >> n;
    Heap<int> Q1(n); // khai báo Max heap có n phần tử
    cout << "Nhap day:\n";
    while (n--)
    {
        cin >> x;
        Q1.push(x);
    }
    cout << "Day giam dan: ";
    while (!Q1.empty())
    {
        n = Q1.top(); // Mai Văn Hiếu - 201200123
        cout << n << "  ";
        Q1.pop();
    }

    /* Giải quyết bài toán nối thanh kim loại */
    cout << "\nNhap so thanh kim loai: ";
    cin >> n;
    Heap<int> Q2(n, true); // Khai báo Min heap
    cout << "Nhap cac do dai: \n";
    while (n--)
    {
        cin >> x;
        Q2.push(x);
    }
    while (Q2.size() > 1)
    {
        a = Q2.top();
        Q2.pop();
        b = Q2.top();
        Q2.pop();
        res += a + b;
        Q2.push(a + b);
    }
    cout << "So tien phai tra: " << res << endl;
    return 0;
}