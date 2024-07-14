#include <Keyboard.h>

struct Letter {
  char letter;
  Letter* dot;
  Letter* dash;
};

// own chars for ease of use
Letter space = {' ', NULL, NULL};
Letter enter = {KEY_RETURN, NULL, NULL};

// standard morse code
Letter q = {'q', NULL, NULL};
Letter z = {'z', NULL, NULL};
Letter y = {'y', NULL, NULL};
Letter c = {'c', NULL, NULL};
Letter x = {'x', NULL, NULL};
Letter b = {'b', NULL, NULL};
Letter j = {'j', NULL, NULL};
Letter p = {'p', NULL, NULL};
Letter l = {'l', NULL, NULL};
Letter f = {'f', NULL, NULL};
Letter v = {'v', NULL, NULL};
Letter h = {'h', NULL, NULL};

Letter o = {'o', NULL, NULL};
Letter g = {'g', &z, &q};
Letter k = {'k', &c, &y};
Letter d = {'d', &b, &x};
Letter w = {'w', &p, &j};
Letter r = {'r', &l, &enter};
Letter u = {'u', &f, &space};
Letter s = {'s', &h, &v};

Letter m = {'m', &g, &o};
Letter n = {'n', &d, &k};
Letter a = {'a', &r, &w};
Letter i = {'i', &s, &u};

Letter t = {'t', &n, &m};
Letter e = {'e', &i, &a};

Letter start = {NULL, &e, &t};
