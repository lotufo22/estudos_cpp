#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int valor;
    Node* proximo;
    Node(int v) : valor(v), proximo(nullptr){}
};

struct Lista {
    Node* raiz;
    Lista(Node* node): raiz(node){}

    Lista() : raiz(nullptr){}

    void inserir_valor(int valor){
    
        Node* novo = new Node(valor);
    
        if(raiz != nullptr){
            Node* ponteiro = raiz;
    
            while(ponteiro->proximo != nullptr){
                ponteiro = ponteiro->proximo;
            }
            ponteiro->proximo = novo;
        }
        else{
            raiz = novo;
        }
    }

    void imprimir_Lista(){
        Node* atual = raiz;

        while(atual != nullptr){
            cout << atual->valor << " ";
            atual = atual->proximo;
        }

        cout << endl;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Lista lista;
    lista.inserir_valor(10);
    lista.inserir_valor(20);
    lista.inserir_valor(30);
    lista.inserir_valor(40);
    lista.inserir_valor(50);

    lista.imprimir_Lista();

    return 0;
}