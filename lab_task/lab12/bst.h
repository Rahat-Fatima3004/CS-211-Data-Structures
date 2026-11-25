#pragma once
//bst class implementation
template <typename T>
class bst {
	template <typename U>
	struct node {
		node<U>* left;
		node<U>* right;
		node<U>* parent;
		U val;
		node() {
			left = right = nullptr;
		}

	};
	node<T>* head;
public:
	//constructor
	bst() {
		
		head = new node<T>;
		head->left = head->right = head->parent = head;
		
	}
	
	//insert
	void insert(const T& val)
	{
		if (head->parent == head) {
			node<T>* temp;
			temp = new node<T>;
			temp->val = val;
			head->parent = temp;
			head->right = head->left = temp;
			temp->parent = head;
		}
		else
			node<T>* temp;
		temp = new node<T>;
		temp->val = val;
		node<T>* ptr;
		ptr = head->parent;

		while (1) {
			if (temp->val < ptr->val)
			{
				if (ptr->left != head) {
					ptr = ptr->left;
				}
				else {
					ptr->left = temp;
					temp->parent = ptr;
					if (temp->val < head->left->val)
						head->left = temp;
					return;
				}
			}
			else
			{
				if (ptr->right != head) {
					ptr = ptr->right;
				}
				else {
					ptr->right = temp;
					temp->parent = ptr;
					if (temp->val > head->right->val)
						head->right = temp;

					return;
				}
			}
		}
		


	}

};
