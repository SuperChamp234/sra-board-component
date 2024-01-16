/*
 * MIT License
 *
 * Copyright (c)  2021 Society of Robotics and Automation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _UTILS_H
#define _UTILS_H

#include "esp_log.h"
#include "lsa.h"

/**
 * @brief Bound a value in a range [min, max]
 * 
 * @param val  value to be bound
 * @param min  min value which the variable can take
 * @param max  max value which the variable can take
 */
float bound(float val, float min, float max);

/**
 * @brief Maps a value in range [input_lower_limit, input_higher_limit] to [output_lower_limit, output_higher_limit]
 * 
 * @param val			value to be mapped
 * @param input_lower_limit	min value of val 
 * @param input_higher_limit	max value of val
 * @param output_lower_limit	input_lower_limit is mapped to output_lower_limit
 * @param output_higher_limit	input_higher_limit is mapped to output_higher_limit
 */
float map(float val, float input_lower_limit, float input_higher_limit, float output_lower_limit, float output_higher_limit);

/**
 * @brief Calculates the battery percentage based on the ADC reading.
 *
 * This function takes an ADC handle as input and calculates the battery percentage
 * based on the ADC reading. The ADC reading is converted to a voltage value and then
 * mapped to a battery percentage using a predefined mapping table.
 *
 * @param adc The ADC handle used for reading the battery voltage.
 * @return The battery percentage calculated based on the ADC reading.
 */
int battery_percent(adc_handle_t adc);

#endif
