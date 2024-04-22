/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:05:12 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/22 18:13:34 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data*		data;
	uintptr_t	ptrData = 0;
	Data*		newData = NULL;

	data = new Data;
	data->value = "1305";
	data->value_int = 1489;

	std::cout << "data:\t\t" << data <<std::endl;
	std::cout << "data->value:\t" << data->value <<std::endl;
	std::cout << "data->value_int:\t" << data->value_int <<std::endl;

	std::cout  << "Calling serialize on data" << std::endl;

	ptrData = Serializer::serialize(data);

	std::cout << "ptrdata:\t" << ptrData << std::endl;

	std::cout << "Calling deserialize on newData" << std::endl;

	newData = Serializer::deserialize(ptrData);
	std::cout << "newData:\t" << newData << std::endl;
	std::cout << "newData->value:\t" << newData->value <<std::endl;
	std::cout << "newData->value_int:\t" << newData->value_int <<std::endl;


	delete data;
}
