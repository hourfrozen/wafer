// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "wafer",
    platforms: [
        .iOS(.v17),
        .macOS(.v14),
    ],
    products: [
        .library(
            name: "wafer",
            targets: ["wafer"]
        )
    ],
    dependencies: [],
    targets: [
        .target(
            name: "wafer",
            dependencies: [],
            linkerSettings: [
                .unsafeFlags([
                    "-F", "Dependencies/Frameworks",

                    "-framework", "qemu-ppc-softmmu",
                    "-framework", "glib-2.0.0",
                    "-framework", "gobject-2.0.0",
                    "-framework", "gio-2.0.0",
                    "-framework", "gmodule-2.0.0",
                    "-framework", "gthread-2.0.0",
                    "-framework", "pixman-1.0",
                    "-framework", "intl.8",
                    "-framework", "iconv.2",
                    "-framework", "ffi.8",
                    "-framework", "zstd.1",
                ])
            ]
        )
    ]
)
