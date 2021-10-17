#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

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
  aux_sym_comment_token1 = 26,
  aux_sym_comment_token2 = 27,
  anon_sym_SEMI = 28,
  sym_noop = 29,
  aux_sym_rand_token1 = 30,
  sym__register_f = 31,
  sym__register_hardware = 32,
  sym__register_m = 33,
  sym__register_t = 34,
  sym__register_x = 35,
  sym_binary_operator = 36,
  sym_eof = 37,
  sym_label = 38,
  sym_mrd = 39,
  sym_number = 40,
  sym_exa = 41,
  sym__statement = 42,
  sym_copy = 43,
  sym_addi = 44,
  sym_subi = 45,
  sym_muli = 46,
  sym_divi = 47,
  sym_modi = 48,
  sym_swiz = 49,
  sym_mark = 50,
  sym_jump = 51,
  sym_true_jump = 52,
  sym_false_jump = 53,
  sym_test = 54,
  sym_repl = 55,
  sym_link = 56,
  sym_host = 57,
  sym_void = 58,
  sym_grab = 59,
  sym_file = 60,
  sym_seek = 61,
  sym_comment = 62,
  sym_rand = 63,
  sym_register = 64,
  aux_sym_exa_repeat1 = 65,
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
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SEMI] = ";",
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
  [sym_comment] = "comment",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_comment] = sym_comment,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [sym_comment] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
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
      if (lookahead == ';') ADVANCE(122);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(127);
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
          lookahead == 'm') ADVANCE(130);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(9);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(36);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
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
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 5:
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == ';') ADVANCE(122);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 6:
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
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
          lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
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
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(12);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
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
          lookahead == 'f') ADVANCE(136);
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
          lookahead == 'l') ADVANCE(20);
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
          lookahead == 't') ADVANCE(22);
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
          lookahead == 'p') ADVANCE(124);
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
          lookahead == 't') ADVANCE(22);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 81:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
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
      if (lookahead == ';') ADVANCE(122);
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
          lookahead == 's') ADVANCE(19);
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
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_noop);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_rand_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__register_f);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__register_f);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__register_hardware);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__register_m);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__register_m);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__register_m);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__register_t);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__register_t);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__register_x);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_eof);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_mrd);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
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
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 4},
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
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
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
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
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
  },
  [1] = {
    [sym_exa] = STATE(67),
    [sym__statement] = STATE(25),
    [sym_copy] = STATE(16),
    [sym_addi] = STATE(16),
    [sym_subi] = STATE(16),
    [sym_muli] = STATE(16),
    [sym_divi] = STATE(16),
    [sym_modi] = STATE(16),
    [sym_swiz] = STATE(16),
    [sym_mark] = STATE(16),
    [sym_jump] = STATE(16),
    [sym_true_jump] = STATE(16),
    [sym_false_jump] = STATE(16),
    [sym_test] = STATE(16),
    [sym_repl] = STATE(16),
    [sym_link] = STATE(16),
    [sym_host] = STATE(16),
    [sym_void] = STATE(16),
    [sym_grab] = STATE(16),
    [sym_file] = STATE(16),
    [sym_seek] = STATE(16),
    [sym_comment] = STATE(1),
    [sym_rand] = STATE(16),
    [aux_sym_exa_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_copy_token1] = ACTIONS(5),
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
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_noop] = ACTIONS(33),
    [aux_sym_rand_token1] = ACTIONS(47),
  },
  [2] = {
    [sym__statement] = STATE(25),
    [sym_copy] = STATE(16),
    [sym_addi] = STATE(16),
    [sym_subi] = STATE(16),
    [sym_muli] = STATE(16),
    [sym_divi] = STATE(16),
    [sym_modi] = STATE(16),
    [sym_swiz] = STATE(16),
    [sym_mark] = STATE(16),
    [sym_jump] = STATE(16),
    [sym_true_jump] = STATE(16),
    [sym_false_jump] = STATE(16),
    [sym_test] = STATE(16),
    [sym_repl] = STATE(16),
    [sym_link] = STATE(16),
    [sym_host] = STATE(16),
    [sym_void] = STATE(16),
    [sym_grab] = STATE(16),
    [sym_file] = STATE(16),
    [sym_seek] = STATE(16),
    [sym_comment] = STATE(2),
    [sym_rand] = STATE(16),
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
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_noop] = ACTIONS(90),
    [aux_sym_rand_token1] = ACTIONS(111),
  },
  [3] = {
    [sym__statement] = STATE(25),
    [sym_copy] = STATE(16),
    [sym_addi] = STATE(16),
    [sym_subi] = STATE(16),
    [sym_muli] = STATE(16),
    [sym_divi] = STATE(16),
    [sym_modi] = STATE(16),
    [sym_swiz] = STATE(16),
    [sym_mark] = STATE(16),
    [sym_jump] = STATE(16),
    [sym_true_jump] = STATE(16),
    [sym_false_jump] = STATE(16),
    [sym_test] = STATE(16),
    [sym_repl] = STATE(16),
    [sym_link] = STATE(16),
    [sym_host] = STATE(16),
    [sym_void] = STATE(16),
    [sym_grab] = STATE(16),
    [sym_file] = STATE(16),
    [sym_seek] = STATE(16),
    [sym_comment] = STATE(3),
    [sym_rand] = STATE(16),
    [aux_sym_exa_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_copy_token1] = ACTIONS(5),
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
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_noop] = ACTIONS(33),
    [aux_sym_rand_token1] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      sym_comment,
    ACTIONS(116), 28,
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
  [40] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(5), 1,
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
  [80] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(6), 1,
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
  [120] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(7), 1,
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
  [160] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(8), 1,
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
  [200] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(9), 1,
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
  [240] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(10), 1,
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
  [280] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(11), 1,
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
  [320] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(12), 1,
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
  [360] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(13), 1,
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
  [400] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(14), 1,
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
  [440] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(15), 1,
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
  [480] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(16), 1,
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
  [520] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(17), 1,
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
  [560] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(18), 1,
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
  [600] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(19), 1,
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
  [640] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(20), 1,
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
  [680] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(21), 1,
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
  [720] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(22), 1,
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
  [760] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(23), 1,
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
  [800] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(24), 1,
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
  [840] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(25), 1,
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
  [880] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(26), 1,
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
  [920] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(162), 28,
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
  [960] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      sym__register_m,
    ACTIONS(170), 1,
      sym_number,
    STATE(28), 1,
      sym_comment,
    STATE(66), 1,
      sym_register,
    ACTIONS(168), 2,
      sym_eof,
      sym_mrd,
    ACTIONS(164), 4,
      sym__register_f,
      sym__register_hardware,
      sym__register_t,
      sym__register_x,
  [989] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      sym_number,
    STATE(4), 1,
      sym_register,
    STATE(29), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1012] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      sym_number,
    STATE(30), 1,
      sym_comment,
    STATE(58), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1035] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      sym_number,
    STATE(31), 1,
      sym_comment,
    STATE(53), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1058] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      sym_number,
    STATE(32), 1,
      sym_comment,
    STATE(54), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1081] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      sym_number,
    STATE(33), 1,
      sym_comment,
    STATE(55), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1104] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      sym_number,
    STATE(34), 1,
      sym_comment,
    STATE(56), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1127] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      sym_number,
    STATE(35), 1,
      sym_comment,
    STATE(57), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1150] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      sym_number,
    STATE(36), 1,
      sym_comment,
    STATE(49), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1173] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      sym_number,
    STATE(35), 1,
      sym_register,
    STATE(37), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1196] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(118), 7,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
      sym_binary_operator,
      sym_number,
  [1215] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      sym_number,
    STATE(39), 1,
      sym_comment,
    STATE(48), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1238] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      sym_number,
    STATE(31), 1,
      sym_register,
    STATE(40), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1261] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_number,
    STATE(32), 1,
      sym_register,
    STATE(41), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1284] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      sym_number,
    STATE(30), 1,
      sym_register,
    STATE(42), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1307] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      sym_number,
    STATE(13), 1,
      sym_register,
    STATE(43), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1330] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(202), 1,
      sym_number,
    STATE(17), 1,
      sym_register,
    STATE(44), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1353] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      sym_number,
    STATE(18), 1,
      sym_register,
    STATE(45), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1376] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      sym_number,
    STATE(34), 1,
      sym_register,
    STATE(46), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1399] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      sym_number,
    STATE(33), 1,
      sym_register,
    STATE(47), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1422] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      sym_number,
    STATE(48), 1,
      sym_comment,
    STATE(52), 1,
      sym_register,
    ACTIONS(164), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1445] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym_register,
    STATE(49), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1465] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_register,
    STATE(50), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1485] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_register,
    STATE(51), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1505] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      sym_register,
    STATE(52), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1525] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_register,
    STATE(53), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1545] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_register,
    STATE(54), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1565] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_register,
    STATE(55), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1585] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_register,
    STATE(56), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1605] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_register,
    STATE(57), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1625] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_register,
    STATE(58), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym__register_f,
      sym__register_hardware,
      sym__register_m,
      sym__register_t,
      sym__register_x,
  [1645] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(212), 2,
      sym__register_f,
      sym__register_m,
  [1659] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      sym_label,
    STATE(60), 1,
      sym_comment,
  [1672] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym_comment_token1,
    ACTIONS(218), 1,
      sym_label,
    STATE(61), 1,
      sym_comment,
  [1685] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym_comment_token1,
    ACTIONS(220), 1,
      sym_label,
    STATE(62), 1,
      sym_comment,
  [1698] = 4,
    ACTIONS(214), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      aux_sym_comment_token2,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_comment,
  [1711] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym_comment_token1,
    ACTIONS(226), 1,
      sym_label,
    STATE(64), 1,
      sym_comment,
  [1724] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym_comment_token1,
    ACTIONS(228), 1,
      sym_label,
    STATE(65), 1,
      sym_comment,
  [1737] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(230), 1,
      sym_binary_operator,
    STATE(66), 1,
      sym_comment,
  [1750] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_comment,
  [1763] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 280,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 400,
  [SMALL_STATE(15)] = 440,
  [SMALL_STATE(16)] = 480,
  [SMALL_STATE(17)] = 520,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 640,
  [SMALL_STATE(21)] = 680,
  [SMALL_STATE(22)] = 720,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 800,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 920,
  [SMALL_STATE(28)] = 960,
  [SMALL_STATE(29)] = 989,
  [SMALL_STATE(30)] = 1012,
  [SMALL_STATE(31)] = 1035,
  [SMALL_STATE(32)] = 1058,
  [SMALL_STATE(33)] = 1081,
  [SMALL_STATE(34)] = 1104,
  [SMALL_STATE(35)] = 1127,
  [SMALL_STATE(36)] = 1150,
  [SMALL_STATE(37)] = 1173,
  [SMALL_STATE(38)] = 1196,
  [SMALL_STATE(39)] = 1215,
  [SMALL_STATE(40)] = 1238,
  [SMALL_STATE(41)] = 1261,
  [SMALL_STATE(42)] = 1284,
  [SMALL_STATE(43)] = 1307,
  [SMALL_STATE(44)] = 1330,
  [SMALL_STATE(45)] = 1353,
  [SMALL_STATE(46)] = 1376,
  [SMALL_STATE(47)] = 1399,
  [SMALL_STATE(48)] = 1422,
  [SMALL_STATE(49)] = 1445,
  [SMALL_STATE(50)] = 1465,
  [SMALL_STATE(51)] = 1485,
  [SMALL_STATE(52)] = 1505,
  [SMALL_STATE(53)] = 1525,
  [SMALL_STATE(54)] = 1545,
  [SMALL_STATE(55)] = 1565,
  [SMALL_STATE(56)] = 1585,
  [SMALL_STATE(57)] = 1605,
  [SMALL_STATE(58)] = 1625,
  [SMALL_STATE(59)] = 1645,
  [SMALL_STATE(60)] = 1659,
  [SMALL_STATE(61)] = 1672,
  [SMALL_STATE(62)] = 1685,
  [SMALL_STATE(63)] = 1698,
  [SMALL_STATE(64)] = 1711,
  [SMALL_STATE(65)] = 1724,
  [SMALL_STATE(66)] = 1737,
  [SMALL_STATE(67)] = 1750,
  [SMALL_STATE(68)] = 1763,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exa, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(36),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(39),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(41),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(47),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(46),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(37),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(61),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(62),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(64),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(65),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(28),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(60),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(16),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(29),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(50),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(59),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(45),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(51),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(43),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 2), SHIFT_REPEAT(42),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exa, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swiz, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modi, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divi, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_muli, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subi, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addi, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grab, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repl, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false_jump, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exa_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rand, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true_jump, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [232] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
