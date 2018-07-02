// Generated from JSON.g4 by ANTLR 4.7
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class JSONLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, LCURLY=8, LBRACK=9, 
		STRING=10, NUMBER=11;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "LCURLY", "LBRACK", 
		"STRING", "ESC", "UNICODE", "HEX", "NUMBER", "INT", "EXP"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "','", "'}'", "']'", "':'", "'true'", "'false'", "'null'", "'{'", 
		"'['"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, "LCURLY", "LBRACK", "STRING", 
		"NUMBER"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public JSONLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "JSON.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\r{\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\3\2\3"+
		"\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\b"+
		"\3\b\3\b\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\13\7\13C\n\13\f\13\16\13"+
		"F\13\13\3\13\3\13\3\f\3\f\3\f\5\fM\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3"+
		"\16\3\17\5\17X\n\17\3\17\3\17\3\17\3\17\5\17^\n\17\3\17\5\17a\n\17\3\17"+
		"\3\17\3\17\3\17\5\17g\n\17\3\17\5\17j\n\17\3\20\3\20\3\20\7\20o\n\20\f"+
		"\20\16\20r\13\20\5\20t\n\20\3\21\3\21\5\21x\n\21\3\21\3\21\2\2\22\3\3"+
		"\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\2\31\2\33\2\35\r\37\2!\2"+
		"\3\2\7\4\2$$^^\n\2$$\61\61^^ddhhppttvv\5\2\62;CHch\4\2GGgg\4\2--//\2\u0081"+
		"\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\35\3\2\2\2"+
		"\3#\3\2\2\2\5%\3\2\2\2\7\'\3\2\2\2\t)\3\2\2\2\13+\3\2\2\2\r\60\3\2\2\2"+
		"\17\66\3\2\2\2\21;\3\2\2\2\23=\3\2\2\2\25?\3\2\2\2\27I\3\2\2\2\31N\3\2"+
		"\2\2\33T\3\2\2\2\35i\3\2\2\2\37s\3\2\2\2!u\3\2\2\2#$\7.\2\2$\4\3\2\2\2"+
		"%&\7\177\2\2&\6\3\2\2\2\'(\7_\2\2(\b\3\2\2\2)*\7<\2\2*\n\3\2\2\2+,\7v"+
		"\2\2,-\7t\2\2-.\7w\2\2./\7g\2\2/\f\3\2\2\2\60\61\7h\2\2\61\62\7c\2\2\62"+
		"\63\7n\2\2\63\64\7u\2\2\64\65\7g\2\2\65\16\3\2\2\2\66\67\7p\2\2\678\7"+
		"w\2\289\7n\2\29:\7n\2\2:\20\3\2\2\2;<\7}\2\2<\22\3\2\2\2=>\7]\2\2>\24"+
		"\3\2\2\2?D\7$\2\2@C\5\27\f\2AC\n\2\2\2B@\3\2\2\2BA\3\2\2\2CF\3\2\2\2D"+
		"B\3\2\2\2DE\3\2\2\2EG\3\2\2\2FD\3\2\2\2GH\7$\2\2H\26\3\2\2\2IL\7^\2\2"+
		"JM\t\3\2\2KM\5\31\r\2LJ\3\2\2\2LK\3\2\2\2M\30\3\2\2\2NO\7w\2\2OP\5\33"+
		"\16\2PQ\5\33\16\2QR\5\33\16\2RS\5\33\16\2S\32\3\2\2\2TU\t\4\2\2U\34\3"+
		"\2\2\2VX\7/\2\2WV\3\2\2\2WX\3\2\2\2XY\3\2\2\2YZ\5\37\20\2Z[\7\60\2\2["+
		"]\5\37\20\2\\^\5!\21\2]\\\3\2\2\2]^\3\2\2\2^j\3\2\2\2_a\7/\2\2`_\3\2\2"+
		"\2`a\3\2\2\2ab\3\2\2\2bc\5\37\20\2cd\5!\21\2dj\3\2\2\2eg\7/\2\2fe\3\2"+
		"\2\2fg\3\2\2\2gh\3\2\2\2hj\5\37\20\2iW\3\2\2\2i`\3\2\2\2if\3\2\2\2j\36"+
		"\3\2\2\2kt\7\62\2\2lp\4\63;\2mo\4\62;\2nm\3\2\2\2or\3\2\2\2pn\3\2\2\2"+
		"pq\3\2\2\2qt\3\2\2\2rp\3\2\2\2sk\3\2\2\2sl\3\2\2\2t \3\2\2\2uw\t\5\2\2"+
		"vx\t\6\2\2wv\3\2\2\2wx\3\2\2\2xy\3\2\2\2yz\5\37\20\2z\"\3\2\2\2\16\2B"+
		"DLW]`fipsw\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}