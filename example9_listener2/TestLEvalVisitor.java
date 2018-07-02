import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;

import java.io.FileInputStream;
import java.io.InputStream;
import java.util.*;

public class TestLEvalVisitor {
	public static class EvalVisitor extends LExprBaseVisitor<Integer> {
		public Integer visitMult(LExprParser.MultContext ctx) {
			return visit(ctx.e(0)) * visit(ctx.e(1));
		}
		
		public Integer visitAdd(LExprParser.AddContext ctx) {
			return visit(ctx.e(0)) + visit(ctx.e(1));
		}
	
		public Integer visitInt(LExprParser.IntContext ctx) {
			return Integer.valueOf(ctx.INT().getText());
		}

	}
	public static void main(String[] args) throws Exception {
		String inputFile = null;
		if(args.length > 0) inputFile = args[0];
		InputStream is = System.in;
		if (inputFile != null) {
			is = new FileInputStream(inputFile);
		}
		ANTLRInputStream input = new ANTLRInputStream(is);
		LExprLexer lexer = new LExprLexer(input);
		CommonTokenStream tokens = new CommonTokenStream(lexer);
		LExprParser parser = new LExprParser(tokens);
		parser.setBuildParseTree(true);

		ParseTree tree = parser.s();
		System.out.println(tree.toStringTree(parser));

		EvalVisitor evalVisitor = new EvalVisitor();
		int result = evalVisitor.visit(tree);
		System.out.println("visitor result = " + result);
	}
}