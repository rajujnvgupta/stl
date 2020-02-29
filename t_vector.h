template<typename T>
class Vector{

int cs;
int ms;
T *arr;
public:
	Vector(){
		cs = 0;
		ms = 1;
		arr = new T(ms);
	}
	void push_back(T num){
			
		if(cs == ms){
			T *oldArr = arr;
			ms = 2*ms;
			arr = new T[ms];
			
			for(int i = 0; i < cs; i++){
				arr[i] = oldArr[i];
			}
			//clear old arr
			delete [] oldArr;
		}
		arr[cs] = num;
		cs++;
	}
	void pop_back(){
		if(cs > 0){
				cs--;
		}else{
			return;
		}
	}
	T front() const {
		return arr[0];
	}
	T back(){
		return arr[cs-1];
	}
	bool empty() const{
		return cs==0;
	}
	int capacity() const{
		return ms;
	}
	T at(int i) const{
		return arr[i];
	}
	T operator[](const int i) const{
		return arr[i];
	}
	int size(){
		return cs;
	}	
};
		
