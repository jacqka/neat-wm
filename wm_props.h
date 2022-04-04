#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<X11/Xutil.h>
#include<X11/Xproto.h>
#include<X11/Xlib.h>
#include<X11/Xkeysym.h>
#include<X11/Xatom.h>
#include<X11/extensions/Xi.h>
#include<X11/Xevent.h>

typedef unsigned int (wm_t);
typedef unsigned int (ev_t);
typedef const unsigned int (hw_t);
typedef unsigned char (info_t);
typedef const unsigned char (prop_t); 
typedef const uint8_t (bus_t);

enum Device_Events {

    	INPUT_EVENT_SYNC,
		INPUT_EVENT_T,
		INPUT_EVENT_T_CODE,
		INPUT_EVENT_T_VALUE,

		PROP_REL_X,
		PROP_REL_Y,
	
		PROP_ABS_VAL,
		PROP_HAS_BTN_TOOL,
		PROP_PRESSURE,

		DPY_ATTR_CUR_H, 
		DPY_ATTR_CUR_W,

		DPY_ATTR_MAX_H, 
		DPY_ATTR_MAX_W,

		DPY_ATTR_MIN_H,
		DPY_ATTR_MIN_W,

		INPUT_DEVICE_BUS,
		INPUT_DEVICE_PRODUCT,
		INPUT_DEVICE_DRIVER,
	
		INPUT_DEVICE_NAME,	
		,
} SUBS_t;

struct 




__typeof__ (max_height)(device_hw_max_h)= (void*) (max_height);
__typeof__ (max_width)(device_hw_max_w) =(void *)(max_width);
__typeof__ (input_type)(input_hw_evtype) =(void *)(input_type);
__typeof__ (input_code)(input_hw_evcode) = (input_code);
__typeof__ (value)(*input_hw_evvalue) = (void *)(value);

__typeof__ (hw_bus)(device_hw_bus) = (void *)(hw_bus);
__typeof__ (hw_product)(device_hw_product)= (void *)(hw_product);
__typeof__ (hw_driver)(device_hw_driver)= (void *)(hw_driver);

__typeof__ (device_name)(device_detail_name) = (void *)(device_name);
__typeof__ (window_name)(window_detail_name)= (void *)(window_name);

__typeof__ (x_value)(input_ev_x)= (void *)(x_value);

__typeof__ (y_value)(input_ev_y) = (void *)(y_value);





