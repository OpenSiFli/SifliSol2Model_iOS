
// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SifliSol2Model",
    platforms: [
        .iOS(.v12),
        .macOS(.v10_15)
    ],
    products: [
        .library(
            name: "SifliSol2Model",
            targets: ["SifliSol2Model"]),
    ],

    targets: [
        .binaryTarget(
            name: "SifliSol2Model",
            path: "Sources/SifliSol2Model/SifliSol2Model.xcframework"
        )
    ]
)


