#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<string.h>
#include<libevdev/libevdev.h>
#include<X11/Xlib.h>
#include<X11/Xproto.h>
#include<X11/Xatom.h>
#include<X11/Xutil.h>

typedef uint16_t bus_t;

namespace Device {
		
	class Input {
		
		public:
			struct Keys{
	
				XKeyEvent *key;

				unsigned char *type, *code;
				;
					
				struct input_event ev_key;
				struct libevdev *keyb;
				bus_t device, driver;

				const unsigned char *dev_name;
				int ev_value;

				bool syn;
					
					};

			struct Cursor {

				XAtom *Cursor;
				
				unsigned char *code, *type;
				unsigned int curs_x, curs_y;
				bus_t bit;

				struct libevdev *curs;
				struct input_event ev_curs;
		
					unsigned long pres;
					int ev_value;

				bool syn;

			};
	}

namespace Props {
			
	class Fixed {
			struct Display_HW {

				Display *dpy;
				
				const unsigned int height, width;
				unsigned long **plane;

				int cells;	
				Atom **disp;
				
				Visual *visual;
				Colormap *cmap;
				Pixmap *pmap;
				
						};

	class Mutable  {
		
		private:
			

			struct Window {
					
			Atom *win_atoms =  { XA_WIN_MAX, XA_WIN_MIN, XA_WM_SIZE, XA_WM_CLIENT };

					const unsigned char *WName;
					const unsigned char *Wcolor;

					unsigned int win_h, win_w;
					unsigned int min_h, max_h;
					unsigned int max_h, max_w;

						};
		
		public:

			struct Screen {
					
					Window *w;
					
					Props::Fixed::Display_HW *disp;

					unsigned int num;
					const unsigned char *Name;

					Atom *atoms[] = { XA_RESOLUTION, XA_VISUAL, XA_DEFAULT_DISPLAY, XA_COLORMAP, XA_PIXMAP };
							};
	}
	
		
	struct Session {
					
			Atom *Resource_Mgr;
			
			Drawable d;

			int root_win;
			int planes;
			int cells;
			
			Props::Mutable::Screen *scr;
			Props::Mutable::Window *w;

					
					};
	
	
	}
}


namespace Event {

Props::Fixed::HW_Display *get_map_display(Display *dpy, Window *win, int num){
			
	
	Props::Fixed::HW_Display *disp;

	size_t *dpy_ptr = calloc(1, sizeof(dpy));
		
		memset(dpy_ptr, dpy, sizeof(dpy));
				
			Xfree(dpy);

		disp->width = XDisplayWidth(dpy_ptr, num);	
		disp->height = XDisplayHeight(dpy_ptr, num);
		disp->cells = XDisplayCells(dpy_ptr, num);
			
				disp->dpy = realloc(dpy_ptr, sizeof(dpy));
				
			Xfree(dpy_ptr);

			get_map_screen(disp, d);

		return disp; 
						}



Props::Session *get_xserver_session(Display *dpy, Window *win){

		Props::Session tty;
		char *atom_names[6];
		

		tty.scr->dpy = (Display *)malloc(sizeof(dpy));
			
			memset(dpy, 0, sizeof(dpy));
				

			tty.scr->dpy = XOpenDisplay(NULL);
		
				tty.scr->w = (Window *)malloc(sizeof(win));
			
					memset(win, 0, sizeof(win));
				

		XCreateSimpleWindow(dpy, tty.scr->w, tty.scr->max_h, tty.scr->max_w, 
					200, tty.scr->max_w, 420420, 420420);			
		
				
				tty.scr->num = XDefaultScreen(dpy);
				tty.scr->visual = XDefaultVisual(dpy);
		
		
			tty.disp = get_map_display(dpy, win, tty.scr->num);
				
				tty.planes = XDisplayPlanes(dpy, screen->num);
					
					Pixmap *p = malloc(sizeof(tty.scr->pmap));
					Colormap *c  = malloc(sizeof(tty.scr->cmap));
				
		/*set root window */
		
					
				};


int get_session_map(Props::Session *tty){


		tty->scr->pmap = XCreatePixmap(scr->dpy, scr->d, scr->disp->width, scr->disp->h);
		
			tty->scr->cmap = XCreateColormap(scr->dpy, scr->d, scr->disp->w, scr->disp->h);

				unsigned long pmask_return[tty->planes];
				unsigned long pix_return[tty->cells];

				XAllocColorCells(tty->scr->pmap, tty->scr->cmap, 1, pmask_return, tty->planes, pix_return, tty->cells);

					/* need to call get..pixel() before finding hue/chroma for rgb? */
				
				XcmsColor *Black = XcmsQueryBlack(
						}

int get_session_atom(Props::Mutable::Screen *scr, int flag){


	if (!flag){
	
		XSizeHints *sz = XInternAtom(scr->dpy, XA_WM_NORMAL_HINTS, false);
		
			XSetWMNormalHints(scr->dpy, scr->w, sz);

			XWMHints *Hints = XAllocWMHints();
			
				XSetWMHints(scr->dpy, scr->W, Hints);
		
				XAtom *client = XInternAtom(scr->dpy, XA_WM_CLIENT_MACHINE, false);
				
				XSetWMClientMachine(scr->dpu, scr->w, txt);
					
					get_session_map(scr); }
	

		
}






int get_keymap(Props::Mutable::Screen *scr, int flag){
	
	/* keymap function will be called p early */ 
	










