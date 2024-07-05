package lab4;

public class Tree {
	private Node root;

	public Node find(int emp) {
		Node current = root;

		while (current.EmpNo != emp) {

			if (emp < current.EmpNo) {
				current = current.leftChild;
			} else {
				current = current.rightChild;
			}

			if (current == null) {
				System.out.println("Emp No not found !");
				return null;
			}
		}
		System.out.println("Employee name :" + current.Name);
		return current;
	}

	public void insert(int emp, String name) {

		Node n1 = new Node();
		n1.EmpNo = emp;
		n1.Name = name;

		if (root == null) {
			root = n1;
		} else {
			Node current = root;
			Node parent;

			while (true) {
				parent = current;

				if (emp < current.EmpNo) {//assign value to left child
					current = current.leftChild;
					if (current == null) {
						parent.leftChild = n1;
						return;
					}
				} else { //assign value to right child
					current = current.rightChild;
					if (current == null) {
						parent.rightChild = n1;
						return;
					}
				}
				
			}
		}

	}

	public void inOrder(Node localRoot) {//Left Root Right
		if(localRoot != null) {
			inOrder(localRoot.leftChild);
			localRoot.display();
			inOrder(localRoot.rightChild);
		}
	}
	public void TraverseInorder() {
		System.out.println("InOrder :");
		inOrder(root);	
	}

	public void preOrder(Node localRoot) {
		if(localRoot != null) {//Root Left Right
			localRoot.display();
			preOrder(localRoot.leftChild);
			preOrder(localRoot.rightChild);
		}

	}
	public void TraversePreorder() {
		System.out.println("PreOrder :");
		preOrder(root);	
	}

	public void postOrder(Node localRoot) {
		if(localRoot != null) {//Left Right Root
			postOrder(localRoot.leftChild);
			postOrder(localRoot.rightChild);
			localRoot.display();
		}
	}
	
	public void TraversePostorder() {
		System.out.println("PostOrder :");
		postOrder(root);	
	}

	public Node findRecursive(Node localRoot, int empNo) {
		if(localRoot == null) {
			return null;
		} else if(localRoot.EmpNo == empNo) {
			System.out.println(localRoot.Name);
			return localRoot;
		} else if(empNo < localRoot.EmpNo) {
			return findRecursive(localRoot.leftChild, empNo); 
		} else {
			return findRecursive(localRoot.rightChild, empNo); 
		}
	}
	
	public Node CallfindRecursive(int Empno) {
		return findRecursive(root, Empno);
	}

	public void deleteAll() {
		root = null;
	}

}
