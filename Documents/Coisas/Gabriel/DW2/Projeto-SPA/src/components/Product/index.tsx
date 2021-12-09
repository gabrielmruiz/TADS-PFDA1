import React from 'react';

import jordanImage from '../../assets/jordan4.png';
import SellerInfo from '../SellerInfo';
import ProductAction from '../ProductAction';

import { Container,
         Row,
         Panel, 
         Column, 
         Gallery, 
         Section, 
         Description,
       } from './styles';

const Product: React.FC = () => {
  return(
    <Container>
      <Row>
        <a href="#">Compartilhar</a>
        <a href="#">Denunciar</a>
      </Row>

      <Panel>
        <Column>
          <Gallery>
            <img alt="jordan" src={jordanImage} />
          </Gallery>

          <Info />
        </Column>

        <Column>
         <ProductAction />
         <SellerInfo /> 

         <WarrantySection />
        </Column>
      </Panel>
    </Container>
  );
};

const WarrantySection = () => (
  <Section>
    <h4>Garantia</h4>

    <div>
      <span>
        <p className="title">Compra garantida</p>
        <p className="description">Receba o produto ou tenha seu dinheiro de volta</p>
      </span>
      <span>
        <p className="title">Garantia do vendedor</p>
        <p className="description">Sem garantia</p>
      </span>
    </div>

    <a href="#">Saiba mais sobre garantia</a>
  </Section>
)

const Info = () => (
  <Description>
    <h2>Descrição</h2>

    <p> Tênis Air Jordan 4
    <br/>
    <br/>
    Um dos modelos de tênis mais admirados do mercado em sua versão nas cores
    preta, vermelha e roxa. Com o destaque da cor preta é trazida neutralidade
    para possibilitar várias combinações de roupas, mas mantendo o diferencial
    traz consigo detalhes em vermelho e roxo que não o deixam perder o charme.
    </p>

  </Description>
)

export default Product;
