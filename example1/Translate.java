import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;

public class Translate {
  public static void main(String[] args) throws Exception {
    // create a character stream that leads from input
    ANTLRInputStream input = new ANTLRInputStream(System.in);

    // create a lexer that feeds off of input CharStream
    ArrayInitLexer lexer = new ArrayInitLexer(input);

    // create a buffer of tokens pulled from the lexer
    CommonTokenStream tokens = new CommonTokenStream(lexer);

    // create a parser that feeds off the tokens buffer
    ArrayInitParser parser = new ArrayInitParser(tokens);

    ParseTree tree = parser.init(); // begin parsing at init rule
    // System.out.println(tree.toStringTree(parser));
    
    // create a generic parse tree walker that can trigger callbacks
    ParseTreeWalker walker = new ParseTreeWalker();

    // walk the tree created during the parse, trigger callbacks
    walker.walk(new ShortToUnicodeString(), tree);
    System.out.println();
  }
}
