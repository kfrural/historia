#include<iostream>
using namespace std;

void introducao(){
    cout<<"\t\t\t\tA LUZ NO FIM DO CODIGO! (:\n\n"<< endl;

    cout<<"Bem vindo(a) ao jogo, nesse game voce ira aprender um pouco mais "<<endl;
    cout<<"do mundo da computacao e suas possivel areas de atuacao. Ao final do quiz"<<endl; 
    cout<<"nos iremos direciona-los para uma respectiva area que acreditamos que"<<endl;
    cout<<"combine com voce. (:\n"<<endl;;

    cout<<"Primeiramente, voce precisa saber, que a computacao pode estar presente"<<endl;
    cout<<"em todas as areas, sendo aplicada de diversas formas.Como por exemplo no"<<endl;
    cout<<"agronegocio com a automacao em maquinas, uso de drones, sistema de irrigacao,"<<endl;
    cout<<"entre outros; esta presente tambem em outras areas, como medicina, ensino,"<<endl;
    cout<<"e em todo lugar que voce possa imaginar. Temos como principal objetivo, trazer"<<endl;
    cout<<"a otimizacao de tarefas, praticidade e rapidez.</> \n"<<endl;
    
    cout<<"Vamos comecar!!!Escolha uma area a qual pretende conhecer.\n"<<endl;
    cout<<"(Vale ressaltar que a computacao nao se limita as areas que vamos abordar aqui!) (:\n"<<endl;
}

void imprimeMenu(){
    cout<<"\t\t------------------------------------------------------------------------- "<<endl;
    cout<<"\t\t|\t\t1_\t>>INTELIGENCIA ARTIFICIAL<<\t\t\t|"<<endl;
    cout<<"\t\t|\t\t2_\t>>COMPUTACAO GRAFICA<<\t\t\t\t|"<<endl;
    cout<<"\t\t|\t\t3_\t>>ENGENHARIA DE SOFTWARE<<\t\t\t|"<<endl;
    cout<<"\t\t|\t\t4_\t>>SEGURANCA DA INFORMACAO<<\t\t\t|"<<endl;
    cout<<"\t\t|\t\t5_\t>>ARQUITETURA DE COMPUTADORES<<\t\t\t|"<<endl;
    cout<<"\t\t------------------------------------------------------------------------- "<<endl;
}

void introIA(){
    cout << "\n A inteligência artificial é como um cérebro de computador superinteligente. É um "<<endl;
    cout <<"jeito de fazer as máquinas aprenderem e tomar decisões sozinhas, como se fossem "<< endl;
    cout << "inteligentes de verdade. A gente encontra ela em várias coisas, como nos assistentes" << endl;
    cout <<"de voz e nos carros que dirigem sozinhos. É incrível como ela aprende com informações" <<endl;
    cout <<"e vai ficando cada vez melhor."<< endl;
}

void introComputacaoGrafica(){
    cout<< "\nComputação gráfica é uma forma de criar imagens e animações usando computadores." <<endl;
    cout << "É como uma arte digital! Com a computação gráfica, podemos criar coisas incríveis, como" << endl;
    cout << "filmes de animação, jogos de videogame e até mesmo efeitos especiais para filmes. Tudo" <<endl;
    cout << "é feito através de programas especiais que permitem desenhar, modelar e animar objetos em" << endl;
    cout << "um ambiente virtual. É como ter um pincel e uma tela digitais! É incrível como os artistas" <<endl; 
    cout << "da computação gráfica conseguem criar mundos e personagens que parecem reais, mesmo sendo" <<endl;
    cout << "feitos apenas com bits e pixels. É uma mistura de arte e tecnologia que torna tudo possível!" << endl;
}

void introEngSoftware(){
    cout << "\n Engenharia de software é uma área da computação que se preocupa em criar programas e" << endl;
    cout << "aplicativos de forma organizada e eficiente. É como construir um prédio, mas em vez de" << endl;
    cout << "tijolos e cimento, usamos código de computador. Os engenheiros de software projetam," << endl;
    cout << "desenvolvem e testam os programas para garantir que eles funcionem corretamente e atendam" << endl;
    cout << "às necessidades das pessoas. Eles usam diferentes etapas, como análise de requisitos," << endl;
    cout << "projeto, codificação e testes, para criar softwares de qualidade. É um trabalho em equipe," << endl;
    cout << "onde os engenheiros colaboram e usam ferramentas especiais para criar programas úteis e" <<endl;
    cout << "confiáveis. A engenharia de software é fundamental para que os computadores e dispositivos" << endl;
    cout << "funcionem da maneira que esperamos, tornando nossa vida digital mais fácil e divertida!" << endl;
}

void introSegurancaInfo(){
    cout << "\n Segurança da informação é uma maneira de proteger as informações importantes e pessoais" << endl;
    cout << "contra ameaças e ataques indesejados. É como trancar uma porta para manter as coisas seguras" << endl;
    cout << "dentro de casa. No mundo digital, a segurança da informação é fundamental para garantir que" << endl;
    cout << "nossos dados, como senhas, informações bancárias e dados pessoais, não caiam nas mãos" << endl;
    cout << "erradas. Isso envolve usar senhas fortes, atualizar os programas e sistemas regularmente" << endl;
    cout << "e estar atento a possíveis golpes ou fraudes online. Também é importante proteger os" << endl;
    cout << "dispositivos, como computadores e smartphones, contra vírus e malware. A segurança da informação" <<endl;
    cout << "nos ajuda a ter tranquilidade e confiança ao usar a tecnologia no nosso dia a dia." << endl;
}

void introArquitetura(){
    cout << "\n Arquitetura de computadores é como o 'esqueleto' dos computadores. É a forma como eles" << endl;
    cout << "são projetados e como os componentes funcionam juntos. É como a base de uma casa, que sustenta" << endl;
    cout << "tudo. A arquitetura de um computador inclui coisas como o processador, a memória, o disco rígido" << endl;
    cout << "e os periféricos, como teclado e mouse. Os engenheiros de computação projetam essa arquitetura" << endl;
    cout << "para garantir que tudo funcione em harmonia. Eles escolhem a velocidade do processador, a capacidade" << endl;
    cout << "da memória e o tipo de conexão entre os componentes. A arquitetura de computadores é importante" << endl;
    cout << "porque afeta a velocidade, o desempenho e a capacidade de um computador realizar diferentes" << endl;
    cout << "tarefas. É como construir uma base sólida para que o computador funcione da melhor maneira" << endl;
    cout << "possível!" <<endl;
}

void opcaoMenu(int opcao){
    switch(opcao){
        case 1:
            introIA();
            break;
        case 2:
            introComputacaoGrafica();
            break;
        case 3:
            introComputacaoGrafica();
            break;
        case 4:
            introSegurancaInfo();
            break;
        case 5:
            introArquitetura();
            break;
        default:
			cout << "Opção inválida!";
    }
}

int main(){

int opcao = 0;

    introducao();
    imprimeMenu();
    
    cout << "Qual area voce gostaria de saber um pouco mais? ";
    cin >> opcao;
    opcaoMenu(opcao);
    
    

    return 0;
}
