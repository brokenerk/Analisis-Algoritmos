void TraverseInorder(TreeNode root){
	if(root != null){
		TraverseInorder(root.getLeft());
		process(root.getValue());
		TraverseInorder(root.getRight());
	}
}