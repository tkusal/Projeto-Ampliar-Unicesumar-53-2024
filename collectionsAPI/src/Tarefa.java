public class Tarefa {
  
  private final String descricao;

  
  public Tarefa(String descricao) {
    this.descricao = descricao;
  }

  public String getDescricao() {
    return descricao;
  }

  @Override
  public String toString() {
    return "Tarefa [descricao=" + descricao + "]";
  }

  

}
