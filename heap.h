#ifndef HEAP_H
#define HEAP_H

#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>

template <typename T>
class Heap {
	using Comparator = std::function<bool(T&, T&)>;
public:
	Heap() {
		comparator = [](T& a, T& b) { return a < b; };
	}

	Heap (Comparator comp) : comparator(comp) {}
	void insert(T t);
	void remove(size_t);
	void print() const;
	T pop_root();
	bool empty() const { return heap.empty(); }

private:
	std::vector<T> heap;
	void sift_up(size_t);
	void sift_down(size_t);
	Comparator comparator;
	bool check_children(size_t);

};

template <typename T>
void Heap<T>::insert(T t) {
	heap.push_back(t);
	sift_up(heap.size() - 1);
}

template <typename T>
void Heap<T>::print() const {
	for (const T& t : heap) {
		std::cout << t << ", ";
	}
	std::cout << std::endl;
}

template <typename T>
void Heap<T>::sift_up(size_t index) {
	if (index > 0) {
		size_t parent_index = (index - 1) / 2;
		if (!comparator(heap[index], heap[parent_index])) {
			std::swap(heap[parent_index], heap[index]);
			sift_up(parent_index);
		}
	}
}

template <typename T>
void Heap<T>::sift_down(size_t index) {
	size_t largest = index;
	size_t left = index*2 + 1;
	size_t right = index*2 + 2;

	if (left < heap.size() && comparator(heap[largest], heap[left])) {
		largest = left;
	}

	if (right < heap.size() && comparator(heap[largest], heap[right])) {
		largest = right;
	}

	if (largest != index) {
		std::swap(heap[index], heap[largest]);
		sift_down(largest);
	}

}

template <typename T>
void Heap<T>::remove(size_t index) {
	if (index < heap.size()) {
		std::swap(heap[index], heap.back());
		heap.pop_back();
		if (!check_children(index)) {
			sift_down(index);
		}
	}
}

template <typename T>
bool Heap<T>::check_children(size_t index) {
	size_t left = index*2 + 1;
	size_t right = index*2 + 2;

	bool check_left = left < heap.size() && comparator(heap[left], heap[index]);
	bool check_right = right < heap.size() && comparator(heap[right], heap[index]);

	return check_left && check_right;
}

template <typename T>
T Heap<T>::pop_root() {
	T t = heap.front();
	remove(0);
	return t;
}


#endif
