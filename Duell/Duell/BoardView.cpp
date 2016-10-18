#include "BoardView.h"
#include <iostream>
using namespace std;






BoardView::BoardView(Board & grid)
{
}

BoardView::~BoardView()
{
}

void BoardView::PrintBoard(const Board & grid) const
{
  cout << "Board:" << endl;
  for (auto i = 8; i > 0; i--) {
    for (auto j = 0; j < 9; j++) {
      if (j == 0)
      {
        cout << i << " ";
      }
      if (grid.getElement(i, j) == "false")
      {

        cout << "   " << "0" << "   ";
      }
      else
      {

        cout << "  " << grid.getElement(i, j) << "  ";
      }

    }
    cout << endl;
    if (i == 1)
    {
      cout << "     1      2      3      4      5      6      7      8      9" << endl;
    }
  }
}
