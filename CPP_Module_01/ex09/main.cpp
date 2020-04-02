/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 12:44:53 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 14:21:09 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	Logger log;
	
	//log.log("logToConsole", "Test1 oui monsieur merci beaucoup");
	log.log("logToFile", "ui");
}