#define TK3_ILLEGAL                          1
#define TK3_COMMENT                          2
#define TK3_SPACE                            3
#define TK3_ID                               4
#define TK3_ABORT                            5
#define TK3_ACTION                           6
#define TK3_AFTER                            7
#define TK3_ALWAYS                           8
#define TK3_ANALYZE                          9
#define TK3_ASC                             10
#define TK3_ATTACH                          11
#define TK3_BEFORE                          12
#define TK3_BEGIN                           13
#define TK3_BY                              14
#define TK3_CASCADE                         15
#define TK3_CAST                            16
#define TK3_COLUMNKW                        17
#define TK3_CONFLICT                        18
#define TK3_CURRENT                         19
#define TK3_DATABASE                        20
#define TK3_DEFERRED                        21
#define TK3_DESC                            22
#define TK3_DETACH                          23
#define TK3_DO                              24
#define TK3_EACH                            25
#define TK3_END                             26
#define TK3_EXCLUDE                         27
#define TK3_EXCLUSIVE                       28
#define TK3_EXPLAIN                         29
#define TK3_FAIL                            30
#define TK3_FIRST                           31
#define TK3_FOLLOWING                       32
#define TK3_FOR                             33
#define TK3_GROUPS                          34
#define TK3_IGNORE                          35
#define TK3_IMMEDIATE                       36
#define TK3_INITIALLY                       37
#define TK3_INSTEAD                         38
#define TK3_LAST                            39
#define TK3_LIKE_KW                         40
#define TK3_MATCH                           41
#define TK3_MATERIALIZED                    42
#define TK3_NO                              43
#define TK3_NULLS                           44
#define TK3_OTHERS                          45
#define TK3_PLAN                            46
#define TK3_QUERY                           47
#define TK3_KEY                             48
#define TK3_OF                              49
#define TK3_OFFSET                          50
#define TK3_PARTITION                       51
#define TK3_PRAGMA                          52
#define TK3_PRECEDING                       53
#define TK3_RAISE                           54
#define TK3_RANGE                           55
#define TK3_RECURSIVE                       56
#define TK3_RELEASE                         57
#define TK3_REPLACE                         58
#define TK3_RESTRICT                        59
#define TK3_ROW                             60
#define TK3_ROWS                            61
#define TK3_ROLLBACK                        62
#define TK3_SAVEPOINT                       63
#define TK3_TEMP                            64
#define TK3_TIES                            65
#define TK3_TRIGGER                         66
#define TK3_UNBOUNDED                       67
#define TK3_VACUUM                          68
#define TK3_VIEW                            69
#define TK3_VIRTUAL                         70
#define TK3_WITH                            71
#define TK3_WITHOUT                         72
#define TK3_REINDEX                         73
#define TK3_RENAME                          74
#define TK3_CTIME_KW                        75
#define TK3_IF                              76
#define TK3_FILTER                          77
#define TK3_ANY                             78
#define TK3_OR                              79
#define TK3_AND                             80
#define TK3_NOT                             81
#define TK3_IS                              82
#define TK3_BETWEEN                         83
#define TK3_IN                              84
#define TK3_ISNULL                          85
#define TK3_NOTNULL                         86
#define TK3_NE                              87
#define TK3_EQ                              88
#define TK3_GT                              89
#define TK3_LE                              90
#define TK3_LT                              91
#define TK3_GE                              92
#define TK3_ESCAPE                          93
#define TK3_BITAND                          94
#define TK3_BITOR                           95
#define TK3_LSHIFT                          96
#define TK3_RSHIFT                          97
#define TK3_PLUS                            98
#define TK3_MINUS                           99
#define TK3_STAR                           100
#define TK3_SLASH                          101
#define TK3_REM                            102
#define TK3_CONCAT                         103
#define TK3_PTR                            104
#define TK3_COLLATE                        105
#define TK3_BITNOT                         106
#define TK3_SEMI                           107
#define TK3_TRANSACTION                    108
#define TK3_ID_TRANS                       109
#define TK3_COMMIT                         110
#define TK3_TO                             111
#define TK3_CREATE                         112
#define TK3_TABLE                          113
#define TK3_LP                             114
#define TK3_RP                             115
#define TK3_AS                             116
#define TK3_DOT                            117
#define TK3_ID_TAB_NEW                     118
#define TK3_ID_DB                          119
#define TK3_COMMA                          120
#define TK3_CTX_ROWID_KW                   121
#define TK3_CTX_STRICT_KW                  122
#define TK3_EXISTS                         123
#define TK3_ID_COL_NEW                     124
#define TK3_INDEXED                        125
#define TK3_GENERATED                      126
#define TK3_STRING                         127
#define TK3_JOIN_KW                        128
#define TK3_ID_COL_TYPE                    129
#define TK3_RIGHT_ASSOC                    130
#define TK3_CONSTRAINT                     131
#define TK3_DEFAULT                        132
#define TK3_NULL                           133
#define TK3_PRIMARY                        134
#define TK3_UNIQUE                         135
#define TK3_CHECK                          136
#define TK3_REFERENCES                     137
#define TK3_ID_CONSTR                      138
#define TK3_ID_COLLATE                     139
#define TK3_ID_TAB                         140
#define TK3_INTEGER                        141
#define TK3_FLOAT                          142
#define TK3_BLOB                           143
#define TK3_AUTOINCR                       144
#define TK3_ON                             145
#define TK3_INSERT                         146
#define TK3_DELETE                         147
#define TK3_UPDATE                         148
#define TK3_ID_FK_MATCH                    149
#define TK3_SET                            150
#define TK3_DEFERRABLE                     151
#define TK3_FOREIGN                        152
#define TK3_DROP                           153
#define TK3_ID_VIEW_NEW                    154
#define TK3_ID_VIEW                        155
#define TK3_SELECT                         156
#define TK3_VALUES                         157
#define TK3_UNION                          158
#define TK3_ALL                            159
#define TK3_EXCEPT                         160
#define TK3_INTERSECT                      161
#define TK3_DISTINCT                       162
#define TK3_ID_ALIAS                       163
#define TK3_FROM                           164
#define TK3_USING                          165
#define TK3_JOIN                           166
#define TK3_ID_JOIN_OPTS                   167
#define TK3_ID_IDX                         168
#define TK3_ORDER                          169
#define TK3_GROUP                          170
#define TK3_HAVING                         171
#define TK3_LIMIT                          172
#define TK3_WHERE                          173
#define TK3_RETURNING                      174
#define TK3_ID_COL                         175
#define TK3_INTO                           176
#define TK3_NOTHING                        177
#define TK3_ID_FN                          178
#define TK3_ID_ERR_MSG                     179
#define TK3_VARIABLE                       180
#define TK3_CASE                           181
#define TK3_WHEN                           182
#define TK3_THEN                           183
#define TK3_ELSE                           184
#define TK3_INDEX                          185
#define TK3_ID_IDX_NEW                     186
#define TK3_ID_PRAGMA                      187
#define TK3_ID_TRIG_NEW                    188
#define TK3_ID_TRIG                        189
#define TK3_ALTER                          190
#define TK3_ADD                            191
#define TK3_WINDOW                         192
#define TK3_OVER                           193
