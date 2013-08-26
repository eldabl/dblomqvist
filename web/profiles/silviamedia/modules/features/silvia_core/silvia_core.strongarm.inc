<?php
/**
 * @file
 * silvia_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function silvia_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_fonts_enabled_fonts';
  $strongarm->value = array(
    'Six_Caps' => array(
      'family' => 'Six Caps',
      'variants' => array(
        'regular' => 'regular',
      ),
      'subsets' => array(
        'latin' => 'latin',
      ),
    ),
  );
  $export['google_fonts_enabled_fonts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_fonts_webfonts';
  $strongarm->value = array(
    0 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Abel',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    1 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Abril Fatface',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    2 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Aclonica',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    3 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Acme',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    4 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Actor',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    5 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Adamina',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    6 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Aguafina Script',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    7 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Aladin',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    8 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Aldrich',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    9 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Alegreya',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
        4 => '900',
        5 => '900italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    10 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Alegreya SC',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
        4 => '900',
        5 => '900italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    11 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Alex Brush',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    12 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Alfa Slab One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    13 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Alice',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    14 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Alike',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    15 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Alike Angular',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    16 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Allan',
      'variants' => array(
        0 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    17 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Allerta',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    18 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Allerta Stencil',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    19 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Almendra',
      'variants' => array(
        0 => '400',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    20 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Almendra SC',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    21 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Amaranth',
      'variants' => array(
        0 => 'regular',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    22 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Amatic SC',
      'variants' => array(
        0 => '400',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    23 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Amethysta',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    24 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Andada',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    25 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Andika',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    26 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Angkor',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    27 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Annie Use Your Telescope',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    28 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Anonymous Pro',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
      ),
    ),
    29 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Antic',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    30 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Anton',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    31 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Arapey',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    32 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Arbutus',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    33 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Architects Daughter',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    34 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Arimo',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    35 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Arizonia',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    36 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Armata',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    37 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Artifika',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    38 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Arvo',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    39 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Asap',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    40 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Asset',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    41 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Astloch',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    42 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Asul',
      'variants' => array(
        0 => '400',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    43 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Atomic Age',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    44 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Aubrey',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    45 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bad Script',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    46 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Balthazar',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    47 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bangers',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    48 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Basic',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    49 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Battambang',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    50 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Baumans',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    51 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bayon',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    52 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Belgrano',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    53 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bentham',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    54 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bevan',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    55 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bigshot One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    56 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bilbo',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    57 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bilbo Swash Caps',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    58 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bitter',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    59 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Black Ops One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    60 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bokor',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    61 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bonbon',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    62 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Boogaloo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    63 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bowlby One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    64 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bowlby One SC',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    65 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Brawler',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    66 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bree Serif',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    67 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Bubblegum Sans',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    68 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Buda',
      'variants' => array(
        0 => '300',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    69 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Buenard',
      'variants' => array(
        0 => '400',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    70 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Butcherman',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    71 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cabin',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '500',
        3 => '500italic',
        4 => '600',
        5 => '600italic',
        6 => 'bold',
        7 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    72 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cabin Condensed',
      'variants' => array(
        0 => '400',
        1 => '500',
        2 => '600',
        3 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    73 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cabin Sketch',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    74 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Caesar Dressing',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    75 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cagliostro',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    76 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Calligraffitti',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    77 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cambo',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    78 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Candal',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    79 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cantarell',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    80 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cardo',
      'variants' => array(
        0 => 'regular',
        1 => '400italic',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'greek',
        1 => 'greek-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    81 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Carme',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    82 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Carter One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    83 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Caudex',
      'variants' => array(
        0 => '400',
        1 => 'italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'greek',
        1 => 'greek-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    84 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cedarville Cursive',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    85 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ceviche One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    86 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Changa One',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    87 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Chango',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    88 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Chelsea Market',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    89 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Chenla',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    90 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cherry Cream Soda',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    91 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Chewy',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    92 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Chicle',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    93 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Chivo',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '900',
        3 => '900italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    94 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Coda',
      'variants' => array(
        0 => '400',
        1 => '800',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    95 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Coda Caption',
      'variants' => array(
        0 => '800',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    96 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Comfortaa',
      'variants' => array(
        0 => '300',
        1 => '400',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    97 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Coming Soon',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    98 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Concert One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    99 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Condiment',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    100 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Content',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    101 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Contrail One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    102 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Convergence',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    103 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cookie',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    104 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Copse',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    105 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Corben',
      'variants' => array(
        0 => '400',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    106 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cousine',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    107 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Coustard',
      'variants' => array(
        0 => '400',
        1 => '900',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    108 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Covered By Your Grace',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    109 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Crafty Girls',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    110 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Creepster',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    111 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Crete Round',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    112 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Crimson Text',
      'variants' => array(
        0 => 'regular',
        1 => '400italic',
        2 => '600',
        3 => '600italic',
        4 => '700',
        5 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    113 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Crushed',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    114 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Cuprum',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    115 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Damion',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    116 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Dancing Script',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    117 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Dangrek',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    118 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Dawning of a New Day',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    119 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Days One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    120 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Delius',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    121 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Delius Swash Caps',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    122 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Delius Unicase',
      'variants' => array(
        0 => '400',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    123 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Devonshire',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    124 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Didact Gothic',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
      ),
    ),
    125 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Diplomata',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    126 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Diplomata SC',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    127 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Dorsa',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    128 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Dr Sugiyama',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    129 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Droid Sans',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    130 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Droid Sans Mono',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    131 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Droid Serif',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    132 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Duru Sans',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    133 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Dynalight',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    134 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'EB Garamond',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'latin',
        3 => 'latin-ext',
        4 => 'vietnamese',
      ),
    ),
    135 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Eater',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    136 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Electrolize',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    137 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Emblema One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    138 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Engagement',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    139 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Enriqueta',
      'variants' => array(
        0 => '400',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    140 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Esteban',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    141 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Expletus Sans',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '500',
        3 => '500italic',
        4 => '600',
        5 => '600italic',
        6 => '700',
        7 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    142 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fanwood Text',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    143 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fascinate',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    144 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fascinate Inline',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    145 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Federant',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    146 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Federo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    147 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fjord One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    148 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Flamenco',
      'variants' => array(
        0 => '300',
        1 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    149 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Flavors',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    150 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fondamento',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    151 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fontdiner Swanky',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    152 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Forum',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    153 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Francois One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    154 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fredericka the Great',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    155 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Freehand',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    156 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fresca',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    157 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Frijole',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    158 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Fugaz One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    159 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'GFS Didot',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'greek',
      ),
    ),
    160 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'GFS Neohellenic',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'greek',
      ),
    ),
    161 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Galdeano',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    162 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Gentium Basic',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    163 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Gentium Book Basic',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    164 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Geo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    165 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Geostar',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    166 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Geostar Fill',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    167 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Germania One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    168 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Give You Glory',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    169 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Glegoo',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    170 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Gloria Hallelujah',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    171 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Goblin One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    172 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Gochi Hand',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    173 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Goudy Bookletter 1911',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    174 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Gravitas One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    175 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Gruppo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    176 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Gudea',
      'variants' => array(
        0 => '400',
        1 => 'italic',
        2 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    177 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Habibi',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    178 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Hammersmith One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    179 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Handlee',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    180 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Hanuman',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    181 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Herr Von Muellerhoff',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    182 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Holtwood One SC',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    183 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Homemade Apple',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    184 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Homenaje',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    185 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell DW Pica',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    186 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell DW Pica SC',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    187 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell Double Pica',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    188 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell Double Pica SC',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    189 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell English',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    190 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell English SC',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    191 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell French Canon',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    192 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell French Canon SC',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    193 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell Great Primer',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    194 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'IM Fell Great Primer SC',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    195 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Iceberg',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    196 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Iceland',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    197 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Inconsolata',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    198 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Inder',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    199 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Indie Flower',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    200 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Inika',
      'variants' => array(
        0 => '400',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    201 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Irish Grover',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    202 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Istok Web',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    203 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Italianno',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    204 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Jim Nightshade',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    205 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Jockey One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    206 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Josefin Sans',
      'variants' => array(
        0 => '100',
        1 => '100italic',
        2 => '300',
        3 => '300italic',
        4 => '400',
        5 => '400italic',
        6 => '600',
        7 => '600italic',
        8 => '700',
        9 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    207 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Josefin Slab',
      'variants' => array(
        0 => '100',
        1 => '100italic',
        2 => '300',
        3 => '300italic',
        4 => '400',
        5 => '400italic',
        6 => '600',
        7 => '600italic',
        8 => '700',
        9 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    208 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Judson',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    209 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Julee',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    210 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Junge',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    211 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Jura',
      'variants' => array(
        0 => '300',
        1 => '400',
        2 => '500',
        3 => '600',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
      ),
    ),
    212 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Just Another Hand',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    213 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Just Me Again Down Here',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    214 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kameron',
      'variants' => array(
        0 => '400',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    215 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kaushan Script',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    216 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kelly Slab',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
        2 => 'latin-ext',
      ),
    ),
    217 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kenia',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    218 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Khmer',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    219 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Knewave',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    220 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kotta One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    221 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Koulen',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    222 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kranky',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    223 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kreon',
      'variants' => array(
        0 => '300',
        1 => '400',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    224 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Kristi',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    225 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'La Belle Aurore',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    226 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lancelot',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    227 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lato',
      'variants' => array(
        0 => '100',
        1 => '100italic',
        2 => '300',
        3 => '300italic',
        4 => '400',
        5 => '400italic',
        6 => '700',
        7 => '700italic',
        8 => '900',
        9 => '900italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    228 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'League Script',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    229 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Leckerli One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    230 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lekton',
      'variants' => array(
        0 => '400',
        1 => 'italic',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    231 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lemon',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    232 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lilita One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    233 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Limelight',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    234 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Linden Hill',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    235 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lobster',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    236 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lobster Two',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    237 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lora',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    238 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Love Ya Like A Sister',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    239 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Loved by the King',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    240 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Luckiest Guy',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    241 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lusitana',
      'variants' => array(
        0 => '400',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    242 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Lustria',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    243 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Macondo',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    244 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Macondo Swash Caps',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    245 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Magra',
      'variants' => array(
        0 => '400',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    246 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Maiden Orange',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    247 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mako',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    248 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Marck Script',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
        2 => 'latin-ext',
      ),
    ),
    249 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Marko One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    250 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Marmelad',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
        2 => 'latin-ext',
      ),
    ),
    251 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Marvel',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    252 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mate',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    253 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mate SC',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    254 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Maven Pro',
      'variants' => array(
        0 => '400',
        1 => '500',
        2 => '700',
        3 => '900',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    255 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Meddon',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    256 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'MedievalSharp',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    257 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Medula One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    258 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Megrim',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    259 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Merienda One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    260 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Merriweather',
      'variants' => array(
        0 => '300',
        1 => 'regular',
        2 => '700',
        3 => '900',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    261 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Metal',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    262 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Metamorphous',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    263 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Metrophobic',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    264 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Michroma',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    265 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Miltonian',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    266 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Miltonian Tattoo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    267 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Miniver',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    268 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Miss Fajardose',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    269 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Modern Antiqua',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    270 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Molengo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    271 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Monofett',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    272 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Monoton',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    273 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Monsieur La Doulaise',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    274 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Montaga',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    275 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Montez',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    276 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Montserrat',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    277 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Moul',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    278 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Moulpali',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    279 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mountains of Christmas',
      'variants' => array(
        0 => 'regular',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    280 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mr Bedfort',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    281 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mr Dafoe',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    282 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mr De Haviland',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    283 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mrs Saint Delafield',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    284 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Mrs Sheppards',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    285 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Muli',
      'variants' => array(
        0 => '300',
        1 => '300italic',
        2 => '400',
        3 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    286 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Neucha',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    287 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Neuton',
      'variants' => array(
        0 => '200',
        1 => '300',
        2 => 'regular',
        3 => 'italic',
        4 => '700',
        5 => '800',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    288 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'News Cycle',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    289 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Niconne',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    290 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nixie One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    291 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nobile',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    292 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nokora',
      'variants' => array(
        0 => '400',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    293 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nosifer',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    294 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nothing You Could Do',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    295 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Noticia Text',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    296 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Cut',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    297 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Flat',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    298 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Mono',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'greek',
        1 => 'latin',
      ),
    ),
    299 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Oval',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    300 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Round',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    301 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Script',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    302 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Slim',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    303 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nova Square',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    304 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Numans',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    305 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Nunito',
      'variants' => array(
        0 => '300',
        1 => '400',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    306 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Odor Mean Chey',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    307 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Old Standard TT',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    308 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Oldenburg',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    309 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Open Sans',
      'variants' => array(
        0 => '300',
        1 => '300italic',
        2 => '400',
        3 => '400italic',
        4 => '600',
        5 => '600italic',
        6 => '700',
        7 => '700italic',
        8 => '800',
        9 => '800italic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
        6 => 'vietnamese',
      ),
    ),
    310 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Open Sans Condensed',
      'variants' => array(
        0 => '300',
        1 => '300italic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
        6 => 'vietnamese',
      ),
    ),
    311 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Orbitron',
      'variants' => array(
        0 => '400',
        1 => '500',
        2 => '700',
        3 => '900',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    312 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Original Surfer',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    313 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Oswald',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    314 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Over the Rainbow',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    315 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Overlock',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
        4 => '900',
        5 => '900italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    316 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Overlock SC',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    317 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ovo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    318 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'PT Sans',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    319 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'PT Sans Caption',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    320 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'PT Sans Narrow',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    321 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'PT Serif',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    322 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'PT Serif Caption',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    323 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Pacifico',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    324 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Parisienne',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    325 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Passero One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    326 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Passion One',
      'variants' => array(
        0 => '400',
        1 => '700',
        2 => '900',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    327 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Patrick Hand',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    328 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Patua One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    329 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Paytone One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    330 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Permanent Marker',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    331 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Petrona',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    332 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Philosopher',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'latin',
      ),
    ),
    333 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Piedra',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    334 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Pinyon Script',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    335 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Plaster',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    336 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Play',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
      ),
    ),
    337 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Playball',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    338 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Playfair Display',
      'variants' => array(
        0 => 'regular',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    339 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Podkova',
      'variants' => array(
        0 => 'regular',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    340 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Poller One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    341 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Poly',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    342 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Pompiere',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    343 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Port Lligat Sans',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    344 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Port Lligat Slab',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    345 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Prata',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    346 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Preahvihear',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    347 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Prociono',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    348 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Puritan',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    349 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Quantico',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    350 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Quattrocento',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    351 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Quattrocento Sans',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    352 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Questrial',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    353 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Quicksand',
      'variants' => array(
        0 => '300',
        1 => '400',
        2 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    354 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Qwigley',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    355 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Radley',
      'variants' => array(
        0 => 'regular',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    356 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Raleway',
      'variants' => array(
        0 => '100',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    357 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rammetto One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    358 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rancho',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    359 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rationale',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    360 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Redressed',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    361 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Reenie Beanie',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    362 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ribeye',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    363 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ribeye Marrow',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    364 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Righteous',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    365 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rochester',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    366 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rock Salt',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    367 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rokkitt',
      'variants' => array(
        0 => 'regular',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    368 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ropa Sans',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    369 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rosario',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    370 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Rouge Script',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    371 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ruda',
      'variants' => array(
        0 => '400',
        1 => 'bold',
        2 => '900',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    372 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ruge Boogie',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    373 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ruluko',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    374 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ruslan Display',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    375 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ruthie',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    376 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sail',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    377 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Salsa',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    378 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sancreek',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    379 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sansita One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    380 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sarina',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    381 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Satisfy',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    382 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Schoolbell',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    383 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Shadows Into Light',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    384 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Shanti',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    385 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Shojumaru',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    386 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Short Stack',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    387 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Siemreap',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    388 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sigmar One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    389 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Signika',
      'variants' => array(
        0 => '300',
        1 => '400',
        2 => '600',
        3 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    390 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Signika Negative',
      'variants' => array(
        0 => '300',
        1 => '400',
        2 => '600',
        3 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    391 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sirin Stencil',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    392 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Six Caps',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    393 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Slackey',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    394 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Smokum',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    395 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Smythe',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    396 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sniglet',
      'variants' => array(
        0 => '800',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    397 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Snippet',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    398 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sofia',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    399 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sonsie One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    400 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sorts Mill Goudy',
      'variants' => array(
        0 => '400',
        1 => '400italic',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    401 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Special Elite',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    402 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Spicy Rice',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    403 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Spinnaker',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    404 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Spirax',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    405 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Squada One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    406 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Stardos Stencil',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    407 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Stint Ultra Condensed',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    408 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Stoke',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    409 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sue Ellen Francisco',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    410 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Sunshiney',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    411 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Supermercado One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    412 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Suwannaphum',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    413 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Swanky and Moo Moo',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    414 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Syncopate',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    415 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Tangerine',
      'variants' => array(
        0 => 'regular',
        1 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    416 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Taprom',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'khmer',
      ),
    ),
    417 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Telex',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    418 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Tenor Sans',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'latin',
        3 => 'latin-ext',
      ),
    ),
    419 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Terminal Dosis',
      'variants' => array(
        0 => '200',
        1 => '300',
        2 => '400',
        3 => '500',
        4 => '600',
        5 => '700',
        6 => '800',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    420 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'The Girl Next Door',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    421 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Tienne',
      'variants' => array(
        0 => '400',
        1 => '700',
        2 => '900',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    422 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Tinos',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    423 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Titan One',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    424 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Trade Winds',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    425 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Trochut',
      'variants' => array(
        0 => '400',
        1 => 'italic',
        2 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    426 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Trykker',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    427 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Tulpen One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    428 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ubuntu',
      'variants' => array(
        0 => '300',
        1 => '300italic',
        2 => 'regular',
        3 => 'italic',
        4 => '500',
        5 => '500italic',
        6 => 'bold',
        7 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
      ),
    ),
    429 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ubuntu Condensed',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
      ),
    ),
    430 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ubuntu Mono',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'cyrillic',
        1 => 'cyrillic-ext',
        2 => 'greek',
        3 => 'greek-ext',
        4 => 'latin',
        5 => 'latin-ext',
      ),
    ),
    431 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Ultra',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    432 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Uncial Antiqua',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    433 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'UnifrakturCook',
      'variants' => array(
        0 => 'bold',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    434 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'UnifrakturMaguntia',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    435 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Unkempt',
      'variants' => array(
        0 => 'regular',
        1 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    436 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Unlock',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    437 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Unna',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    438 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'VT323',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    439 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Varela',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    440 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Varela Round',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    441 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Vast Shadow',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    442 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Vibur',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    443 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Vidaloka',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    444 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Viga',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    445 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Volkhov',
      'variants' => array(
        0 => '400',
        1 => '400italic',
        2 => '700',
        3 => '700italic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    446 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Vollkorn',
      'variants' => array(
        0 => 'regular',
        1 => 'italic',
        2 => 'bold',
        3 => 'bolditalic',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    447 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Voltaire',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    448 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Waiting for the Sunrise',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    449 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Wallpoet',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    450 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Walter Turncoat',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    451 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Wellfleet',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
        1 => 'latin-ext',
      ),
    ),
    452 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Wire One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    453 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Yanone Kaffeesatz',
      'variants' => array(
        0 => '200',
        1 => '300',
        2 => '400',
        3 => '700',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    454 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Yellowtail',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    455 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Yeseva One',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    456 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Yesteryear',
      'variants' => array(
        0 => '400',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
    457 => (object) array(
      'kind' => 'webfonts#webfont',
      'family' => 'Zeyada',
      'variants' => array(
        0 => 'regular',
      ),
      'subsets' => array(
        0 => 'latin',
      ),
    ),
  );
  $export['google_fonts_webfonts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '95';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_admin_title';
  $strongarm->value = 'Footer menu';
  $export['menu_block_1_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_depth';
  $strongarm->value = '1';
  $export['menu_block_1_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_expanded';
  $strongarm->value = 0;
  $export['menu_block_1_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_follow';
  $strongarm->value = 0;
  $export['menu_block_1_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_level';
  $strongarm->value = '1';
  $export['menu_block_1_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_parent';
  $strongarm->value = 'main-menu:0';
  $export['menu_block_1_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_sort';
  $strongarm->value = 0;
  $export['menu_block_1_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_title_link';
  $strongarm->value = 0;
  $export['menu_block_1_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_ids';
  $strongarm->value = array(
    0 => 1,
  );
  $export['menu_block_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => 'silvialogo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
