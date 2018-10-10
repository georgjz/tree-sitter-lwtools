#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 26
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_COLON = 1,
  sym__line_break = 2,
  aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH = 3,
  sym__identifier = 4,
  sym_opcode = 5,
  sym__operand = 6,
  sym_line_comment = 7,
  sym_source_file = 8,
  sym__line = 9,
  sym_label = 10,
  sym__instruction = 11,
  sym__comment = 12,
  aux_sym_source_file_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_COLON] = ":",
  [sym__line_break] = "_line_break",
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = "/[\\@\\?]/",
  [sym__identifier] = "_identifier",
  [sym_opcode] = "opcode",
  [sym__operand] = "_operand",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_label] = "label",
  [sym__instruction] = "_instruction",
  [sym__comment] = "_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(3);
      if (lookahead == 'n')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(8);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o')
        ADVANCE(5);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(6);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p')
        ADVANCE(9);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e')
        ADVANCE(10);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r')
        ADVANCE(11);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a')
        ADVANCE(12);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n')
        ADVANCE(13);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd')
        ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__operand);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == 'n')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(8);
      if (lookahead == '?' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == ':')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == 'n')
        ADVANCE(22);
      if (lookahead == 'o')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == 'o')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'p')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_opcode);
      END_STATE();
    case 25:
      if (lookahead == 'p')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'r')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'a')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'n')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'd')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__operand);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(1),
    [sym__identifier] = ACTIONS(3),
    [sym_opcode] = ACTIONS(3),
    [sym__operand] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym__line] = STATE(9),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym__line_break] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_opcode] = ACTIONS(11),
    [sym__operand] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(15),
  },
  [2] = {
    [sym__identifier] = ACTIONS(17),
  },
  [3] = {
    [anon_sym_COLON] = ACTIONS(19),
  },
  [4] = {
    [sym__comment] = STATE(12),
    [sym__line_break] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(23),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [6] = {
    [anon_sym_COLON] = ACTIONS(27),
  },
  [7] = {
    [sym__comment] = STATE(12),
    [sym__line_break] = ACTIONS(21),
    [sym__operand] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(23),
  },
  [8] = {
    [sym__line_break] = ACTIONS(21),
  },
  [9] = {
    [sym__line] = STATE(15),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__line_break] = ACTIONS(33),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_opcode] = ACTIONS(11),
    [sym__operand] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(15),
  },
  [10] = {
    [anon_sym_COLON] = ACTIONS(35),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__line_break] = ACTIONS(37),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(39),
    [sym__identifier] = ACTIONS(39),
    [sym_opcode] = ACTIONS(39),
    [sym__operand] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(39),
  },
  [12] = {
    [sym__line_break] = ACTIONS(41),
  },
  [13] = {
    [sym__instruction] = STATE(18),
    [sym__comment] = STATE(19),
    [sym__line_break] = ACTIONS(41),
    [sym_opcode] = ACTIONS(43),
    [sym__operand] = ACTIONS(45),
    [sym_line_comment] = ACTIONS(47),
  },
  [14] = {
    [sym__comment] = STATE(19),
    [sym__line_break] = ACTIONS(41),
    [sym_line_comment] = ACTIONS(47),
  },
  [15] = {
    [sym__line] = STATE(15),
    [sym_label] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym__comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym__line_break] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(54),
    [sym__identifier] = ACTIONS(57),
    [sym_opcode] = ACTIONS(60),
    [sym__operand] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(66),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym__line_break] = ACTIONS(69),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(71),
    [sym__identifier] = ACTIONS(71),
    [sym_opcode] = ACTIONS(71),
    [sym__operand] = ACTIONS(71),
    [sym_line_comment] = ACTIONS(71),
  },
  [17] = {
    [sym__comment] = STATE(21),
    [sym__line_break] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(75),
  },
  [18] = {
    [sym__comment] = STATE(21),
    [sym__line_break] = ACTIONS(73),
    [sym__operand] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(75),
  },
  [19] = {
    [sym__line_break] = ACTIONS(73),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym__line_break] = ACTIONS(79),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(81),
    [sym__identifier] = ACTIONS(81),
    [sym_opcode] = ACTIONS(81),
    [sym__operand] = ACTIONS(81),
    [sym_line_comment] = ACTIONS(81),
  },
  [21] = {
    [sym__line_break] = ACTIONS(83),
  },
  [22] = {
    [sym__comment] = STATE(24),
    [sym__line_break] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(85),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym__line_break] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(89),
    [sym__identifier] = ACTIONS(89),
    [sym_opcode] = ACTIONS(89),
    [sym__operand] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(89),
  },
  [24] = {
    [sym__line_break] = ACTIONS(91),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym__line_break] = ACTIONS(93),
    [aux_sym_SLASH_LBRACK_BSLASH_AT_BSLASH_QMARK_RBRACK_SLASH] = ACTIONS(95),
    [sym__identifier] = ACTIONS(95),
    [sym_opcode] = ACTIONS(95),
    [sym__operand] = ACTIONS(95),
    [sym_line_comment] = ACTIONS(95),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(9),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_label, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = false}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__line, 2),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym__line, 2),
  [41] = {.count = 1, .reusable = true}, SHIFT(16),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(17),
  [47] = {.count = 1, .reusable = false}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__line, 3),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym__line, 3),
  [73] = {.count = 1, .reusable = true}, SHIFT(20),
  [75] = {.count = 1, .reusable = false}, SHIFT(21),
  [77] = {.count = 1, .reusable = false}, SHIFT(22),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym__line, 4),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym__line, 4),
  [83] = {.count = 1, .reusable = true}, SHIFT(23),
  [85] = {.count = 1, .reusable = false}, SHIFT(24),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__line, 5),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym__line, 5),
  [91] = {.count = 1, .reusable = true}, SHIFT(25),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym__line, 6),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__line, 6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lwtools6809() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
