//Hash table implementation

#include <iostream>
#include <string>
using namespace std;

template<typename T>
class node{
public:
	string key;
	T value;
	node<T>* next;

	node(string k, T v){
		key = k;
		value = v;
		next = NULL;
	}

	~node(){
		if(next != NULL){
			delete next;
		}
	}
};

template<typename T>
class hashtable{
	node<T>** buckets;
	int ts;
	int cs;

	int hashfn(string key){
		int ans=0;
		int p=1;
		for(int i=key.size()-1; i>=0; i--){
			ans += p*key[i];
			ans %= ts;
			p *= 37;
			p %= ts;
		}
		return ans;
	}

	void rehash(){
		node<T>** oldbucket = buckets;
		int oldts = ts;
		cs=0;
		ts = 2*ts;

		buckets = new node<T> *[ts];
		for(int i=0; i<ts; i++){
			buckets[i] = NULL;
		}

		for(int i=0; i<oldts; i++){
			node<T>* temp = oldbucket[i];
			if(temp != NULL){
				while(temp != NULL){
					insert(temp->key, temp->value);
					temp = temp->next;
				}
				delete oldbucket[i];
			}
		}
		delete [] oldbucket;
	}

public:
	hashtable(int ds=7){
		ts=ds;
		cs=0;
		buckets = new node<T> *[ts];
		for(int i=0; i<ts; i++){
			buckets[i] = NULL;
		}
	}

	void insert(string key, T value){
		int i = hashfn(key);

		node<T>* temp = new node<T>(key, value);

		temp->next = buckets[i];
		buckets[i] = temp;
		cs++;

		float lf = cs/(1.0 * ts);
		if(lf > 0.7){
			rehash();
		}
	}

	T* search(string k){
		int i = hashfn(k);
		node<T> *temp = buckets[i];

		while(temp != NULL){
			if(temp->key == k){
				return &(temp->value);
			}
			temp = temp->next;
		} 
		return NULL;
	}

	T& operator[](string key){
		T* temp = search(key);
		if(temp == NULL){
			T x;
			insert(key, x);
		}
		temp = search(key);
		return *temp;
	}

	void print(){
		for(int i=0;i<ts;i++){
			node<T> *temp = buckets[i];
			cout<<"Bucket "<<i<<"->";
			while(temp!=NULL){
				cout<<temp->key<< " :: " << temp->value << " , ";
				temp = temp->next;
			}
			cout<<endl;
		}
	}
};

int main(){
	hashtable<int> h;

	h.insert("Banana", 100);
	h["Banana"] = 200;
	// h["Banana"] = 300;
	h.insert("Banana", 400);
	h["Banana"] = 500;

	cout << h["Banana"] << endl;

	h.print();
	return 0;
}