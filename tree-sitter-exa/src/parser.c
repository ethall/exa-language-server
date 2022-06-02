#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_copy_token1 = 1,
  aux_sym_addi_token1 = 2,
  aux_sym_subi_token1 = 3,
  aux_sym_muli_token1 = 4,
  aux_sym_divi_token1 = 5,
  aux_sym_modi_token1 = 6,
  aux_sym_swiz_token1 = 7,
  aux_sym_mark_token1 = 8,
  aux_sym_jump_token1 = 9,
  aux_sym_true_jump_token1 = 10,
  aux_sym_false_jump_token1 = 11,
  aux_sym_test_token1 = 12,
  aux_sym_repl_token1 = 13,
  sym_halt = 14,
  sym_kill = 15,
  aux_sym_link_token1 = 16,
  aux_sym_host_token1 = 17,
  sym_mode = 18,
  aux_sym_void_token1 = 19,
  sym_make = 20,
  aux_sym_grab_token1 = 21,
  aux_sym_file_token1 = 22,
  aux_sym_seek_token1 = 23,
  sym_drop = 24,
  sym_wipe = 25,
  sym_noop = 26,
  aux_sym_rand_token1 = 27,
  sym__register_f = 28,
  sym__register_hardware = 29,
  sym__register_m = 30,
  sym__register_t = 31,
  sym__register_x = 32,
  sym_binary_operator = 33,
  sym_eof = 34,
  sym_label = 35,
  sym_mrd = 36,
  sym_number = 37,
  sym_comment = 38,
  sym_exa = 39,
  sym__statement = 40,
  sym_copy = 41,
  sym_addi = 42,
  sym_subi = 43,
  sym_muli = 44,
  sym_divi = 45,
  sym_modi = 46,
  sym_swiz = 47,
  sym_mark = 48,
  sym_jump = 49,
  sym_true_jump = 50,
  sym_false_jump = 51,
  sym_test = 52,
  sym_repl = 53,
  sym_link = 54,
  sym_host = 55,
  sym_void = 56,
  sym_grab = 57,
  sym_file = 58,
  sym_seek = 59,
  sym_rand = 60,
  sym_register = 61,
  aux_sym_exa_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_copy_token1] = "copy_token1",
  [aux_sym_addi_token1] = "addi_token1",
  [aux_sym_subi_token1] = "subi_token1",
  [aux_sym_muli_token1] = "muli_token1",
  [aux_sym_divi_token1] = "divi_token1",
  [aux_sym_modi_token1] = "modi_token1",
  [aux_sym_swiz_token1] = "swiz_token1",
  [aux_sym_mark_token1] = "mark_token1",
  [aux_sym_jump_token1] = "jump_token1",
  [aux_sym_true_jump_token1] = "true_jump_token1",
  [aux_sym_false_jump_token1] = "false_jump_token1",
  [aux_sym_test_token1] = "test_token1",
  [aux_sym_repl_token1] = "repl_token1",
  [sym_halt] = "halt",
  [sym_kill] = "kill",
  [aux_sym_link_token1] = "link_token1",
  [aux_sym_host_token1] = "host_token1",
  [sym_mode] = "mode",
  [aux_sym_void_token1] = "void_token1",
  [sym_make] = "make",
  [aux_sym_grab_token1] = "grab_token1",
  [aux_sym_file_token1] = "file_token1",
  [aux_sym_seek_token1] = "seek_token1",
  [sym_drop] = "drop",
  [sym_wipe] = "wipe",
  [sym_noop] = "noop",
  [aux_sym_rand_token1] = "rand_token1",
  [sym__register_f] = "f",
  [sym__register_hardware] = "hardware",
  [sym__register_m] = "m",
  [sym__register_t] = "t",
  [sym__register_x] = "x",
  [sym_binary_operator] = "binary_operator",
  [sym_eof] = "eof",
  [sym_label] = "label",
  [sym_mrd] = "mrd",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_exa] = "exa",
  [sym__statement] = "_statement",
  [sym_copy] = "copy",
  [sym_addi] = "addi",
  [sym_subi] = "subi",
  [sym_muli] = "muli",
  [sym_divi] = "divi",
  [sym_modi] = "modi",
  [sym_swiz] = "swiz",
  [sym_mark] = "mark",
  [sym_jump] = "jump",
  [sym_true_jump] = "tjmp",
  [sym_false_jump] = "fjmp",
  [sym_test] = "test",
  [sym_repl] = "repl",
  [sym_link] = "link",
  [sym_host] = "host",
  [sym_void] = "void",
  [sym_grab] = "grab",
  [sym_file] = "file",
  [sym_seek] = "seek",
  [sym_rand] = "rand",
  [sym_register] = "register",
  [aux_sym_exa_repeat1] = "exa_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_copy_token1] = aux_sym_copy_token1,
  [aux_sym_addi_token1] = aux_sym_addi_token1,
  [aux_sym_subi_token1] = aux_sym_subi_token1,
  [aux_sym_muli_token1] = aux_sym_muli_token1,
  [aux_sym_divi_token1] = aux_sym_divi_token1,
  [aux_sym_modi_token1] = aux_sym_modi_token1,
  [aux_sym_swiz_token1] = aux_sym_swiz_token1,
  [aux_sym_mark_token1] = aux_sym_mark_token1,
  [aux_sym_jump_token1] = aux_sym_jump_token1,
  [aux_sym_true_jump_token1] = aux_sym_true_jump_token1,
  [aux_sym_false_jump_token1] = aux_sym_false_jump_token1,
  [aux_sym_test_token1] = aux_sym_test_token1,
  [aux_sym_repl_token1] = aux_sym_repl_token1,
  [sym_halt] = sym_halt,
  [sym_kill] = sym_kill,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [aux_sym_host_token1] = aux_sym_host_token1,
  [sym_mode] = sym_mode,
  [aux_sym_void_token1] = aux_sym_void_token1,
  [sym_make] = sym_make,
  [aux_sym_grab_token1] = aux_sym_grab_token1,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [aux_sym_seek_token1] = aux_sym_seek_token1,
  [sym_drop] = sym_drop,
  [sym_wipe] = sym_wipe,
  [sym_noop] = sym_noop,
  [aux_sym_rand_token1] = aux_sym_rand_token1,
  [sym__register_f] = sym__register_f,
  [sym__register_hardware] = sym__register_hardware,
  [sym__register_m] = sym__register_m,
  [sym__register_t] = sym__register_t,
  [sym__register_x] = sym__register_x,
  [sym_binary_operator] = sym_binary_operator,
  [sym_eof] = sym_eof,
  [sym_label] = sym_label,
  [sym_mrd] = sym_mrd,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_exa] = sym_exa,
  [sym__statement] = sym__statement,
  [sym_copy] = sym_copy,
  [sym_addi] = sym_addi,
  [sym_subi] = sym_subi,
  [sym_muli] = sym_muli,
  [sym_divi] = sym_divi,
  [sym_modi] = sym_modi,
  [sym_swiz] = sym_swiz,
  [sym_mark] = sym_mark,
  [sym_jump] = sym_jump,
  [sym_true_jump] = sym_true_jump,
  [sym_false_jump] = sym_false_jump,
  [sym_test] = sym_test,
  [sym_repl] = sym_repl,
  [sym_link] = sym_link,
  [sym_host] = sym_host,
  [sym_void] = sym_void,
  [sym_grab] = sym_grab,
  [sym_file] = sym_file,
  [sym_seek] = sym_seek,
  [sym_rand] = sym_rand,
  [sym_register] = sym_register,
  [aux_sym_exa_repeat1] = aux_sym_exa_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_copy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addi_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subi_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_muli_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_divi_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modi_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swiz_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mark_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jump_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_true_jump_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_false_jump_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repl_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
  },
  [sym_kill] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_void_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_make] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_grab_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seek_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_drop] = {
    .visible = true,
    .named = true,
  },
  [sym_wipe] = {
    .visible = true,
    .named = true,
  },
  [sym_noop] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rand_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__register_f] = {
    .visible = true,
    .named = true,
  },
  [sym__register_hardware] = {
    .visible = true,
    .named = true,
  },
  [sym__register_m] = {
    .visible = true,
    .named = true,
  },
  [sym__register_t] = {
    .visible = true,
    .named = true,
  },
  [sym__register_x] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_eof] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_mrd] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_exa] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_addi] = {
    .visible = true,
    .named = true,
  },
  [sym_subi] = {
    .visible = true,
    .named = true,
  },
  [sym_muli] = {
    .visible = true,
    .named = true,
  },
  [sym_divi] = {
    .visible = true,
    .named = true,
  },
  [sym_modi] = {
    .visible = true,
    .named = true,
  },
  [sym_swiz] = {
    .visible = true,
    .named = true,
  },
  [sym_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_true_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_false_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_repl] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [sym_void] = {
    .visible = true,
    .named = true,
  },
  [sym_grab] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_seek] = {
    .visible = true,
    .named = true,
  },
  [sym_rand] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_exa_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_label = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_label] = "label",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 11,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(85)
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == ';') ADVANCE(170);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(125);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(69);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(8);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(76);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(9);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(36);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 4:
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 5:
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == ';') ADVANCE(170);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 12:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 16:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(12);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 40:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 41:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(24);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 61:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 63:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 64:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 70:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 78:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(95);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 81:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 82:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 85:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 86:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(87)
      if (lookahead == '\r') SKIP(86)
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(29);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(69);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(8);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(76);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(37);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(7);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(9);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_addi_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_subi_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_muli_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_divi_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_modi_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_swiz_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_mark_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_jump_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_true_jump_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_false_jump_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_test_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_repl_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_halt);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_kill);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_host_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_mode);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_void_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_make);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_grab_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_seek_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_drop);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_wipe);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_noop);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_rand_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__register_f);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__register_f);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__register_hardware);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__register_m);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__register_m);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__register_m);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__register_t);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__register_t);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__register_x);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_eof);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_mrd);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_copy_token1] = ACTIONS(1),
    [aux_sym_addi_token1] = ACTIONS(1),
    [aux_sym_subi_token1] = ACTIONS(1),
    [aux_sym_muli_token1] = ACTIONS(1),
    [aux_sym_divi_token1] = ACTIONS(1),
    [aux_sym_modi_token1] = ACTIONS(1),
    [aux_sym_swiz_token1] = ACTIONS(1),
    [aux_sym_jump_token1] = ACTIONS(1),
    [aux_sym_test_token1] = ACTIONS(1),
    [aux_sym_repl_token1] = ACTIONS(1),
    [sym_halt] = ACTIONS(1),
    [sym_kill] = ACTIONS(1),
    [aux_sym_link_token1] = ACTIONS(1),
    [aux_sym_host_token1] = ACTIONS(1),
    [sym_mode] = ACTIONS(1),
    [aux_sym_void_token1] = ACTIONS(1),
    [aux_sym_grab_token1] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [aux_sym_seek_token1] = ACTIONS(1),
    [sym_drop] = ACTIONS(1),
    [sym_wipe] = ACTIONS(1),
    [sym_noop] = ACTIONS(1),
    [aux_sym_rand_token1] = ACTIONS(1),
    [sym__register_f] = ACTIONS(1),
    [sym__register_hardware] = ACTIONS(1),
    [sym__register_m] = ACTIONS(1),
    [sym__register_t] = ACTIONS(1),
    [sym__register_x] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [sym_eof] = ACTIONS(1),
    [sym_mrd] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_exa] = STATE(60),
    [sym__statement] = STATE(3),
    [sym_copy] = STATE(3),
    [sym_addi] = STATE(3),
    [sym_subi] = STATE(3),
    [sym_muli] = STATE(3),
    [sym_divi] = STATE(3),
    [sym_modi] = STATE(3),
    [sym_swiz] = STATE(3),
    [sym_mark] = STATE(3),
    [sym_jump] = STATE(3),
    [sym_true_jump] = STATE(3),
    [sym_false_jump] = STATE(3),
    [sym_test] = STATE(3),
    [sym_repl] = STATE(3),
    [sym_link] = STATE(3),
    [sym_host] = STATE(3),
    [sym_void] = STATE(3),
    [sym_grab] = STATE(3),
    [sym_file] = STATE(3),
    [sym_seek] = STATE(3),
    [sym_rand] = STATE(3),
    [aux_sym_exa_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_copy_token1] = ACTIONS(7),
    [aux_sym_addi_token1] = ACTIONS(9),
    [aux_sym_subi_token1] = ACTIONS(11),
    [aux_sym_muli_token1] = ACTIONS(13),
    [aux_sym_divi_token1] = ACTIONS(15),
    [aux_sym_modi_token1] = ACTIONS(17),
    [aux_sym_swiz_token1] = ACTIONS(19),
    [aux_sym_mark_token1] = ACTIONS(21),
    [aux_sym_jump_token1] = ACTIONS(23),
    [aux_sym_true_jump_token1] = ACTIONS(25),
    [aux_sym_false_jump_token1] = ACTIONS(27),
    [aux_sym_test_token1] = ACTIONS(29),
    [aux_sym_repl_token1] = ACTIONS(31),
    [sym_halt] = ACTIONS(33),
    [sym_kill] = ACTIONS(33),
    [aux_sym_link_token1] = ACTIONS(35),
    [aux_sym_host_token1] = ACTIONS(37),
    [sym_mode] = ACTIONS(33),
    [aux_sym_void_token1] = ACTIONS(39),
    [sym_make] = ACTIONS(33),
    [aux_sym_grab_token1] = ACTIONS(41),
    [aux_sym_file_token1] = ACTIONS(43),
    [aux_sym_seek_token1] = ACTIONS(45),
    [sym_drop] = ACTIONS(33),
    [sym_wipe] = ACTIONS(33),
    [sym_noop] = ACTIONS(33),
    [aux_sym_rand_token1] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_copy] = STATE(2),
    [sym_addi] = STATE(2),
    [sym_subi] = STATE(2),
    [sym_muli] = STATE(2),
    [sym_divi] = STATE(2),
    [sym_modi] = STATE(2),
    [sym_swiz] = STATE(2),
    [sym_mark] = STATE(2),
    [sym_jump] = STATE(2),
    [sym_true_jump] = STATE(2),
    [sym_false_jump] = STATE(2),
    [sym_test] = STATE(2),
    [sym_repl] = STATE(2),
    [sym_link] = STATE(2),
    [sym_host] = STATE(2),
    [sym_void] = STATE(2),
    [sym_grab] = STATE(2),
    [sym_file] = STATE(2),
    [sym_seek] = STATE(2),
    [sym_rand] = STATE(2),
    [aux_sym_exa_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_copy_token1] = ACTIONS(51),
    [aux_sym_addi_token1] = ACTIONS(54),
    [aux_sym_subi_token1] = ACTIONS(57),
    [aux_sym_muli_token1] = ACTIONS(60),
    [aux_sym_divi_token1] = ACTIONS(63),
    [aux_sym_modi_token1] = ACTIONS(66),
    [aux_sym_swiz_token1] = ACTIONS(69),
    [aux_sym_mark_token1] = ACTIONS(72),
    [aux_sym_jump_token1] = ACTIONS(75),
    [aux_sym_true_jump_token1] = ACTIONS(78),
    [aux_sym_false_jump_token1] = ACTIONS(81),
    [aux_sym_test_token1] = ACTIONS(84),
    [aux_sym_repl_token1] = ACTIONS(87),
    [sym_halt] = ACTIONS(90),
    [sym_kill] = ACTIONS(90),
    [aux_sym_link_token1] = ACTIONS(93),
    [aux_sym_host_token1] = ACTIONS(96),
    [sym_mode] = ACTIONS(90),
    [aux_sym_void_token1] = ACTIONS(99),
    [sym_make] = ACTIONS(90),
    [aux_sym_grab_token1] = ACTIONS(102),
    [aux_sym_file_token1] = ACTIONS(105),
    [aux_sym_seek_token1] = ACTIONS(108),
    [sym_drop] = ACTIONS(90),
    [sym_wipe] = ACTIONS(90),
    [sym_noop] = ACTIONS(90),
    [aux_sym_rand_token1] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_copy] = STATE(2),
    [sym_addi] = STATE(2),
    [sym_subi] = STATE(2),
    [sym_muli] = STATE(2),
    [sym_divi] = STATE(2),
    [sym_modi] = STATE(2),
    [sym_swiz] = STATE(2),
    [sym_mark] = STATE(2),
    [sym_jump] = STATE(2),
    [sym_true_jump] = STATE(2),
    [sym_false_jump] = STATE(2),
    [sym_test] = STATE(2),
    [sym_repl] = STATE(2),
    [sym_link] = STATE(2),
    [sym_host] = STATE(2),
    [sym_void] = STATE(2),
    [sym_grab] = STATE(2),
    [sym_file] = STATE(2),
    [sym_seek] = STATE(2),
    [sym_rand] = STATE(2),
    [aux_sym_exa_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_copy_token1] = ACTIONS(7),
    [aux_sym_addi_token1] = ACTIONS(9),
    [aux_sym_subi_token1] = ACTIONS(11),
    [aux_sym_muli_token1] = ACTIONS(13),
    [aux_sym_divi_token1] = ACTIONS(15),
    [aux_sym_modi_token1] = ACTIONS(17),
    [aux_sym_swiz_token1] = ACTIONS(19),
    [aux_sym_mark_token1] = ACTIONS(21),
    [aux_sym_jump_token1] = ACTIONS(23),
    [aux_sym_true_jump_token1] = ACTIONS(25),
    [aux_sym_false_jump_token1] = ACTIONS(27),
    [aux_sym_test_token1] = ACTIONS(29),
    [aux_sym_repl_token1] = ACTIONS(31),
    [sym_halt] = ACTIONS(116),
    [sym_kill] = ACTIONS(116),
    [aux_sym_link_token1] = ACTIONS(35),
    [aux_sym_host_token1] = ACTIONS(37),
    [sym_mode] = ACTIONS(116),
    [aux_sym_void_token1] = ACTIONS(39),
    [sym_make] = ACTIONS(116),
    [aux_sym_grab_token1] = ACTIONS(41),
    [aux_sym_file_token1] = ACTIONS(43),
    [aux_sym_seek_token1] = ACTIONS(45),
    [sym_drop] = ACTIONS(116),
    [sym_wipe] = ACTIONS(116),
    [sym_noop] = ACTIONS(116),
    [aux_sym_rand_token1] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [34] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [68] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 28,
      ts_builtin_sym_end,
      aux_sym_copy_token1,
      aux_sym_addi_token1,
      aux_sym_subi_token1,
      aux_sym_muli_token1,
      aux_sym_divi_token1,
      aux_sym_modi_token1,
      aux_sym_swiz_token1,
      aux_sym_mark_token1,
      aux_sym_jump_token1,
      aux_sym_true_jump_token1,
      aux_sym_false_jump_token1,
      aux_sym_test_token1,
      aux_sym_repl_token1,
      sym_halt,
      sym_kill,
      aux_sym_link_token1,
      aux_sym_host_token1,
      sym_mode,
      aux_sym_void_token1,
      sym_make,
      aux_sym_grab_token1,
      aux_sym_file_token1,
      aux_sym_seek_token1,
      sym_drop,
      sym_wipe,
      sym_noop,
      aux_sym_rand_token1,
  [748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__register_m,
    ACTIONS(168), 1,
      sym_number,
    STATE(58), 1,
      sym_register,
    ACTIONS(166), 2,
      sym_eof,
      sym_mrd,
    ACTIONS(162), 4,
      sym__register_f,
      sym__register_hardware,
      sym__register_t,
      sym__register_x,
  [771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_number,
    STATE(49), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_number,
    STATE(50), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_number,
    STATE(51), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_number,
    STATE(52), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_number,
    STATE(53), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_number,
    STATE(19), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_number,
    STATE(27), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    STATE(40), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_number,
    STATE(28), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_number,
    STATE(13), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_number,
    STATE(44), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_number,
    STATE(7), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_number,
    STATE(9), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_number,
    STATE(48), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_number,
    STATE(31), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_number,
    STATE(30), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_number,
    STATE(29), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_number,
    STATE(54), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_number,
    STATE(55), 1,
      sym_register,
    ACTIONS(162), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 7,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
      sym_binary_operator,
      sym_number,
  [1107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_register,
    ACTIONS(180), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 2,
      sym__register_f,
      sym__register_m,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_binary_operator,
  [1262] = 2,
    ACTIONS(214), 1,
      sym_label,
    ACTIONS(216), 1,
      sym_comment,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [1276] = 2,
    ACTIONS(216), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_label,
  [1283] = 2,
    ACTIONS(216), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_label,
  [1290] = 2,
    ACTIONS(216), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_label,
  [1297] = 2,
    ACTIONS(216), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_label,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 374,
  [SMALL_STATE(16)] = 408,
  [SMALL_STATE(17)] = 442,
  [SMALL_STATE(18)] = 476,
  [SMALL_STATE(19)] = 510,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 612,
  [SMALL_STATE(23)] = 646,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 714,
  [SMALL_STATE(26)] = 748,
  [SMALL_STATE(27)] = 771,
  [SMALL_STATE(28)] = 788,
  [SMALL_STATE(29)] = 805,
  [SMALL_STATE(30)] = 822,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 856,
  [SMALL_STATE(33)] = 873,
  [SMALL_STATE(34)] = 890,
  [SMALL_STATE(35)] = 907,
  [SMALL_STATE(36)] = 924,
  [SMALL_STATE(37)] = 941,
  [SMALL_STATE(38)] = 958,
  [SMALL_STATE(39)] = 975,
  [SMALL_STATE(40)] = 992,
  [SMALL_STATE(41)] = 1009,
  [SMALL_STATE(42)] = 1026,
  [SMALL_STATE(43)] = 1043,
  [SMALL_STATE(44)] = 1060,
  [SMALL_STATE(45)] = 1077,
  [SMALL_STATE(46)] = 1094,
  [SMALL_STATE(47)] = 1107,
  [SMALL_STATE(48)] = 1121,
  [SMALL_STATE(49)] = 1135,
  [SMALL_STATE(50)] = 1149,
  [SMALL_STATE(51)] = 1163,
  [SMALL_STATE(52)] = 1177,
  [SMALL_STATE(53)] = 1191,
  [SMALL_STATE(54)] = 1205,
  [SMALL_STATE(55)] = 1219,
  [SMALL_STATE(56)] = 1233,
  [SMALL_STATE(57)] = 1247,
  [SMALL_STATE(58)] = 1255,
  [SMALL_STATE(59)] = 1262,
  [SMALL_STATE(60)] = 1269,
  [SMALL_STATE(61)] = 1276,
  [SMALL_STATE(62)] = 1283,
  [SMALL_STATE(63)] = 1290,
  [SMALL_STATE(64)] = 1297,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exa, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(45),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(34),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(33),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(35),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(43),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(42),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(41),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(64),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(63),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(62),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(26),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(61),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(32),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(47),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(57),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(39),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(56),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(38),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(37),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exa, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subi, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addi, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grab, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rand, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swiz, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modi, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divi, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muli, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repl, 2, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false_jump, 2, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true_jump, 2, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_exa(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
