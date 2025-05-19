package tree_sitter_tpl5_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_tpl5 "github.com/tree-sitter/tree-sitter-tpl5/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tpl5.Language())
	if language == nil {
		t.Errorf("Error loading Tpl5 grammar")
	}
}
