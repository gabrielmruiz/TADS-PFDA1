import React from 'react';

import { Container,
         Title,
         LocationCard,
         LocationIcon,
         ReputationCard,
         ReputationThermometer,
         ReputationRow,
         SupportIcon,
         ClockIcon,
         More,
   } from './styles';


const SellerInfo: React.FC = () => {
  return (
    <Container>
      <Title> Informações sobre o vendedor</Title>

     <LocationCard>
       <LocationIcon />

       <div>
         <p>Localização</p>
         <strong>São José dos Campos, São Paulo</strong>
       </div>
     </LocationCard>

     <ReputationCard>
       <ReputationThermometer>
         <li />
         <li />
         <li />
         <li />
         <li className="active"/>
       </ReputationThermometer>

       <ReputationRow>
         <div>
           <strong>2</strong>
           <span>Vendas nos últimos 4 meses</span>
         </div>

         <div>
           <strong><SupportIcon /></strong>
           <span>Atendimento de qualidade</span>
         </div>

         <div>
           <strong><ClockIcon /></strong>
           <span>Tempo de entrega</span>
         </div>
       </ReputationRow>
     </ReputationCard>

     <More href="#">Ver mais dados do vendedor</More>
    </Container>
  )
}
export default SellerInfo;
