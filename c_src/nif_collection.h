#ifndef ERLCASS_C_SRC_NIF_COLLECTION_H
#define ERLCASS_C_SRC_NIF_COLLECTION_H

#include "erlcass.h"

ERL_NIF_TERM nif_list_to_cass_collection(ErlNifEnv* env, ERL_NIF_TERM list, const  SchemaColumn& type, CassCollection ** col);

#endif
