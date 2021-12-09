import React from 'react';

import { 
        Container,
        Condition,
        Row,
        HeartIcon,
        DispatchTag,
        PriceCard,
        PriceRow,
        InstallmentsInfo,
        StockStatus,
        MethodCard,
        CheckIcon,
        Actions,
        Button,
        Benefits,
        ShieldIcon
      } from './styles';

const ProdutoInt: React.FC = () => {
  return (
    <Container>
      <Condition>Tênis</Condition>

      <Row>
        <h1>Air Jordan 4</h1>
        <HeartIcon />
      </Row>

      <DispatchTag>Edição especial</DispatchTag>

      <PriceCard>
        <PriceRow>
          <span className="symbol">R$</span>
          <span className="fraction">630</span>
          <span className="cents">00</span>
        </PriceRow>

        <InstallmentsInfo>em 3x de 220,00</InstallmentsInfo>
      </PriceCard>

      <StockStatus>Estoque disponível</StockStatus>

      <MethodCard>
        <CheckIcon />

        <div>
          <span className="title">Frete caríssimo</span>
          <span className="details">Benefício Mercado Pago</span>
          <a href="#" className="more">
            Ver mais opções
          </a>
        </div>
      </MethodCard>

      <Actions>
        <Button solid>Comprar agora</Button>
        <Button>Adicionar ao carrinho</Button>
      </Actions>

      <Benefits>
        <li>
          <ShieldIcon />
          <p>
            Compra garantida, receba o produto ou devolvemos seu dinheiro.
          </p>
        </li>
      </Benefits>
    </Container>
  )
}

export default ProdutoInt;
