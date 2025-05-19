// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterTpl5",
    products: [
        .library(name: "TreeSitterTpl5", targets: ["TreeSitterTpl5"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterTpl5",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterTpl5Tests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterTpl5",
            ],
            path: "bindings/swift/TreeSitterTpl5Tests"
        )
    ],
    cLanguageStandard: .c11
)
