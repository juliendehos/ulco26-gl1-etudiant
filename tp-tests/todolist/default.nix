{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "todolist";
  src = ./.;

  buildInputs = with pkgs; [
    catch2_3
    cmake
  ];

  doCheck = true;

}

