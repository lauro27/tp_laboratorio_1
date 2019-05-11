#ifndef CALCULOS_H_INCLUDED
#define CALCULOS_H_INCLUDED

/** \brief Muestra un menu y escanea un numero para seleccionar
 *
 * \param float: Primer parametro para mostrar en el menu
 * \param float: Segundo parametro para mostrar en el menu
 * \return int: Opcion seleccionada
 *
 */
int seleccion(float, float);

/** \brief Pide al usuario un nuevo valor para el primer parametro
 *
 * \return float: Nuevo valor de el primer parametro
 *
 */
float setVarA();
/** \brief Pide al usuario un nuevo valor para el segundo parametro
 *
 * \return float Nuevo valor de el segundo parametro
 *
 *
 */
float setVarB();

/** \brief Muestra el resultado final de todos los calculos
 *
 * \param float: Resultado de la suma
 * \param float: Resultado de la resta
 * \param float: Resultado de la division
 * \param float: Resultado de la multiplicación
 * \param float: Resultado del factorial del primer parametro
 * \param float: Resultado del factorial del segundo parametro
 * \return void
 *
 */
void mostrarTodo(float, float, float, float, float, float);

/** \brief Suma los parametros
 *
 * \param float: Primer parametro
 * \param float: Segundo parametro
 * \return float: Resultado
 *
 */
float suma(float, float);
/** \brief  Resta los parametros
 *
 * \param float: Primer parametro
 * \param float: Segundo parametro
 * \return float: Resultado
 *
 */
float resta(float, float);
/** \brief Divide los parametros. Si el segundo es 0 muestra un error y devuelve 0
 *
 * \param float: Primer parametro
 * \param float: Segundo parametro
 * \return float: Resultado o 0 en caso de error
 *
 */
float division(float, float);
/** \brief Multiplica los parametros
 *
 * \param float: Primer parametro
 * \param float: Segundo parametro
 * \return float: Resultado
 *
 */
float multiplicacion(float, float);
/** \brief Redondea y factoriza el primer parametro. Si es negativo muestra un error y devuelve 0
 *
 * \param float: Primer parametro
 * \return float: Resultado o 0 en caso de error
 *
 */
float factorialA(float);
/** \brief Redondea y factoriza el segundo parametro. Si es negativo muestra un error y devuelve 0
 *
 * \param float: Segundo parametro
 * \return float: Resultado o 0 en caso de error
 *
 */
float factorialB(float);

#endif // CALCULOS_H_INCLUDED
