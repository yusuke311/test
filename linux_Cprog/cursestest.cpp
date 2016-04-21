#include<unistd.h>
#include<stdio.h>
#include<curses.h>
#if 0
class WindowManager
{
	public:
		
		WindowManager()
		{
			initscr();
		}
		~WindowManager()
		{
			endwin();
		}
		void SetPos(int x ,int y)
		{
			this->x = x;
			this->y = y;
			move(x,y);
		}
		void Update()
		{
			refresh();
		}
		void Clear()
		{
			clear();
		}

	private:
		int x;
		int y;
};
#endif
int main()
{
	//WindowManager Window;	
	//Window.Clear();
	clear();
	printw("test Window");
	//Window.Update();
	refresh();
	sleep(3);
	endwin();
	return 0;
}

