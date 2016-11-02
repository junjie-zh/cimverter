/*
 * Slack.cpp
 *
 *  Created on: Sep 14, 2016
 *      Author: root
 */

#include "Slack.h"

namespace ModPowerSystems {

		namespace SinglePhase {

				namespace Sources {

					Slack::Slack() : _Vnom(110000)
					{
					}

					Slack::~Slack() {
					}

					bool Slack::set_template_values(ctemplate::TemplateDictionary *dictionary)
					{

						dictionary->SetFormattedValue(VNOM,"%.2f",this->Vnom());
						dictionary->SetValue(NAME,this->name());
						dictionary->SetValue(VNOM_DISPLAYUNIT,(ModelicaUnit[this->Vnom_displayUnit()]));
						dictionary->SetFormattedValue(FREQUENCY,"%.1f",this->frequency());
						dictionary->SetValue(FREQUENCY_DISPLAYUNIT,(ModelicaUnit[this->frequency_displayUnit()]));
						dictionary->SetFormattedValue(PHIV,"%.2f",this->phiV());
						dictionary->SetValue(PHIV_DISPLAYUNIT,(ModelicaUnit[this->phiV_displayUnit()]));

		        this->set_template_annotation_values(dictionary);

						return true;
					}

				} /* namespace Sources */

		} /* namespace SinglePhase */

} /* namespace ModPowerSystems */
