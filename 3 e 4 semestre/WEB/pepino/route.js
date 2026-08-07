import express from 'express';
const router = express.Router();

import { consultarLivro, consultarLivros } from './livro/consultarLivro.js';
import { adicionarLivro } from './livro/adicionarLivro.js';
import { deleteLivro } from './livro/deleteLivro.js';
import { atualizarLivro } from './livro/atualizarLivro.js';

router.get('/livro', consultarLivros);
router.get('/livro/:id', consultarLivro);
router.post('/livro', adicionarLivro);
router.put('/livro/:id', atualizarLivro);
router.delete('/livro/:id', deleteLivro);

import { consultarUser, consultarUsers } from './user/consultarUser.js';
import { adicionarUser } from './user/adicionarUser.js';
import { deleteUser } from './user/deleteUser.js';
import { atualizarUser } from './user/atualizarUser.js';

router.get('/user', consultarUsers);
router.get('/user/:id', consultarUser);
router.post('/user', adicionarUser);
router.put('/user/:id', atualizarUser); 
router.delete('/user/:id', deleteUser);

import {adicionarLoc} from './locacao/adicionarLoc.js';
import {consultarLocs} from './locacao/consultarLoc.js';

router.get('/locar', consultarLocs);
router.post('/locar', adicionarLoc);
export default router;