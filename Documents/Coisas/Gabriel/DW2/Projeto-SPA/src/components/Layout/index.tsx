import React from "react";
import Header from "../Header";
import Footer from "../Footer";
import Product from "../Product";

import { Container, Caixa } from './styles';

const Layout: React.FC = () => {
    return (
        <Container>
            <Header />

           <Caixa>
           <Product /> 
           </Caixa> 

           <Footer />   
        </Container>
    );
};

export default Layout;