#!/usr/bin/perl
use strict;
use warnings;

for (my $i = 1; $i <= 9; $i++) {
  for (my $j = 1; $j <= 9; $j++) {
    printf "%3d", $i*$j;
  }
  print "\n";
}
