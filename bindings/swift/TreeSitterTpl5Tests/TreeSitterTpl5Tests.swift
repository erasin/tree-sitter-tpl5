import XCTest
import SwiftTreeSitter
import TreeSitterTpl5

final class TreeSitterTpl5Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tpl5())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Tpl5 grammar")
    }
}
