{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
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
}

