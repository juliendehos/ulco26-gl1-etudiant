
{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
  name = "drawlib-tikz";
  src = ./.;

  buildInputs = with pkgs; [
    gnumake
    pdf2svg
    (texlive.combine {
      inherit (texlive)
      adjustbox
      fontspec
      pdfcrop
      wasy
      wasysym
      scheme-small;
    })
  ];

  installPhase = ''
    mkdir -p $out/images
    cp *.svg $out/images/
  '';

}

