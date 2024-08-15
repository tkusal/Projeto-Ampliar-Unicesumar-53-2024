import java.util.ArrayList;
import java.util.List;

public class CarrinhoCompras {
    
    private List<Item> itemList;

public void adicionarItem(String nome, double preco, int quantidade){
    Item item = new Item(nome, preco, quantidade);
    this.itemList.add(item);
  }

public void removerItem(String nome){
    List<Item> removerItem = new ArrayList<>();
    if(!itemList.isEmpty()){
        for (Item i : itemList) {
            if(i.getNome().equalsIgnoreCase(nome)){
                removerItem.add(i);
            }
        }
    }
    itemList.removeAll(removerItem);
}
public double calcularValorTotal(){
    double  valorTotal = 0d;
    if(!itemList.isEmpty()){
        for (Item i : itemList) {
            double valorItem = i.getPreco() * i.getQuantidade();
            valorTotal+= valorItem;    
        }
        return valorTotal;
    }else{
        throw new RuntimeException("A lista esta vazia");
        }
    }
    public void exibirItens(){
        if(!itemList.isEmpty()){
            System.out.println(this.itemList);
        }else{
            System.out.println("A lista esta vazia");
        }
    }
    public static void main(String[] args) {
        CarrinhoCompras carrinhoCompra = new CarrinhoCompras();
        carrinhoCompra.adicionarItem("banana", 5.99, 2);
        carrinhoCompra.adicionarItem("maça", 2.50, 2);

        carrinhoCompra.removerItem("banana");
        System.out.printf("Seu carrinho de compras contem: ",carrinhoCompra.calcularValorTotal());
    }
} 

