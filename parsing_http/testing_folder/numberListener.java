// Generated from number.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link numberParser}.
 */
public interface numberListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link numberParser#num}.
	 * @param ctx the parse tree
	 */
	void enterNum(numberParser.NumContext ctx);
	/**
	 * Exit a parse tree produced by {@link numberParser#num}.
	 * @param ctx the parse tree
	 */
	void exitNum(numberParser.NumContext ctx);
}