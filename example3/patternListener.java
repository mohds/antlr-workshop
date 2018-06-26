// Generated from pattern.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link patternParser}.
 */
public interface patternListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link patternParser#seq}.
	 * @param ctx the parse tree
	 */
	void enterSeq(patternParser.SeqContext ctx);
	/**
	 * Exit a parse tree produced by {@link patternParser#seq}.
	 * @param ctx the parse tree
	 */
	void exitSeq(patternParser.SeqContext ctx);
}