{ pkgs ? import <nixpkgs> { } }:
let 
	name = "treeSitterShell";
in
pkgs.stdenv.mkDerivation {
  buildInputs = with pkgs; [
  	nodejs_latest
  ];

  PROJECT_ROOT = builtins.toString ./.;

  shellHook = ''
	#export PATH=$PATH:$PROJECT_ROOT/node_modules/.bin
  '';

  inherit name;
}

