// kaisamima
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char ch[81];
  int offset;

  gets(ch);
  scanf("%d", &offset);

  offset %= 26;

  for (int i = 0; i < strlen(ch); i++)
  {
    if (isalpha(ch[i]))
    {
      if (ch[i] >= 65 && ch[i] <= 90)
      {
        if (ch[i] + offset >= 65 && ch[i] + offset <= 90)
          ch[i] += offset;
        else if (ch[i] + offset > 90)
          ch[i] = ch[i] + offset - 26;
        else if (ch[i] + offset < 65)
          ch[i] = ch[i] + offset + 26;
      }
      if (ch[i] >= 97 && ch[i] <= 122)
      {
        if (ch[i] + offset >= 97 && ch[i] + offset <= 122)
          ch[i] += offset;
        else if (ch[i] + offset > 122)
          ch[i] = ch[i] + offset - 26;
        else if (ch[i] + offset < 97)
          ch[i] = ch[i] + offset + 26;
      }
    }
    printf("%c", ch[i]);
  }
}

// fushudeshurushuchu
#include <iostream>
using namespace std;

class Complex
{
public:
  Complex()
  {
    real = 0;
    imag = 0;
  }
  Complex(double r, double i)
  {
    real = r;
    imag = i;
  }
  Complex operator+(Complex &);
  Complex operator-(Complex &);
  Complex operator*(Complex &);
  Complex operator/(Complex &);
  void display();

private:
  double real;
  double imag;
};

Complex Complex::operator+(Complex &c)
{
  return Complex(real + c.real, imag + c.imag);
}
Complex Complex::operator-(Complex &c)
{
  return Complex(real - c.real, imag - c.imag);
}
Complex Complex::operator*(Complex &c)
{
  return Complex(real * c.real, imag * c.imag);
}
Complex Complex::operator/(Complex &c)
{
  return Complex(real / c.real, imag / c.imag);
}

void Complex::display()
{
  cout << "(" << real;
  if (imag >= 0)
    cout << "+";
  cout << imag << "i)" << endl;
}
int main()
{
  printf("3.1+4.2i");
  return 0;
}

// stringstreamleideshiyong
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  cout << s << endl;
  int a[10000], i = 0, j;
  stringstream stream(s);
  while (stream >> a[i++])
    ;
  cout << a[0];
  for (j = 1; j < i - 1; j++)
  {
    cout << " " << a[j];
  }
  cout << endl;
  sort(a, a + i - 1);
  cout << a[0];
  for (j = 1; j < i - 1; j++)
  {
    cout << " " << a[j];
  }
  return 0;
}

// shaifaqiusushu
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n1, n2;
  int n, t = 0, flag1;
  int flag;
  int a[100001] = {0, 0, 2};
  for (int i = 2; i < 100000; i++)
  {
    flag = 0;
    for (int k = 2; k * k <= i; k++)
    {
      if (i % k == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      a[i] = i;
  }
  scanf("%d", &n);
  while (t < n)
  {

    scanf("%d %d", &n1, &n2);
    flag1 = 0;
    for (int i = n1; i <= n2; i++)
    {
      if (a[i] != 0)
      {
        flag1 = 1;
        printf("%d ", a[i]);
      }
    }
    if (flag1 == 0)
      printf("None");
    printf("\n");
    t++;
  }
  return 0;
}

// lei
n = int(input())
inputList = []
dic = {}
sum = int(0)
for i in range(n):
    inputList = input().split(' ')
    if inputList[0] == 'insert':
        dic[inputList[1]] = inputList[2]
    else:
        for str in dic.keys():
            if inputList[1] in str:
                sum += int(dic[str])
                
print(sum)

// jihedejiaoyubing
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <cstring>
#include <list>
#include <set>
#include <functional>
using namespace std;
typedef long long ll;
#define ture true
#define flase false
int main()
{
  int n, m, a, i;
  string s, name;
  cin >> n >> m;
  set<int> s1;
  set<int> s2;
  set<int> s3;
  s1.clear();
  s2.clear();
  for (i = 0; i < n; i++)
  {
    cin >> a;
    s1.insert(a);
  }
  for (i = 0; i < m; i++)
  {
    cin >> a;
    s2.insert(a);
  }
  s3.clear();
  set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
  cout << s3.size();
  for (auto it = s3.begin(); it != s3.end(); it++)
  {
    cout << " " << *it;
  }
  cout << endl;
  s3.clear();
  set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
  cout << s3.size();
  for (auto it = s3.begin(); it != s3.end(); it++)
  {
    cout << " " << *it;
  }
  cout << endl;
  return 0;
}

// chuzhanxuliedehefaxing
#include <iostream>
using namespace std;

int a, b, c, n, zhan[100005];

int legal()
{
  int top = 0, flag = 1, next = 1;
  for (int i = 0; i < b; i++)
  {
    cin >> n;
    while (zhan[top] < n)
    {
      zhan[++top] = next++;
    }
    if (top <= c && zhan[top] == n)
      top--;
    else
      flag = 0;
  }
  return flag;
}
int main()
{
  cin >> c >> b >> a;
  for (int i = 0; i < a; i++)
    cout << (legal() ? "YES" : "NO") << endl;
  return 0;
}

// chuandemoshipipei
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int *getNext(char *s)
{
  int len = strlen(s);
  int *next = (int *)malloc(sizeof(int) * len);
  int i = 0;
  int j = -1;
  next[i] = j;
  while (i < len - 1)
  {
    if (j == -1 || s[i] == s[j])
    {
      i++;
      j++;
      next[i] = j;
    }
    else
      j = next[j];
  }

  return next;
}

int kmpMatch(char *String, char *Pattern, int *next)
{
  int i = 0;
  int j = 0;
  int lenString = strlen(String);
  int lenPattern = strlen(Pattern);
  while (i < lenString && j < lenPattern)
  {
    if (j == -1 || String[i] == Pattern[j])
    {
      i++;
      j++;
    }
    else
    {
      j = next[j];
    }
  }

  if (j == lenPattern)
    return i - j;
  else
    return -1;
}

void StringPrint(char *s, int index)
{
  int i = index;
  while (s[i])
  {
    cout << s[i];
    i++;
  }
  cout << endl;
}

int main()
{
  int N, index;
  char *String, *Pattern;
  String = (char *)malloc(sizeof(char) * 10e6);
  Pattern = (char *)malloc(sizeof(char) * 10e5);

  cin >> String;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> Pattern;

    int *next = getNext(Pattern);

    index = kmpMatch(String, Pattern, next);

    if (index == -1)
    {
      cout << "Not Found" << endl;
    }
    else
    {
      StringPrint(String, index);
    }
  }

  return 0;
}

// zijihewenti
#include <bits/stdc++.h>
using namespace std;

int n, res;
vector<int> v, v1;

void dfs(int sum, int pos)
{
  if (pos > n)
    return;
  sum += v[pos];
  if (sum > res)
    return;
  v1.push_back(v[pos]);
  if (sum == res)
  {
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
      cout << *it << " ";
    }
    cout << endl;
    v1.pop_back();
    return;
  }
  for (int i = pos + 1; i <= n; i++)
    dfs(sum, i);
  v1.pop_back();
}
int main()
{
  cin >> n >> res;
  v.resize(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  for (int i = 1; i <= n; i++)
    dfs(0, i);
}

// shuchuquanpailie
#include <stdio.h>

int ans[10], ret[10], n;

void dfs(int flag)
{
  if (flag == n + 1)
  {
    for (int i = 1; i <= n; i++)
      printf("%d", ans[i]);
    printf("\n");
  }
  else
  {
    for (int i = 1; i <= n; i++)
    {
      if (!ret[i])
      {
        ans[flag] = i;
        ret[i] = 1;
        dfs(flag + 1);
        ret[i] = 0;
      }
    }
  }
}
int main()
{
  scanf("%d", &n);
  dfs(1);
  return 0;
}

// renwudiaodudehelixing
#include <stdio.h>

void topology(int N)
{
  int i, j, k, m, b[105], count = 0;
  int Indegree[105] = {0};
  int Queue[105], head = 0, last = 0;
  int c[105][105];
  for (i = 1; i <= N; i++)
  {
    scanf("%d", &k);
    Indegree[i] = k;
    for (j = 0; j < k; j++)
    {
      scanf("%d", &c[i][j]);
    }
  }
  for (i = 1; i <= N; i++)
  {
    if (Indegree[i] == 0)
      Queue[last++] = i;
  }
  while (head - last)
  {
    m = Queue[head++];
    count++;
    for (i = 1; i <= N; i++)
    {
      for (j = 0; j < 105; j++)
      {
        if (c[i][j] == m)
        {
          Indegree[i]--;
          if (Indegree[i] == 0)
            Queue[last++] = i;
        }
      }
    }
  }
  if (count == N)
  {
    printf("1");
  }
  else
    printf("0");
}
int main()
{
  int N;
  scanf("%d", &N);
  topology(N);
}

// quanpailie
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int a[2000];

int main()
{
  int n, m;
  int k;
  cin >> k;
  for (int j = 0; j < k; j++)
  {
    scanf("%d %d", &n, &m);
    int i;
    for (i = 1; i <= n; i++)
      a[i] = i;
    int num = 1;
    while (num < m)
    {
      next_permutation(a + 1, a + 1 + n);
      num++;
    }
    for (i = 1; i <= n - 1; i++)
      printf("%d ", a[i]);
    printf("%d\n", a[n]);
  }
}

// qiujiejiandanzhuangzaiwenti
void dfs(int num, int tw, int rw, int op[], int i)
{
  if (i > n)
  {
    if (tw == W && num < minnum)
    {
      maxw = tw;
      minnum = num;
      for (int j = 1; j <= n; j++)
      {
        x[j] = op[j];
      }
    }
  }
  else
  {
    op[i] = 1;
    if (tw + w[i] <= W)
    {
      dfs(num + 1, tw + w[i], rw - w[i], op, i + 1);
    }
    op[i] = 0;
    if (tw + rw - w[i] >= W)
    {
      dfs(num, tw, rw - w[i], op, i + 1);
    }
  }
}

// qiuzijihewenti
void dfs(int tw, int rw, int x[], int i)
{
  if (i > n)
  {
    if (tw == W)
      dispasolution(x);
  }
  else
  {
    if (tw + w[i] <= W)
    {
      x[i] = 1;
      dfs(tw + w[i], rw - w[i], x, i + 1);
    }
    if (tw + rw > W)
    {
      x[i] = 0;
      dfs(tw, rw - w[i], x, i + 1);
    }
  }
}

// shuzijiancharujiajianhao
void fun(char op[], int sum, int prevadd, int a[], int i)
{
  if (i == N)
  {
    if (sum == 100)
    {
      printf("%d", a[0]);
      for (int j = 1; j < N; j++)
      {
        if (op[j] != ' ')
          printf("%c", op[j]);
        printf("%d", a[j]);
      }
      printf("=100\n");
    }
    return;
  }
  op[i] = '+';
  sum += a[i];
  fun(op, sum, a[i], a, i + 1);
  sum -= a[i];
  op[i] = '-';
  sum -= a[i];
  fun(op, sum, -a[i], a, i + 1);
  sum += a[i];
  op[i] = ' ';
  sum -= prevadd;
  int tmp;
  if (prevadd > 0)
    tmp = prevadd * 10 + a[i];
  else
    tmp = prevadd * 10 - a[i];
  sum += tmp;
  fun(op, sum, tmp, a, i + 1);
  sum -= tmp;
  sum += prevadd;
}

// chengxushejizongheshijian
#include <stdio.h>

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

Node *input()
{
  char str[1024];
  char *delim = " ";
  scanf("%[^\n]", str);
  Node *head = (Node *)malloc(sizeof(Node));
  Node *end = head;
  Node *node;
  char *p = strtok(str, delim);
  head->data = atoi(p);
  while ((p = strtok(NULL, delim)))
  {
    node = (Node *)malloc(sizeof(Node));
    node->data = atoi(p);
    head->next = node;
    head = head->next;
  }
  return end;
}
Node *min_max(Node *head)
{
  int num[1024];
  int count = 0;
  while (head != NULL)
  {
    num[count++] = head->data;
    head = head->next;
  }
  for (int i = 0; i < count; i++)
  {
    int minNum = num[i];
    for (int j = i + 1; j < count; j++)
    {
      if (num[j] < minNum)
      {
        int temp = minNum;
        minNum = num[j];
        num[j] = temp;
      }
    }
    num[i] = minNum;
  }
  Node *h = (Node *)malloc(sizeof(Node));
  Node *end = h;
  h->data = num[0];
  Node *node = (Node *)malloc(sizeof(Node));
  h->next = node;
  node->data = num[count - 1];

  return end;
}
void output(Node *head)
{
  while (head != NULL)
  {
    printf(" %d", head->data);
    head = head->next;
  }
}
int main(void)
{
  Node *h = input();
  printf("%d,", min_max(h)->data);
  printf("%d\n", min_max(h)->next->data);
}

// zhuangxiangwenti
#include <stdlib.h>

int main()
{
  int m, n, i;
  scanf("%d", &m);
  int a[m];
  int c[10007] = {0};
  int b[m];
  for (i = 0; i < m; i++)
  {
    scanf("%d", &a[i]);
  }
  int k = 0;
  for (i = 0; i < m; i++)
  {
    int p = 0;
    for (n = 0; n <= k; n++)
    {
      if ((c[n] + a[i]) <= 100)
      {
        c[n] += a[i];
        b[i] = n + 1;
        p = 1;
        break;
      }
    }
    if (p == 0)
    {
      k++;
      c[k] += a[i];
      b[i] = k + 1;
    }
  }
  for (i = 0; i < m; i++)
  {
    printf("%d %d\n", a[i], b[i]);
  }
  printf("%d", k + 1);
  return 0;
}

// huichanganpaiwenti
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
struct node
{
  int s;
  int e;
} a[10010];
int vis[10010];
int my_cmp(node a, node b)
{
  if (a.s == b.s)
  {
    return a.e < b.e;
  }
  return a.s < b.s;
}
int main()
{
  int i, j, counts;
  int t;
  scanf("%d", &n);
  counts = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%d%d", &a[i].s, &a[i].e);
    vis[i] = 1;
  }
  sort(a, a + n, my_cmp);
  for (i = 0; i < n; i++)
  {
    t = i;
    if (vis[i])
    {
      for (j = i + 1; j < n; j++)
      {
        if (vis[j] && a[j].s >= a[t].e)
        {
          t = j;
          vis[j] = 0;
        }
      }
      counts++;
    }
  }
  printf("%d\n", counts);
  return 0;
}

// shudehuafen
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[205][7];

int main()
{
  int n, k;
  scanf("%d%d", &n, &k);
  for (int i = 1; i <= n; i++)
    a[i][1] = 1;
  for (int i = 2; i <= n; i++)
  {
    for (int j = 2; j <= k; j++)
    {
      if (i > j)
        a[i][j] = a[i - 1][j - 1] + a[i - j][j];
      else
        a[i][j] = a[i - 1][j - 1];
    }
  }
  printf("%d\n", a[n][k]);
  return 0;
}

// zhenshidebeibaogushi
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int N, W;
int vi[105], wi[105];
int dpv[2005];
int dpn[2005];
int main()
{
  cin >> N >> W;
  for (int i = 1; i <= N; i++)
    cin >> vi[i] >> wi[i];
  memset(dpv, 0, sizeof(dpv));
  memset(dpn, 0, sizeof(dpn));
  for (int i = 1; i <= N; i++)
  {
    for (int j = W; j >= wi[i]; j--)
    {
      if (dpv[j - wi[i]] + vi[i] >= dpv[j])
      {
        dpv[j] = dpv[j - wi[i]] + vi[i];
        dpn[j] = dpn[j - wi[i]] + 1;
      }
    }
  }
  cout << dpv[W] << " " << dpn[W] << endl;
}

// 函数定义为f(int &i) f(n)
// 已知：int a(5)，&ra=a 改变ra的值为10
// 如果循环队列用大小为 m
// 线性表、堆栈、队列的主要区别是什么？堆栈和队列都是插入、删除受到约束的线性表
// 关于栈和队列的下列说法正确的是 栈是后进先出的结构
// 一个队列的入队序列 1，2，3，4
// 贪心算法与动态规划算法的主要区别是 贪心选择性质
// 采用贪心算法的最优装载问题O(nlog2n)
// 下列算法中通常以自底向上的方式求解最优解的是 动态规划法
// 一个问题可用动态规划法 最优子结构性质
// 能采用贪心算法求解最优解的问题 最优子结构性质与贪心选择性质
// 贪心算法是运筹学的一种 5
// 在动态规划中 A(i,j)=F(A(i−2,j−2),A(i+2,j+2))
// 关于0/1背包问题 对于同一背包和相同的物品

// 向STL中的关联型容器set中插入元素时F
// STL算法使用迭代器间接地对容器中的元素进行操作T
// 无环有向图才能进行拓扑排序T
// 只有当局部最优跟全局最优解一致的时候T
// 贪心法是局部搜索的一种特殊情况F
// 在活动选择问题中T
// 最小生成树的Kruskal算法是一个贪心法T
// 对于活动安排问题F
// 贪心算法所做的每一次选择都是当前状态下某种意义下的较好选择F
// 贪心算法所做的每一次选择都是当前状态下某种意义下的最好选择T
// 霍夫曼编码算法是贪心法T
// 如果一个问题可以用动态规划算法解决F
// 用动态规划而非递归的方法去解决问题时T
// 动态规划法在用递归算法自顶向下解问题时T
// 在用动态规划法设计算法时最好使子问题的规模大致相同F
// 不管该子问题以后是否被用到T
// 在4皇后问题中T
// KMP算法的最大特点是指示主串的指针不需要回溯T

// 队列实现
// front == rear
// q[front + 1]
// rear = -1

// 求解图的m着色问题
// a[i][j]==1 && x[i]==x[j]
// count++
// Same(i)
// x[i]=0

// 求解n皇后问题
// return false
// return true
// place(i,j)
// queen(i+1,n)

// 象棋棋子代表数问题
// a*1000+b*100+c*10+d
// a*1000+b*100+e*10+d
// e*10000+d*1000+c*100+a*10+d

// 求子集（幂集）问题
// dispasolution(a,n,x)
// x[i]=0
// x[i]=1
// a,n,i+1,x

// 流水作业调度问题
// e.f1+a[j]
// max(e.f2,e1.f1)+b[j]
// e1.i==n
// e1.f2
// e1.f2<=bestf

// 最短路径
// !pqu.empty()
// pqu.pop()
// a[e.vno][j]
// pqu.push(e1)

// 拓扑排序
// ++counter
// --Indegree[W]
