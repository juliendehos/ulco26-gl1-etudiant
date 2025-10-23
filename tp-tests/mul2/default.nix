{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "mul2";
  src = ./.;

  buildInputs = with pkgs; [
    catch2_3
    cmake
  ];

  doCheck = true;

}

