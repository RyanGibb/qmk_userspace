{
  description = "Flake for building qmk firmware";

  outputs =
    {
      self,
      nixpkgs,
      flake-utils,
    }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs { inherit system; };
        keyboard = "zsa/moonlander";
        keymap = "ryangibb";
      in
      {
        # TODO package in Nix

        # Get a devshell with `nix develop` and then use `build` and `flash`.
        # Build dir is taken as a param of `build` and `flash`,
        devShell = pkgs.mkShell {
          KEYBOARD = keyboard;
          KEYMAP = keymap;
          buildInputs = [ pkgs.qmk ];
          shellHook = ''
            build() {
              BUILD_DIR=''${1:-.build}
              make -C . BUILD_DIR=$BUILD_DIR COPY=echo -j8 $KEYBOARD:$KEYMAP
            }
            flash() {
              BUILD_DIR=''${1:-.build}
              make -C . BUILD_DIR=$BUILD_DIR COPY=echo -j8 $KEYBOARD:$KEYMAP:flash
            }
          '';
        };
      }
    );
}
