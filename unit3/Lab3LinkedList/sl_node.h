/*
 * Name         :  sl_node.h
 * Author       :  Tyler O'Guinn
 * Description  :  Node class header file.
 */
 
 #ifndef SL_NODE
 #define SL_NODE
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 class SLNode
 {
   public:
   SLNode();
   SLNode(int parameter);
   ~SLNode();
   void set_contents(int contents);
   int contents();
   void set_next_node(SLNode* node);
   SLNode* next_node();
   
   private:
   SLNode* next_node_;
   int contents_;
   
 };
 
 #endif