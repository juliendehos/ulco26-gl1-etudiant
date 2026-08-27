{ pkgs ? import <nixpkgs>{} }:

let
  url-compat = {
    url = "https://github.com/NixOS/nixpkgs/archive/refs/tags/25.11.tar.gz";
    sha256 = "sha256-M101xMtWdF1eSD0xhiR8nG8CXRlHmv6V+VoY65Smwf4=";
  };
  pkgs-compat = import (pkgs.fetchzip url-compat) {};

in pkgs.stdenv.mkDerivation {
  name = "rle";
  src = ./.;

  buildInputs = with pkgs; [
    catch2_3
    cmake
    doxygen
    pkgs-compat.mdbook
    pkgs-compat.mdbook-katex
    plog
  ];

  doCheck = true;

}

