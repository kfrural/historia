#include <iostream>
using namespace std;

void introducao()
{
    cout << "\t\t\t\tA LUZ NO FIM DO CODIGO! (:\n\n"
         << endl;

    cout << "Bem vindo(a) ao jogo, nesse game voce ira aprender um pouco mais " << endl;
    cout << "do mundo da computacao e suas possivel areas de atuacao. Ao final do quiz" << endl;
    cout << "nos iremos direciona-los para uma respectiva area que acreditamos que" << endl;
    cout << "combine com voce. (:\n"
         << endl;
    ;

    cout << "Primeiramente, voce precisa saber, que a computacao pode estar presente" << endl;
    cout << "em todas as areas, sendo aplicada de diversas formas.Como por exemplo no" << endl;
    cout << "agronegocio com a automacao em maquinas, uso de drones, sistema de irrigacao," << endl;
    cout << "entre outros; esta presente tambem em outras areas, como medicina, ensino," << endl;
    cout << "e em todo lugar que voce possa imaginar. Temos como principal objetivo, trazer" << endl;
    cout << "a otimizacao de tarefas, praticidade e rapidez.</> \n"
         << endl;

    cout << "Vamos comecar!!!Escolha uma area a qual pretende conhecer.\n"
         << endl;
    cout << "(Vale ressaltar que a computacao nao se limita as areas que vamos abordar aqui!) (:\n"
         << endl;
}

void imprimeMenu()
{
    cout << "\t\t------------------------------------------------------------------------- " << endl;
    cout << "\t\t|\t\t1_\t>>INTELIGENCIA ARTIFICIAL<<\t\t\t|" << endl;
    cout << "\t\t|\t\t2_\t>>COMPUTACAO GRAFICA<<\t\t\t\t|" << endl;
    cout << "\t\t|\t\t3_\t>>ENGENHARIA DE SOFTWARE<<\t\t\t|" << endl;
    cout << "\t\t|\t\t4_\t>>SEGURANCA DA INFORMACAO<<\t\t\t|" << endl;
    cout << "\t\t|\t\t5_\t>>ARQUITETURA DE COMPUTADORES<<\t\t\t|" << endl;
    cout << "\t\t------------------------------------------------------------------------- " << endl;
}

void IAMachine(){
    cout << "\n1- Aplicacao tecnicas e algoritmos de aprendizado de maquina para resolver problemas " <<endl;
    cout << " complexos e desenvolver sistemas inteligentes. Eles possuem conhecimentos avancados em" <<endl;
    cout << " programacao, matematica e estatistica, alem de compreenderem os principios do aprendizado" << endl;
    cout << " de maquina e suas abordagens. Responsaveis pela coleta, limpeza e analise de dados, escolhem" << endl;
    cout << " e treinam modelos, ajustam parametros e otimizam o desempenho. Estar atualizado com pesquisas" << endl;
    cout << " e avanços é fundamental para aplicar melhores praticas e encontrar solucoes inovadoras" << endl;
}

void IACientistaDados(){
    cout << "\n2-  Extrair insights valiosos e toma decisoes estrategicas a partir de grandes volumes de"<<endl;
    cout <<" dados. Com habilidades em programacao, estatistica e matematica, eles coletam, organizam e" <<endl;
    cout << " analisam os dados, aplicando modelos estatisticos e algoritmos de machine learning. Compreendendo,"<<endl;
    cout <<" o contexto do negocio, traduzem os resultados em insights acionaveis para contribuir com a tomada"<<endl;
    cout <<" de decisoes estrategicas. Esses profissionais desempenham um papel fundamental ao aproveitar o"<<endl;
    cout <<" potencial dos dados para impulsionar o sucesso das organizações." <<endl;
}

void desenvolvedor(){
    cout << "\n3- Criar e implementa sistemas e aplicacoes com tecnicas avancadas de IA. Eles possuem conhecimentos" << endl;
    cout << " em programacao, algoritmos e aprendizado de maquina, utilizando abordagens como redes neurais e " <<endl;
    cout << " processamento de linguagem natural. Responsaveis pelo design, desenvolvimento e otimizacao de " <<endl; 
    cout << " algoritmos e modelos de IA, tambem realizam testes e validacoes para garantir a qualidade das solucoes." <<endl;
    cout << " Atualizados com os avancos da area, buscam aplicar as melhores praticas e explorar novas oportunidades" <<endl;
    cout << " de utilizacao da IA em diferentes setores" <<endl;
}

void introIA()
{
    int opcao2 = 0;
    int opcaoProfissao = 0;
    cout << "\n A inteligencia artificial eh como um cerebro de computador superinteligente. Eh um " << endl;
    cout << "jeito de fazer as maquinas aprenderem e tomar decisoes sozinhas, como se fossem " << endl;
    cout << "inteligentes de verdade. A gente encontra ela em varias coisas, como nos assistentes" << endl;
    cout << "de voz e nos carros que dirigem sozinhos. Eh incrivel como ela aprende com informacoes" << endl;
    cout << "e vai ficando cada vez melhor." << endl;
    cout << "\n1- Quero saber mais sobre\t 2- Voltar ao menu principal\n";
    cout << "\nEscolha uma opcao: ";
    cin >> opcao2;
    if (opcao2 == 1)
    {
        cout << "Esses sao alguns exemplos dos principais deveres na area: \n";
        IAMachine();
        IACientistaDados();
        desenvolvedor();
        cout << "\nEscolha uma opcao: ";
        cin >> opcaoProfissao;
        if(opcaoProfissao==1){
            cout << "\nA profissao ideal para voce eh Engenheiro de Machine Learning\n\n";
        }else if(opcaoProfissao==2){
            cout << "\nA profissao ideal para voce eh Cintista de Dados\n\n";
        }else if(opcaoProfissao==3){
            cout << "\nA profissao ideal para voce eh Desenvolvedor de Inteligência Artificial\n\n";
        }else{
            cout << "Opcao invalido\n";
        }
    }
    else if (opcao2 == 2)
    {
        imprimeMenu();
    }
    else
    {
        cout << "Opcao invalido\n";
        introIA();
    }
}

void designerGrafico(){
    cout << "\n1- Eh um profissional criativo especializado em criar comunicações visuais eficazes," << endl;
    cout << " combinando elementos visuais, tipografia e imagens. Eles trabalham em varias midias," << endl;
    cout << " como impressao, digital e midias sociais, e criam desde logotipos e identidades" << endl;
    cout << " visuais ate pecas publicitarias e interfaces de usuario. Alem das habilidades tecnicas" << endl;
    cout << " em software de design, eles devem ter uma compreensao profunda dos principios do design," << endl;
    cout << " cores, formas e estetica, adaptando-se as necessidades do cliente." <<endl;
}

void designerGames(){
    cout << "\n2- Eh um profissional criativo e talentoso que projeta e desenvolve os elementos" << endl;
    cout << " essenciais de um jogo. Eles combinam narrativa, mecanica de jogo, arte, audio e interatividade" <<endl;
    cout << " para criar experiencias envolventes. Trabalham em equipe com programadores, artistas e" << endl;
    cout << " escritores para criar niveis, personagens e desafios. Tambem criam regras e sistemas para" << endl;
    cout << " equilibrar a diversao e o desafio. Alem disso, estao envolvidos no teste e refinamento do" << endl;
    cout << " jogo, visando proporcionar experiencias memoraveis aos jogadores." << endl;
}

void desenhistaIndustrial(){
    cout << "\n3- Projeta produtos em varios setores, combinando estetica, funcionalidade e usabilidade." << endl;
    cout << " Eles utilizam softwares e tecnicas de desenho para visualizar e comunicar ideias, trabalhando" << endl;
    cout << " em equipes multidisciplinares para garantir a viabilidade tecnica e producao dos projetos." << endl;
    cout << " Essa profissao requer criatividade, habilidades tecnicas e conhecimento de materiais e" << endl;
    cout << " processos de fabricacao, visando melhorar a experiencia do usuario e trazer inovacao para" << endl;
    cout << " produtos do dia a dia." << endl;
}

void introComputacaoGrafica()
{
    int opcao2 = 0;
    int opcaoProfissao = 0;
    cout << "\nComputacao grafica eh uma forma de criar imagens e animacoes usando computadores." << endl;
    cout << "Eh como uma arte digital! Com a computacao grafica, podemos criar coisas incriveis, como" << endl;
    cout << "filmes de animacao, jogos de videogame e ate mesmo efeitos especiais para filmes. Tudo" << endl;
    cout << "eh feito atraves de programas especiais que permitem desenhar, modelar e animar objetos em" << endl;
    cout << "um ambiente virtual. Eh como ter um pincel e uma tela digitais! Eh incrivel como os artistas" << endl;
    cout << "da computacao grafica conseguem criar mundos e personagens que parecem reais, mesmo sendo" << endl;
    cout << "feitos apenas com bits e pixels. Eh uma mistura de arte e tecnologia que torna tudo possivel!" << endl;
    cout << "\n1- Quero saber mais\t 2- Voltar ao menu principal\n";
    cout << "\nEscolha uma opcao: ";
    cin >> opcao2;
    if (opcao2 == 1)
    {
        cout << "Esses sao alguns exemplos dos principais deveres na area: \n";
        designerGrafico();
        designerGames();
        desenhistaIndustrial();
        cout << "\nEscolha uma opcao: ";
        cin >> opcaoProfissao;
        if(opcaoProfissao==1){
            cout << "\nA profissao ideal para voce eh Designer Grafico\n\n";
        }else if(opcaoProfissao==2){
            cout << "\nA profissao ideal para voce eh Designer de Games\n\n";
        }else if(opcaoProfissao==3){
            cout << "\nA profissao ideal para voce eh Desenhista Industrial\n\n";
        }else{
            cout << "Opcao invalido\n";
        }
    }
    else if (opcao2 == 2)
    {
        imprimeMenu();
    }
    else
    {
        cout << "Opcao invalido\n";
        introComputacaoGrafica();
    }
}

void desSoftware(){
    cout << "\n1- Criar e implementar programas e apps, escrevendo, testando e mantendo o codigo que " << endl;
    cout << " os faz funcionar. Os desenvolvedores tem habilidades em programacao, conhecimento de" << endl;
    cout << "linguagens e trabalham em equipe para transformar requisitos em software funcional. Essa" << endl;
    cout << "profissao impulsiona a inovacao e melhora a experiencia do usuario em varios setores." << endl;
}

void arquiteturaProduto(){
    cout << "\n2- Projetar e desenvolver produtos que atendam as necessidades dos usuarios e as demandas" << endl;
    cout << " do mercado, combinando estetica, funcionalidade e usabilidade. Os arquitetos de produtos" << endl;
    cout << " consideram aspectos como ergonomia, materiais, tecnologias e processos de fabricacao," << endl;
    cout << " trabalhando desde a concepcao ate a producao. Eles utilizam tecnicas de design, prototipagem" << endl;
    cout << " e testes para garantir a qualidade e a viabilidade tecnica dos produtos. Colaboram com" << endl;
    cout << " equipes multidisciplinares para assegurar que os produtos atendam as expectativas dos" << endl;
    cout << " usuarios e se destaquem no mercado." << endl;
}

void operacaoTeste(){
    cout << "\n3- Planejar, executar e gerenciar testes em projetos de software, produtos ou sistemas." << endl;
    cout << " Os profissionais dessa area desenvolvem estrategias de teste, realizam testes manuais e" << endl;
    cout << " automatizados, e documentam os resultados. Trabalhando em colaboracao com equipes de" << endl;
    cout << " desenvolvimento, garantem a qualidade dos produtos. Os operadores de testes possuem" << endl;
    cout << " habilidades em tecnicas e ferramentas de teste, sendo essenciais na deteccao de falhas e" << endl;
    cout << " aprimoramento da qualidade, visando solucoes confiaveis e sem erros para os usuarios finais." << endl;
}

void introEngSoftware()
{
    int opcao2 = 0;
    int opcaoProfissao = 0;
    cout << "\n Engenharia de software eh uma area da computacao que se preocupa em criar programas e" << endl;
    cout << "aplicativos de forma organizada e eficiente. Eh como construir um predio, mas em vez de" << endl;
    cout << "tijolos e cimento, usamos codigo de computador. Os engenheiros de software projetam," << endl;
    cout << "desenvolvem e testam os programas para garantir que eles funcionem corretamente e atendam" << endl;
    cout << "as necessidades das pessoas. Eles usam diferentes etapas, como analise de requisitos," << endl;
    cout << "projeto, codificação e testes, para criar softwares de qualidade. Eh um trabalho em equipe," << endl;
    cout << "onde os engenheiros colaboram e usam ferramentas especiais para criar programas uteis e" << endl;
    cout << "confiaveis. A engenharia de software eh fundamental para que os computadores e dispositivos" << endl;
    cout << "funcionem da maneira que esperamos, tornando nossa vida digital mais facil e divertida!" << endl;
    cout << "\n1- Quero saber mais\t 2- Voltar ao menu principal\n";
    cout << "\nEscolha uma opcao: ";
    cin >> opcao2;
    if (opcao2 == 1)
    {
        cout << "Esses sao alguns exemplos dos principais deveres na area: \n";
        desSoftware();
        arquiteturaProduto();
        operacaoTeste();
        cout << "\nEscolha uma opcao: ";
        cin >> opcaoProfissao;
        if(opcaoProfissao==1){
            cout << "\nA profissao ideal para voce eh Desenvolvimento de Softwares e Apps\n\n";
        }else if(opcaoProfissao==2){
            cout << "\nA profissao ideal para voce eh Arquitetura de Produtos \n\n";
        }else if(opcaoProfissao==3){
            cout << "\nA profissao ideal para voce eh Operação de Testes \n\n";
        }else{
            cout << "Opcao invalido\n";
        }
    }
    else if (opcao2 == 2)
    {
        imprimeMenu();
    }
    else
    {
        cout << "Opcao invalido\n";
        introEngSoftware();
    }
}

void desSoftSeguranca(){
    cout << "\n1- Criar programas e sistemas que protegem informacoes e garantem a seguranca cibernetica." << endl;
    cout << " Os profissionais dessa area projetam softwares com recursos de criptografia, autenticação," << endl;
    cout << " deteccao de intrusoes e prevencao de ameacas. Trabalham em colaboracao com equipes de seguranca" << endl;
    cout << " cibernetica para analisar riscos, identificar vulnerabilidades e implementar soluções que" << endl;
    cout << " preservem a integridade e confidencialidade dos dados. Essa profissao desempenha um papel" << endl;
    cout << " essencial na protecao de sistemas e informacoes vitais, ajudando a mitigar riscos e combater" << endl;
    cout << " ameaças ciberneticas." << endl;
}

void segForense(){
    cout << "\n2- Investiga incidentes de seguranca cibernetica, coletando evidencias e identificando violacoes." << endl;
    cout << " Os profissionais dessa area aplicam tecnicas de coleta, preservacao e analise de dados," << endl;
    cout << " combinando conhecimentos em ciencia forense, computacao e leis de seguranca. Eles examinam" << endl;
    cout << " sistemas comprometidos, identificam vulnerabilidades, recuperam dados apagados e fornecem" << endl;
    cout << " relatorios detalhados. Trabalham em conjunto com equipes de seguranca, advogados e autoridades" << endl;
    cout << " legais para apresentar evidencias em casos de crimes ciberneticos. A seguranca forense" << endl;
    cout << " desempenha um papel crucial na investigacao e resposta a incidentes, protegendo dados e" << endl;
    cout << " responsabilizando os envolvidos em atividades ilicitas." << endl;
}

void inteligenciaEstado(){
    cout << "\n3- Coleta e analisa informacoes estrategicas para apoiar governos em assuntos de seguranca" << endl;
    cout << " e politica externa. Os profissionais dessa area monitoram ameacas, identificam oportunidades," << endl;
    cout << " realizam analises de risco e produzem relatorios. Eles utilizam fontes diversas, como dados de" << endl;
    cout << " inteligencia, informacoes diplomaticas, fontes humanas e tecnologias de vigilancia para obter" << endl;
    cout << " uma visao precisa da situacao. Trabalhando em colaboracao com outras agencias e orgaos" << endl;
    cout << " governamentais, desempenham um papel crucial na tomada de decisoes estrategicas, prevencao" << endl;
    cout << " de ameacas e apoio aos interesses nacionais" << endl;
}

void introSegurancaInfo()
{
    int opcao2 = 0;
    int opcaoProfissao = 0;
    cout << "\n Seguranca da informacao eh uma maneira de proteger as informacoes importantes e pessoais" << endl;
    cout << "contra ameacas e ataques indesejados. Eh como trancar uma porta para manter as coisas seguras" << endl;
    cout << "dentro de casa. No mundo digital, a segurança da informacao eh fundamental para garantir que" << endl;
    cout << "nossos dados, como senhas, informacoes bancarias e dados pessoais, nao caiam nas maos" << endl;
    cout << "erradas. Isso envolve usar senhas fortes, atualizar os programas e sistemas regularmente" << endl;
    cout << "e estar atento a possiveis golpes ou fraudes online. Tambem eh importante proteger os" << endl;
    cout << "dispositivos, como computadores e smartphones, contra virus e malware. A segurança da informacao" << endl;
    cout << "nos ajuda a ter tranquilidade e confianca ao usar a tecnologia no nosso dia a dia." << endl;
    cout << "\n1- Quero saber mais\t 2- Voltar ao menu principal\n";
    cout << "\nEscolha uma opcao: ";
    cin >> opcao2;
    if (opcao2 == 1)
    {
        cout << "Esses sao alguns exemplos dos principais deveres na area: \n";
        desSoftSeguranca();
        segForense();
        inteligenciaEstado();
        cout << "\nEscolha uma opcao: ";
        cin >> opcaoProfissao;
        if(opcaoProfissao==1){
            cout << "\nA profissao ideal para voce eh Desenvolvimento de Softwares de Segurança\n\n";
        }else if(opcaoProfissao==2){
            cout << "\nA profissao ideal para voce eh Segurança Forense \n\n";
        }else if(opcaoProfissao==3){
            cout << "\nA profissao ideal para voce eh Inteligência de Estado \n\n";
        }else{
            cout << "Opcao invalido\n";
        }
    }
    else if (opcao2 == 2)
    {
        imprimeMenu();
    }
    else
    {
        cout << "Opcao invalido\n";
        introSegurancaInfo();
    }
}

void arquitetoComp(){
    cout << "\n1- Projetar e definir a arquitetura de sistemas computacionais, selecionando e organizando" << endl;
    cout << " componentes de hardware, definindo protocolos de comunicação e otimizando o desempenho. Eles" << endl;
    cout << " analisam requisitos, consideram as necessidades dos usuarios e projetam solucoes em colaboracao" << endl;
    cout << " com engenheiros de hardware e software. Os arquitetos de computadores melhoram o sistema," << endl;
    cout << " considerando escalabilidade, segurança e confiabilidade, garantindo seu funcionamento" << endl;
    cout << " adequado e eficiente." << endl;
}

void engHardware(){
    cout << "\n2- Responsavel pelo projeto, desenvolvimento e implementacao de componentes eletronicos que" << endl;
    cout << " compoem os sistemas computacionais. Eles aplicam conhecimentos em engenharia, eletronica e" << endl;
    cout << " design de sistemas para criar hardware eficiente. Trabalham em equipe com arquitetos de" << endl;
    cout << " computadores, engenheiros de software e designers para garantir a integracao perfeita entre" << endl;
    cout << " hardware e software. Suas atividades incluem o projeto de placas de circuito impresso, seleção" << endl;
    cout << " de componentes, teste e validação de hardware. Os engenheiros de hardware mantem-se atualizados" << endl;
    cout << " sobre as ultimas tendencias e tecnologias, impulsionando avancos tecnologicos em diversas areas." << endl;
}

void engSoftBaixoNivel(){
    cout << "\n3- Desenvolve software que interage diretamente com o hardware de um sistema. Eles usam" << endl;
    cout << " linguagens de programacao de baixo nivel, como Assembly e C, e tem amplo conhecimento sobre" << endl;
    cout << " o funcionamento do hardware. Seu trabalho eh otimizar o desempenho, a eficiencia e a" << endl;
    cout << " seguranca dos sistemas, escrevendo codigo que controla dispositivos e recursos de hardware." << endl;
    cout << " Lidam com gerenciamento de memoria, operacoes de E/S, otimizacao de codigo e resolucao de" << endl;
    cout << " problemas de baixo nivel. Tambem realizam testes e depuracoes em nivel de hardware. Essa" << endl;
    cout << " profissao eh crucial no desenvolvimento de sistemas embarcados, drivers de dispositivo e" << endl;
    cout << " firmware, garantindo a integração perfeita entre software e hardware." << endl;
}

void introArquitetura()
{
    int opcao2 = 0;
    int opcaoProfissao = 0;
    cout << "\n Arquitetura de computadores eh como o 'esqueleto' dos computadores. Eh a forma como eles" << endl;
    cout << "sao projetados e como os componentes funcionam juntos. Eh como a base de uma casa, que sustenta" << endl;
    cout << "tudo. A arquitetura de um computador inclui coisas como o processador, a memoria, o disco rigido" << endl;
    cout << "e os perifericos, como teclado e mouse. Os engenheiros de computacao projetam essa arquitetura" << endl;
    cout << "para garantir que tudo funcione em harmonia. Eles escolhem a velocidade do processador, a capacidade" << endl;
    cout << "da memoria e o tipo de conexao entre os componentes. A arquitetura de computadores eh importante" << endl;
    cout << "porque afeta a velocidade, o desempenho e a capacidade de um computador realizar diferentes" << endl;
    cout << "tarefas. Eh como construir uma base solida para que o computador funcione da melhor maneira" << endl;
    cout << "possivel!" << endl;
    cout << "\n1- Quero saber mais\t 2- Voltar ao menu principal\n";
    cout << "\nEscolha uma opcao: ";
    cin >> opcao2;
    if (opcao2 == 1)
    {
        cout << "Esses sao alguns exemplos dos principais deveres na area: \n";
        arquitetoComp();
        engHardware();
        engSoftBaixoNivel();
        cout << "\nEscolha uma opcao: ";
        cin >> opcaoProfissao;
        if(opcaoProfissao==1){
            cout << "\nA profissao ideal para voce eh Arquiteto de Computadores\n\n";
        }else if(opcaoProfissao==2){
            cout << "\nA profissao ideal para voce eh Engenheiro de Hardware \n\n";
        }else if(opcaoProfissao==3){
            cout << "\nA profissao ideal para voce eh Engenheiro de Software de Baixo Nivel \n\n";
        }else{
            cout << "Opcao invalido\n";
        }
    }
    else if (opcao2 == 2)
    {
        imprimeMenu();
    }
    else
    {
        cout << "Opcao invalido\n";
        introArquitetura();
    }
}

void opcaoMenu(int opcao)
{
    switch (opcao)
    {
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

int main()
{

    int opcao = 0;

    introducao();
    imprimeMenu();

    cout << "Qual area voce gostaria de saber um pouco mais? ";
    cin >> opcao;
    opcaoMenu(opcao);

    return 0;
}
