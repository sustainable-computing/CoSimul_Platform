/*
 *
 * Copyright (c) 2019 Evandro de Souza
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author:  Evandro de Souza <evandro@ualberta.ca>
 * Date:    2019.08.14
 * Company: University of Alberta/Canada - Computing Science
 *
 */


#include "MosaikSim.h"
#include "NS3Netsim.h"


int main (int argc, char *argv[])
{
//  LogComponentEnable ("SmartgridDefaultSimulatorImpl", LOG_LEVEL_ALL);
  std::cout << "NS3_SimulationModel:main argv[1]: " << argv[1] << std::endl;
  NS3Netsim objNetsim;
  MosaikSim sim(argv[1], &objNetsim);
}
