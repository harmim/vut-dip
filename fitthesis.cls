% ------------------------------------------------------------------------------
% FIT thesis
% ------------------------------------------------------------------------------
% Authors: 2007 Zdeněk Vašíček, 2008 Michal Bidlo, 2019 Jaroslav Dytrych,
%          2021 Dominik Harmim
% ------------------------------------------------------------------------------

\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{fitthesis}[2021/04/21 Template for BP/DP]

% Default values for parameters
\newif\ifczech \let\ifczech\iftrue
\newif\ifslovak \let\ifslovak\iffalse
\newif\ifenslovak \let\ifenslovak\iffalse
\newif\ifbritish \let\ifbritish\iffalse
\newif\ifczechslovak \let\ifczechslovak\iftrue
\newif\ifcover \let\ifcover\iffalse
\newif\ifCOPEN \let\ifCOPEN\iffalse
\newif\ifCBOPEN \let\ifCBOPEN\iffalse
\newif\ifODSAZ \let\ifODSAZ\iffalse
\newif\iftodo \let\iftodo\iffalse

\newif\ifPrint \let\ifPrint\iffalse
\newif\ifBarLogo \let\ifBarLogo\iffalse
\newif\ifWis \let\ifWis\iftrue
\newif\ifzadani \let\ifzadani\iffalse
\newif\iftwoside \let\iftwoside\iffalse
\newif\ifoneside \let\ifoneside\iftrue
\newif\ifphdsummary \let\ifphdsummary\iffalse


%-------------------------------------------------------------------------------
% Class parameters (uncommenting of commented one is only on your own risk)
%-------------------------------------------------------------------------------


\DeclareOption{british}{%
  \let\ifbritish\iftrue \let\ifczech\iffalse \let\ifczechslovak\iffalse%
}
\DeclareOption{slovak}{\let\ifslovak\iftrue \let\ifczech\iffalse}
\DeclareOption{enslovak}{\let\ifenslovak\iftrue}
\DeclareOption{cover}{\let\ifcover\iftrue}
\DeclareOption{print}{\let\ifWis\iffalse \let\ifPrint\iftrue}
\DeclareOption{cprint}{%
  \let\ifWis\iffalse \let\ifPrint\iftrue \let\ifBarLogo\iftrue%
}
\DeclareOption{zadani}{\let\ifzadani\iftrue}
\DeclareOption{twoside}{\let\ifoneside\iffalse \let\iftwoside\iftrue}
\DeclareOption{phdsummary}{%
  \let\ifoneside\iffalse \let\iftwoside\iffalse \let\ifphdsummary\iftrue%
}
%\DeclareOption{COPEN}{\let\ifCOPEN\iftrue}
%\DeclareOption{CBOPEN}{\let\ifCBOPEN\iftrue}
\DeclareOption{odsaz}{\let\ifODSAZ\iftrue}
\DeclareOption{todo}{\let\iftodo\iftrue}

\DeclareOption*{}
\ProcessOptions\relax

% We will use REPORT class as a base
\iftwoside
  \ifx\pdfoutput\undefined % we are not using pdftex
    \LoadClass[a4paper, twoside, onecolumn, 11pt]{report}
  \else
    \LoadClass[pdftex, a4paper, twoside, onecolumn, 11pt]{report}
  \fi
\fi
\ifoneside
  \ifx\pdfoutput\undefined % we are not using pdftex
    \LoadClass[a4paper, oneside, onecolumn, 11pt]{report}
  \else
    \LoadClass[pdftex, a4paper, oneside, onecolumn, 11pt]{report}
  \fi
\fi
\ifphdsummary
  \ifx\pdfoutput\undefined % we are not using pdftex
    \LoadClass[a5paper, twoside, onecolumn, 11pt]{report}
  \else
    \LoadClass[pdftex, a5paper, twoside, onecolumn, 11pt]{report}
  \fi
  \twosidetrue
\fi


%-------------------------------------------------------------------------------
% Packages
%-------------------------------------------------------------------------------


\ifbritish
  \PassOptionsToPackage{main=british}{babel}
\fi
\usepackage{amsmath}
\usepackage{amssymb}
\usepackage[czech, slovak, british]{babel}
\usepackage[utf8]{inputenc} % encoding
\usepackage{cmap}
\usepackage[T1]{fontenc}
\usepackage{url}
\usepackage{ragged2e}
\usepackage{color}
\usepackage{etoolbox}

\usepackage[inline]{enumitem}
\newlist{enuminline}{enumerate*}{1}
\setlist[enuminline]{label={(\roman*)}}

\ifczech
  \main@language{czech}
\else
  \ifslovak
    \main@language{slovak}
  \else
    \main@language{british}
  \fi
\fi
\ifx\pdfoutput\undefined  % we are not using pdftex
  \usepackage{graphics}
  \usepackage{epsfig}
\else % it is pdftex !
  \ifzadani
    \usepackage[pdftex]{pdfpages}
  \else % pdfpages is not necessary
    \usepackage[pdftex]{graphicx}
  \fi
\fi

\newtoggle{phd_summary}
\togglefalse{phd_summary}
\ifphdsummary
  \toggletrue{phd_summary}
\fi

\newtoggle{slovak_used}
\togglefalse{slovak_used}
\ifslovak
  \toggletrue{slovak_used}
\fi

\newtoggle{british_used}
\togglefalse{british_used}
\ifbritish
  \toggletrue{british_used}
\fi

\newtoggle{enslovak_used}
\togglefalse{enslovak_used}
\ifenslovak
  \toggletrue{enslovak_used}
\fi

\newtoggle{czech_used}
\togglefalse{czech_used}
\ifczech
  \toggletrue{czech_used}
\fi

\newtoggle{czechslovak}
\togglefalse{czechslovak}
\ifczech
  \toggletrue{czechslovak}
\fi
\ifslovak
  \toggletrue{czechslovak}
\fi

\newtoggle{zadaniTwop}
\togglefalse{zadaniTwop}
\iftwoside
  \toggletrue{zadaniTwop}
\fi

\iftoggle{zadaniTwop}{
  \ifzadani
    \toggletrue{zadaniTwop}
  \else
    \togglefalse{zadaniTwop}
  \fi
}{}


%-------------------------------------------------------------------------------
% Page layout
%-------------------------------------------------------------------------------


\iftwoside
  \usepackage[a4paper]{geometry}
  \newgeometry{
    left=3.46cm, text={15.2cm,23.47cm}, top=2.5cm, marginparwidth=50pt
  }
\else
  \setlength{\hoffset}{-.7cm}
  \setlength{\voffset}{-1.5cm}
  \setlength{\textheight}{23cm}
  \setlength{\textwidth}{15.2cm}
\fi

\ifphdsummary
  \newgeometry{left=1.8cm, text={9.5cm,16.5cm}, top=2cm, marginparwidth=25pt}
\fi

\ifODSAZ
  \setlength{\parindent}{0pt}
  \setlength{\parskip}{.5\bigskipamount}
\else
  \setlength\parindent{17\p@}
  \setlength{\parskip}{0pt}
\fi


%-------------------------------------------------------------------------------
% Texts
%-------------------------------------------------------------------------------


\def\@vut@CS{Vysoké učení technické v~Brně}
\def\@vut@SK{Vysoké učení technické v~Brně}
\def\@vut@EN{Brno University of Technology}
\def\@author@CS{Autor práce}
\def\@author@SK{Autor práce}
\def\@author@EN{Author}
\def\@abstract@CS{Abstrakt}
\def\@abstract@SK{Abstrakt}
\def\@abstract@EN{Abstract}
\def\@extendedabstract@CS{Rozšířený abstrakt}
\def\@extendedabstract@SK{Rozšírený abstrakt}
\def\@keywords@CS{Klíčová slova}
\def\@keywords@SK{Kľúčové slová}
\def\@keywords@EN{Keywords}
\def\@cite@CS{Citace}
\def\@cite@SK{Citácia}
\def\@cite@EN{Reference}
\def\@tdecl@CS{Prohlášení}
\def\@tdecl@SK{Prehlásenie}
\def\@tdecl@EN{Declaration}
\def\@tackn@CS{Poděkování}
\def\@tackn@SK{Poďakovanie}
\def\@tackn@EN{Acknowledgements}

\newif\ifnasel
\def\ifEqString#1#2#3#4{\def\testa{#1}\def\testb{#2}%
  \ifx\testa\testb \def#4{#3} \naseltrue \fi%
}

% Project type selection
\newcommand{\set@project}[1]{%
 \naselfalse
 \ifEqString{#1}{BP}{Bakalářská práce}{\@projecttype@CS}%
% \ifEqString{#1}{BP}{Bakalárska práca}{\@projecttype@SK}%
 \ifEqString{#1}{BP}{Bakalářská práce}{\@projecttype@SK}%
 \ifEqString{#1}{BP}{Bachelor's thesis}{\@projecttype@EN}%
 \ifEqString{#1}{BP}{Vedoucí práce}{\@supervisor@CS}%
% \ifEqString{#1}{BP}{Vedúci práce}{\@supervisor@SK}%
 \ifEqString{#1}{BP}{Vedoucí práce}{\@supervisor@SK}%
 \ifEqString{#1}{BP}{Supervisor}{\@supervisor@EN}%
 \ifEqString{#1}{SP}{Semestrální projekt}{\@projecttype@CS}%
% \ifEqString{#1}{SP}{Semestrálny projekt}{\@projecttype@SK}%
 \ifEqString{#1}{SP}{Semestrální projekt}{\@projecttype@SK}%
 \ifEqString{#1}{SP}{Term project}{\@projecttype@EN}%
 \ifEqString{#1}{SP}{Vedoucí práce}{\@supervisor@CS}%
% \ifEqString{#1}{SP}{Vedúci práce}{\@supervisor@SK}%
 \ifEqString{#1}{BP}{Vedoucí práce}{\@supervisor@SK}%
 \ifEqString{#1}{SP}{Supervisor}{\@supervisor@EN}%
 \ifEqString{#1}{DP}{Diplomová práce}{\@projecttype@CS}%
% \ifEqString{#1}{DP}{Diplomová práca}{\@projecttype@SK}%
 \ifEqString{#1}{DP}{Diplomová práce}{\@projecttype@SK}%
 \ifEqString{#1}{DP}{Master's thesis}{\@projecttype@EN}%
 \ifEqString{#1}{DP}{Vedoucí práce}{\@supervisor@CS}%
% \ifEqString{#1}{DP}{Vedúci práce}{\@supervisor@SK}%
 \ifEqString{#1}{DP}{Vedoucí práce}{\@supervisor@SK}%
 \ifEqString{#1}{DP}{Supervisor}{\@supervisor@EN}%
 \ifEqString{#1}{DR}{Disertační práce}{\@projecttype@CS}%
% \ifEqString{#1}{DR}{Dizertačná práca}{\@projecttype@SK}%
 \ifEqString{#1}{DR}{Disertační práce}{\@projecttype@SK}%
 \ifEqString{#1}{DR}{PhD thesis}{\@projecttype@EN}%
 \ifEqString{#1}{DR}{Školitel}{\@supervisor@CS}%
% \ifEqString{#1}{DR}{Školiteľ}{\@supervisor@SK}%
 \ifEqString{#1}{DR}{Školitel}{\@supervisor@SK}%
 \ifEqString{#1}{DR}{Supervisor}{\@supervisor@EN}%
 \ifEqString{#1}{DA}{Teze disertační práce -- autoreferát}{\@projecttype@CS}%
% \ifEqString{#1}{DA}{Tézy dizertačnej práce -- autoreferát}{\@projecttype@SK}%
 \ifEqString{#1}{DA}{Teze disertační práce -- autoreferát}{\@projecttype@SK}%
 \ifEqString{#1}{DA}{PhD thesis summary}{\@projecttype@EN}%
 \ifEqString{#1}{DA}{Školitel}{\@supervisor@CS}%
% \ifEqString{#1}{DA}{Školiteľ}{\@supervisor@SK}%
 \ifEqString{#1}{DA}{Školitel}{\@supervisor@SK}%
 \ifEqString{#1}{DA}{Supervisor}{\@supervisor@EN}%
 \ifEqString{#1}{DT}{Pojednání k tématu disertační práce}{\@projecttype@CS}%
% \ifEqString{#1}{DT}{Teze disertační práce}{\@projecttype@CS}%
% \ifEqString{#1}{DT}{Pojednanie k téme dizertačnej práce}{\@projecttype@SK}%
 \ifEqString{#1}{DT}{Pojednání k tématu disertační práce}{\@projecttype@SK}%
 \ifEqString{#1}{DT}{PhD thesis proposal}{\@projecttype@EN}%
 \ifEqString{#1}{DT}{Školitel}{\@supervisor@CS}%
% \ifEqString{#1}{DT}{Školiteľ}{\@supervisor@SK}%
 \ifEqString{#1}{DT}{Školitel}{\@supervisor@SK}%
 \ifEqString{#1}{DT}{Supervisor}{\@supervisor@EN}%
 \ifnasel
 \else
   \typeout{Spatny typ projektu! Moznosti: BP, SP, DP, DR, DT, DA}
   \set@project{BP}
 \fi
}

% Faculty selection
\newcommand{\set@faculty}[3]{%
 \naselfalse
 \ifEqString{#1}{FIT}{Fakulta informačních technologií}{\@fit@CS}%
 \ifEqString{#1}{FIT}{Fakulta informačních technologií}{\@fit@SK}%
 \ifEqString{#1}{FIT}{Faculty of Information Technology}{\@fit@EN}%
 \ifEqString{#1}{FEKT}{Fakulta elektrotechniky
a komunikačních technologií}{\@fit@CS}%
 \ifEqString{#1}{FEKT}{Fakulta elektrotechniky
a komunikačních technologií}{\@fit@SK}%
 \ifEqString{#1}{FEKT}{Faculty of Electrical Engineering
and Communication}{\@fit@EN}%
 \ifEqString{#1}{FSI}{Fakulta strojního inženýrství}{\@fit@CS}%
 \ifEqString{#1}{FSI}{Fakulta strojního inženýrství}{\@fit@SK}%
 \ifEqString{#1}{FSI}{Faculty of Mechanical
Engineering}{\@fit@EN}%
 \ifEqString{#1}{FA}{Fakulta architektury}{\@fit@CS}%
 \ifEqString{#1}{FA}{Fakulta architektury}{\@fit@SK}%
 \ifEqString{#1}{FA}{Faculty of Architecture}{\@fit@EN}%
 \ifEqString{#1}{FCH}{Fakulta chemická}{\@fit@CS}%
 \ifEqString{#1}{FCH}{Fakulta chemická}{\@fit@SK}%
 \ifEqString{#1}{FCH}{Faculty of Chemistry}{\@fit@EN}%
 \ifEqString{#1}{FP}{Fakulta podnikatelská}{\@fit@CS}%
 \ifEqString{#1}{FP}{Fakulta podnikatelská}{\@fit@SK}%
 \ifEqString{#1}{FP}{Faculty of Business and
Management}{\@fit@EN}%
 \ifEqString{#1}{FAST}{Fakulta stavební}{\@fit@CS}%
 \ifEqString{#1}{FAST}{Fakulta stavební}{\@fit@SK}%
 \ifEqString{#1}{FAST}{Faculty of Civil Engineering}{\@fit@EN}%
 \ifEqString{#1}{FAVU}{Fakulta výtvarných umění}{\@fit@CS}%
 \ifEqString{#1}{FAVU}{Fakulta výtvarných umění}{\@fit@SK}%
 \ifEqString{#1}{FAVU}{Faculty of Fine Arts}{\@fit@EN}%
 \ifEqString{#1}{USI}{Ústav soudního inženýrství}{\@fit@CS}%
 \ifEqString{#1}{USI}{Ústav soudního inženýrství}{\@fit@SK}%
 \ifEqString{#1}{USI}{Institute of Forensic Engineering}{\@fit@EN}%
 \ifEqString{#1}{DEF}{#2}{\@fit@CS}%
 \ifEqString{#1}{DEF}{#2}{\@fit@SK}%
 \ifEqString{#1}{DEF}{#3}{\@fit@EN}%
 \ifnasel
 \else
   \typeout{
      Spatna fakulta! Moznosti: FIT, FEKT, FSI, FA, FCH, FP, FAST, FAVU, USI
    }
    \set@faculty{FIT}
 \fi
}

% Department selection
\newcommand{\set@department}[3]{%
 \naselfalse
 \ifEqString{#1}{UIFS}{Ústav informačních systémů}{\@department@CS}%
 \ifEqString{#1}{UIFS}{Ústav informačních systémů}{\@department@SK}%
 \ifEqString{#1}{UIFS}{Department of Information Systems}{\@department@EN}%
 \ifEqString{#1}{UPSY}{Ústav počítačových systémů}{\@department@CS}%
 \ifEqString{#1}{UPSY}{Ústav počítačových systémů}{\@department@SK}%
 \ifEqString{#1}{UPSY}{Department of Computer Systems}{\@department@EN}%
 \ifEqString{#1}{UITS}{Ústav inteligentních systémů}{\@department@CS}%
 \ifEqString{#1}{UITS}{Ústav inteligentních systémů}{\@department@SK}%
 \ifEqString{#1}{UITS}{Department of Intelligent Systems}{\@department@EN}%
 \ifEqString{#1}{UPGM}{Ústav počítačové grafiky a multimédií}{\@department@CS}%
 \ifEqString{#1}{UPGM}{Ústav počítačové grafiky a multimédií}{\@department@SK}%
 \ifEqString{#1}{UPGM}{Department of Computer Graphics and~Multimedia}{%
  \@department@EN}%
 \ifEqString{#1}{DEF}{#2}{\@department@CS}%
 \ifEqString{#1}{DEF}{#2}{\@department@SK}%
 \ifEqString{#1}{DEF}{#3}{\@department@EN}%
 \ifnasel
 \else
   \typeout{Spatny ustav! Moznosti: UPSY, UIFS, UITS, UPGM, DEF}
   \set@department{UIFS}
 \fi
}

% Name of the department (CS, SK, EN)
\def\@departmentname@CS{\@department@CS}
\def\@departmentname@SK{\@department@SK}
\def\@departmentname@EN{\@department@EN}

% Thesis title (in the language of the thesis)
\iftoggle{slovak_used}{
  \def\@title{\@title@CS}
}{
  \def\@title{\ifczech\@title@CS\else\@title@EN\fi}
}

% Name surname and the titles of the author
\def\get@author{\ifx\undefined\@author@tp\else%
  \@author@tp~\fi\MakeUppercase{\@author}\ifx\undefined\@author@ta\else%
  ,~\@author@ta\fi}
\def\getlc@author{\ifx\undefined\@author@tp\else%
\@author@tp~\fi\@author\ifx\undefined\@author@ta\else,~\@author@ta\fi}
% Name surname and the titles of the supervisor
\def\get@supervisor{\ifx\undefined\@supervisor@tp\else%
  \@supervisor@tp~\fi\MakeUppercase{\@supervisor}%
  \ifx\undefined\@supervisor@ta\else,~\@supervisor@ta\fi}


%-------------------------------------------------------------------------------
% Projectinfo - template parameters
%-------------------------------------------------------------------------------


% Parameters
\define@key{projinfo}{title.cs}{\global\def\@title@CS{#1}}
\define@key{projinfo}{title.en}{\global\def\@title@EN{#1}}
\define@key{projinfo}{faculty.cs}{\def\@faculty@CS{#1}}
\define@key{projinfo}{faculty.en}{\def\@faculty@EN{#1}}
\define@key{projinfo}{faculty}{\set@faculty{#1}{\@faculty@CS}{\@faculty@EN}}
\define@key{projinfo}{department.cs}{\def\@departmentn@CS{#1}}
\define@key{projinfo}{department.en}{\def\@departmentn@EN{#1}}
\define@key{projinfo}{department}{\set@department{#1}{\@departmentn@CS}{%
  \@departmentn@EN}}
\define@key{projinfo}{project}{\set@project{#1}}
\define@key{projinfo}{year}{\def\@year{#1}}
\define@key{projinfo}{date}{\def\@date{#1}}
%\define@key{projinfo}{author}{\def\@author{#1}}
\define@key{projinfo}{author.name}{\def\@author@n{#1}}
\define@key{projinfo}{author.surname}{\def\@author@s{#1}}
\define@key{projinfo}{author.title.a}{\def\@author@ta{#1}}
\define@key{projinfo}{author.title.p}{\def\@author@tp{#1}}
\define@key{projinfo}{supervisor.name}{\def\@supervisor@n{#1}}
\define@key{projinfo}{supervisor.surname}{\def\@supervisor@s{#1}}
\define@key{projinfo}{supervisor.title.a}{\def\@supervisor@ta{#1}}
\define@key{projinfo}{supervisor.title.p}{\def\@supervisor@tp{#1}}
\define@key{projinfo}{keywords.cs}{\def\@tkeywords@CS{#1}}
\define@key{projinfo}{keywords.en}{\def\@tkeywords@EN{#1}}
\define@key{projinfo}{abstract.cs}{\def\@tabstract@CS{#1}}
\define@key{projinfo}{abstract.en}{\def\@tabstract@EN{#1}}
\define@key{projinfo}{extendedabstract}{\def\@textendedabstract{#1}}
\define@key{projinfo}{declaration}{\def\@declaration{#1}}
\define@key{projinfo}{acknowledgement}{\def\@acknowledgement{#1}}
\define@key{projinfo}{title.length}{\def\@titlelen{#1}}
\define@key{projinfo}{sectitle.length}{\def\@sectitlelen{#1}}

% Default values
\setkeys{projinfo}{
  title.cs={Název práce (česky)}, title.en={Název práce (anglicky)},
  date=\today, project=BP, department=DEF, declaration=,
  abstract.cs=, abstract.en=, keywords.cs=, keywords.en=,
  author.name=Jméno, author.surname=Příjmení, supervisor.name=Jméno,
  supervisor.surname=Příjmení, extendedabstract=,
  department.cs=,department.en=,title.length=,sectitle.length=,
  faculty.cs=,faculty.en=,faculty=FIT
}%

\def\projectinfo{\setkeys{projinfo}}

\def\@author{\@author@n\ \@author@s}
\def\@supervisor{\@supervisor@n\ \@supervisor@s}

% Declaration
\newcommand{\declaration}[1]{\def\@declaration{#1}}

% Acknowledgement
\newcommand{\acknowledgement}[1]{\def\@acknowledgement{#1}}

% Abstract
\renewcommand{\abstract}[2][cs]{%
 \ifEqString{#1}{cs}{#2}{\@tabstract@CS}%
 \ifEqString{#1}{sk}{#2}{\@tabstract@SK}%
 \ifEqString{#1}{en}{#2}{\@tabstract@EN}%
}

% Keywords
\newcommand{\keywords}[2][cs]{%
 \ifEqString{#1}{cs}{#2}{\@tkeywords@CS}%
 \ifEqString{#1}{sk}{#2}{\@tkeywords@SK}%
 \ifEqString{#1}{en}{#2}{\@tkeywords@EN}%
}

% Extended abstract
\newcommand{\extendedabstract}[1]{%
 \def\@textendedabstract{#1}%
}

% Title length
\newcommand{\titlelength}[1]{%
 \def\@titlelen{#1}%
}

% Second title length
\newcommand{\sectitlelength}[1]{%
 \def\@sectitlelen{#1}%
}

\newlength{\mkspc}
\setlength{\mkspc}{2pt}

\def\setfontsize#1{\renewcommand{\baselinestretch}{1.5}\fontsize{#1}{%
  \f@baselineskip}\selectfont}
% text
\newcommand{\mktxt}[2]{\vbox{\setfontsize{#1}\noindent#2}\vspace\mkspc}
% text for title page
\newcommand{\mktxtt}[2]{\vbox{\setfontsize{#1}\fosfamily\bfseries\noindent#2}%
  \vspace\mkspc}
% text for cover
\newcommand{\mktxtc}[2]{\vbox{\setfontsize{#1}\ifCOPEN\fosfamily\fi\ifCBOPEN%
  \fosfamily\bfseries\fi\noindent#2}\vspace\mkspc}
% uppercase
\newcommand{\mkuctxt}[2]{\vbox{\setfontsize{#1}\noindent\MakeUppercase{#2}}%
  \vspace\mkspc}
\newcommand{\mkuctxtt}[2]{\vbox{\setfontsize{#1}\fosfamily\bfseries\noindent%
  \MakeUppercase{#2}}\vspace\mkspc}
% For the 2-line thesis title
\newcommand{\mkuctxttl}[3]{\vbox to 1.2cm{\noindent\parbox{#2}{\setfontsize{#1}%
  \fosfamily\bfseries\noindent\flushleft\MakeUppercase{#3}}}\vspace\mkspc}
% For the 2-line second thesis title
\newcommand{\mkuctxttls}[3]{\vbox to 1cm{\noindent\parbox{#2}{\setfontsize{#1}%
  \vspace{-.2cm}\fosfamily\bfseries\noindent\baselineskip=13pt\flushleft%
  \MakeUppercase{#3}}}\vspace\mkspc}
\newcommand{\mkuctxtc}[2]{\vbox{\setfontsize{#1}\ifCOPEN\fosfamily\fi\ifCBOPEN%
  \fosfamily\bfseries\fi\noindent\MakeUppercase{#2}}\vspace\mkspc}
% bold
\newcommand{\mktxt@b}[2]{\vbox{\setfontsize{#1}\noindent\bf#2}\vspace\mkspc}
% bold for title page
\newcommand{\mktxtt@b}[2]{\vbox{\setfontsize{#1}\fosfamily\bfseries\noindent%
  \bf#2}\vspace\mkspc}


% Properties for a PDF document.
\def\pdftitle{\@title}
\def\pdfauthor{\getlc@author}
\ifczech
  \def\pdfkeywords{\@tkeywords@CS}
  \def\pdfsubject{\@projecttype@CS}
\else
  \ifslovak
    \def\pdfkeywords{\@tkeywords@CS}
    \def\pdfsubject{\@projecttype@SK}
  \else
    \def\pdfkeywords{\@tkeywords@EN}
    \def\pdfsubject{\@projecttype@EN}
  \fi
\fi


%-------------------------------------------------------------------------------
% Cover \makecover
%-------------------------------------------------------------------------------


\newcommand\makecover{
\thispagestyle{empty}\null%

\setlength\parindent{17\p@}
\setlength{\parskip}{0pt}

\fontfamily{qhv}\selectfont%
%

\addtolength{\voffset}{-.95cm}

\begin{center}

\ifczech
    \noindent\hspace{-34pt}\mkuctxtc{20}{\@vut@CS}
\else
  \ifslovak
    \noindent\hspace{-34pt}\mkuctxtc{20}{\@vut@CS}
  \else
    \noindent\hspace{-34pt}\mkuctxtc{20}{\@vut@EN}
  \fi
\fi

\vspace{8mm}

\ifczech
  \noindent\hspace{-34pt}\mktxtc{20}{\@fit@CS}
\else
  \ifslovak
    \noindent\hspace{-34pt}\mktxtc{20}{\@fit@CS}
  \else
    \noindent\hspace{-34pt}\mktxtc{20}{\@fit@EN}
  \fi
\fi

\vspace{9cm}

\ifczech
  \noindent\hspace{-34pt}\mkuctxtc{20}{\@projecttype@CS}
\else
  \ifslovak
    \noindent\hspace{-34pt}\mkuctxtc{20}{\@projecttype@CS}
  \else
    \noindent\hspace{-34pt}\mkuctxtc{20}{\@projecttype@EN}
  \fi
\fi

\enlargethispage{5.1\baselineskip}

\vfill

\noindent\mktxtc{16}{\hspace{-52pt}Brno, \@year \hfill \getlc@author
  \hspace{5pt}~}

\ifODSAZ
  \setlength{\parindent}{0pt}
  \setlength{\parskip}{.5\bigskipamount}
\else
  \setlength\parindent{17\p@}
  \setlength{\parskip}{0pt}
\fi

\end{center}

%===============================================================================
\newpage
\fontfamily{\familydefault}\selectfont%
\addtolength{\voffset}{.95cm}
}


%-------------------------------------------------------------------------------
% Abstract, keywords \makeabstract
%-------------------------------------------------------------------------------


\newcommand\makeabstract{%
\thispagestyle{empty}\null%

\ifczech
\mktxt@b{16}{\@abstract@CS}\noindent\@tabstract@CS
\else
  \ifslovak
    \mktxt@b{16}{\@abstract@SK}\noindent\@tabstract@CS
  \else
    \mktxt@b{16}{\@abstract@EN}\noindent\@tabstract@EN
  \fi
\fi

\vfill

\iftoggle{czech_used}{
\mktxt@b{16}{\@abstract@EN}\noindent\@tabstract@EN
}{
  \ifslovak
    \mktxt@b{16}{\@abstract@EN}\noindent\@tabstract@EN
  \else
    \ifenslovak
      \mktxt@b{16}{\@abstract@SK}\noindent\@tabstract@CS
    \else
      \mktxt@b{16}{\@abstract@CS}\noindent\@tabstract@CS
    \fi
  \fi
}

\vfill

\ifczech
\mktxt@b{16}{\@keywords@CS}\noindent\@tkeywords@CS
\else
  \ifslovak
    \mktxt@b{16}{\@keywords@SK}\noindent\@tkeywords@CS
  \else
    \mktxt@b{16}{\@keywords@EN}\noindent\@tkeywords@EN
  \fi
\fi

\vfill

\iftoggle{czech_used}{
\mktxt@b{16}{\@keywords@EN}\noindent\@tkeywords@EN
}{
  \ifslovak
    \mktxt@b{16}{\@keywords@EN}\noindent\@tkeywords@EN
  \else
    \ifenslovak
      \mktxt@b{16}{\@keywords@SK}\noindent\@tkeywords@CS
    \else
      \mktxt@b{16}{\@keywords@CS}\noindent\@tkeywords@CS
    \fi
  \fi
}

\vfill

{\fontsize{11}{11}\selectfont%
\mktxt@b{16}{\ifslovak\@cite@SK\else\ifczech\@cite@CS\else\@cite@EN\fi\fi}
\iftoggle{slovak_used}{
  \noindent\MakeUppercase{\@author@s}, \@author@n. \it\@title\rm. Brno, \@year.
  \@projecttype@SK. \@vut@SK, \@fit@SK. {\@supervisor@SK} {\ifx\undefined%
  \@supervisor@tp\else\@supervisor@tp ~\fi}{\@supervisor@n} {\@supervisor@s}%
  {\ifx\undefined\@supervisor@ta\else,~\@supervisor@ta\fi}
}{
  \noindent\MakeUppercase{\@author@s}, \@author@n. \it{\@title}\rm. Brno, \@year.
  \ifczech\@projecttype@CS\else\@projecttype@EN\fi. \ifczech\@vut@CS\else%
  \@vut@EN\fi, \ifczech\@fit@CS\else\@fit@EN\fi. {\ifczech\@supervisor@CS%
  \else\@supervisor@EN\fi} {\ifx\undefined\@supervisor@tp\else%
  \@supervisor@tp ~\fi}{\@supervisor@n} {\@supervisor@s}{\ifx\undefined%
  \@supervisor@ta\else,~\@supervisor@ta\fi}
}%
}
%===============================================================================
\newpage

}

% Extended abstract
\newcommand\makeextendedabstract{%
  \pagestyle{empty}%
  \ifenslovak
    \mktxt@b{16}{\@extendedabstract@SK}\noindent\@textendedabstract
  \else
    \mktxt@b{16}{\@extendedabstract@CS}\noindent\@textendedabstract
  \fi
  \newpage
  \pagestyle{plain}
}


%-------------------------------------------------------------------------------
% Declaration, acknowledgement \makedeclaration
%-------------------------------------------------------------------------------


\newcommand\makedeclaration{
\thispagestyle{empty}%
\begin{flushleft}\mktxt@b{18}{\@title}\end{flushleft}

\vspace{10mm}
\ifslovak
  \mktxt@b{16}{\@tdecl@SK}
\else
  \mktxt@b{16}{\ifczech\@tdecl@CS\else\@tdecl@EN\fi}
\fi

\noindent\@declaration

  \begin{flushright}
      \makebox[4cm]{\dotfill} \\
      \@author\\
      \@date
  \end{flushright}

\ifx\undefined\@acknowledgement
\else
\vspace{20mm}
\ifslovak
  \mktxt@b{16}{\@tackn@SK}
\else
  \mktxt@b{16}{\ifczech\@tackn@CS\else\@tackn@EN\fi}
\fi
\noindent\@acknowledgement
\fi

\vfill

%===============================================================================
\newpage
}


%-------------------------------------------------------------------------------
% Introductory pages \maketitle
%-------------------------------------------------------------------------------


\renewcommand\maketitle{%
\ifcover\makecover\fi%
\thispagestyle{empty}\null%
\iftwoside
  \pagestyle{empty}\null%
\fi

\setlength\parindent{17\p@}
\setlength{\parskip}{0pt}

%===============================================================================
\fontfamily{qhv}\selectfont%
\newsavebox{\@obrlogo}\newsavebox{\@rtext}\newlength{\@vyskartext}\newlength{%
  \@sirkartext}\newlength{\@vyskaobr}\newlength{\@sirkaobr}%

\iftoggle{phd_summary}{

\ifPrint
  \ifBarLogo
    \savebox{\@obrlogo}{\hspace*{-.6cm}\includegraphics[width=2.5cm,
      keepaspectratio, trim={1.2cm 1.2cm 1.2cm 1.2cm}, clip]{%
      template-fig/VUT_symbol_barevne_CMYK_CZ}} % symbol VUT
  \else
    \savebox{\@obrlogo}{\hspace*{-.6cm}\includegraphics[width=2.5cm,
      keepaspectratio, trim={1.2cm 1.2cm 1.2cm 1.2cm}, clip]{%
      template-fig/VUT_symbol_cernobile_CZ}} % symbol VUT
  \fi
\else
  \savebox{\@obrlogo}{\hspace*{-.6cm}\includegraphics[width=2.5cm,
    keepaspectratio, trim={1.2cm 1.2cm 1.2cm 1.2cm}, clip]{%
    template-fig/VUT_symbol_barevne_CMYK_CZ}} % symbol VUT
\fi

}{

\ifPrint
  \ifBarLogo
    \savebox{\@obrlogo}{\hspace*{-.6cm}\includegraphics[width=4.1cm,
      keepaspectratio, trim={1.2cm 1.2cm 1.2cm 1.2cm}, clip]{%
      template-fig/VUT_symbol_barevne_CMYK_CZ}} % symbol VUT
  \else
    \savebox{\@obrlogo}{\hspace*{-.6cm}\includegraphics[width=4.1cm,
      keepaspectratio, trim={1.2cm 1.2cm 1.2cm 1.2cm}, clip]{%
      template-fig/VUT_symbol_cernobile_CZ}} % symbol VUT
  \fi
\else
  \savebox{\@obrlogo}{\hspace*{-.6cm}\includegraphics[width=4.1cm,
    keepaspectratio, trim={1.2cm 1.2cm 1.2cm 1.2cm}, clip]{%
    template-fig/VUT_symbol_barevne_CMYK_CZ}} % symbol VUT
\fi

}

\iftoggle{phd_summary}{
  \savebox{\@rtext}{\vbox{\mkuctxt{16}{\ifslovak\@vut@SK\else\ifczech\@vut@CS%
    \else\@vut@EN\fi\fi}\mkuctxt{9}{\ifczech\@vut@EN\else\ifslovak\@vut@EN%
    \else\@vut@CS\fi\fi}}} % text VUT
}{
  \savebox{\@rtext}{\vbox{\mkuctxt{18}{\ifslovak\@vut@SK\else\ifczech\@vut@CS%
    \else\@vut@EN\fi\fi}\mkuctxt{11}{\ifczech\@vut@EN\else\ifslovak\@vut@EN%
    \else\@vut@CS\fi\fi}}} % text VUT
}

\settoheight{\@vyskaobr}{\makebox{\usebox{\@obrlogo}}} % logo height
\settowidth{\@sirkaobr}{\makebox{\usebox{\@obrlogo}}} % logo width
\settoheight{\@vyskartext}{\makebox{\usebox{\@rtext}}} % text height
\settowidth{\@sirkartext}{\makebox{\usebox{\@rtext}}} % text width
% we will subtract text height from logo height
\addtolength{\@vyskaobr}{-\@vyskartext}
% text width on row with picture and indentation
\addtolength{\@sirkartext}{-\@sirkaobr}\addtolength{\@sirkartext}{-10pt}

\usebox{\@obrlogo}

\iftoggle{phd_summary}{

  \vspace{5mm}

  \iftoggle{slovak_used}{
    \mkuctxtt{16}{\@vut@SK}
    \mkuctxtt{9}{\@vut@EN}
  }{
    \iftoggle{enslovak_used}{
      \mkuctxtt{16}{\@vut@EN}
      \mkuctxtt{9}{\@vut@SK}
    }{
      \mkuctxtt{16}{\ifczech\@vut@CS\else\@vut@EN\fi}
      \mkuctxtt{9}{\ifczech\@vut@EN\else\@vut@CS\fi}
    }
  }

  \vspace{5mm}

  \iftoggle{slovak_used}{
    \mkuctxtt{12}{\@fit@SK}
    \mkuctxtt{9}{\@fit@EN}
  }{
    \iftoggle{enslovak_used}{
      \mkuctxtt{12}{\@fit@EN}
      \mkuctxtt{9}{\@fit@SK}
    }{
      \mkuctxtt{12}{\ifczech\@fit@CS\else\@fit@EN\fi}
      \mkuctxtt{9}{\ifczech\@fit@EN\else\@fit@CS\fi}
    }
  }

  \vspace{5mm}

  \iftoggle{slovak_used}{
    \mkuctxtt{12}{\@departmentname@SK}
    \mkuctxtt{9}{\@departmentname@EN}
  }{
    \iftoggle{enslovak_used}{
      \mkuctxtt{12}{\@departmentname@EN}
      \mkuctxtt{9}{\@departmentname@SK}
    }{
      \mkuctxtt{12}{\ifczech\@departmentname@CS\else\@departmentname@EN\fi}
      \mkuctxtt{9}{\ifczech\@departmentname@EN\else\@departmentname@CS\fi}
    }
  }

}{ % !phd_summary

  \vspace{10mm}

  \iftoggle{slovak_used}{
    \mkuctxtt{18}{\@vut@SK}
    \mkuctxtt{11}{\@vut@EN}
  }{
    \iftoggle{enslovak_used}{
      \mkuctxtt{18}{\@vut@EN}
      \mkuctxtt{11}{\@vut@SK}
    }{
      \mkuctxtt{18}{\ifczech\@vut@CS\else\@vut@EN\fi}
      \mkuctxtt{11}{\ifczech\@vut@EN\else\@vut@CS\fi}
    }
  }

  \vspace{5mm}

  \iftoggle{slovak_used}{
    \mkuctxtt{14}{\@fit@SK}
    \mkuctxtt{11}{\@fit@EN}
  }{
    \iftoggle{enslovak_used}{
      \mkuctxtt{14}{\@fit@EN}
      \mkuctxtt{11}{\@fit@SK}
    }{
      \mkuctxtt{14}{\ifczech\@fit@CS\else\@fit@EN\fi}
      \mkuctxtt{11}{\ifczech\@fit@EN\else\@fit@CS\fi}
    }
  }

  \vspace{5mm}

  \iftoggle{slovak_used}{
    \mkuctxtt{14}{\@departmentname@SK}
    \mkuctxtt{11}{\@departmentname@EN}
  }{
    \iftoggle{enslovak_used}{
      \mkuctxtt{14}{\@departmentname@EN}
      \mkuctxtt{11}{\@departmentname@SK}
    }{
      \mkuctxtt{14}{\ifczech\@departmentname@CS\else\@departmentname@EN\fi}
      \mkuctxtt{11}{\ifczech\@departmentname@EN\else\@departmentname@CS\fi}
    }
  }

} % !phd_summary

\vspace{5mm}

\vfill

% For the 2-line thesis title
\newtoggle{long_title}
\togglefalse{long_title}

\ifx\@titlelen\@empty
\else
  \toggletrue{long_title}
\fi

% For the 2-line second thesis title
\newtoggle{long_sectitle}
\togglefalse{long_sectitle}

\ifx\@sectitlelen\@empty
\else
  \toggletrue{long_sectitle}
\fi

\iftoggle{phd_summary}{

  % Thesis title
  \iftoggle{long_title}{
    \mkuctxttl{16}{\@titlelen}{\ifslovak\@title@CS\else\ifczech\@title@CS\else%
      \@title@EN\fi\fi}
    \iftoggle{long_sectitle}{
      \mkuctxttls{9}{\@sectitlelen}{\ifslovak\@title@EN\else\ifczech%
        \@title@EN\else\@title@CS\fi\fi}
    }{
      \mkuctxtt{9}{\ifslovak\@title@EN\else\ifczech\@title@EN\else%
        \@title@CS\fi\fi}
    }
  }{
    \mkuctxtt{16}{\ifslovak\@title@CS\else\ifczech\@title@CS\else%
      \@title@EN\fi\fi}
    \mkuctxtt{9}{\ifslovak\@title@EN\else\ifczech\@title@EN\else%
      \@title@CS\fi\fi}
  }
  \vfill

  \mkuctxtt{10}{\ifslovak\@projecttype@SK\else\ifczech\@projecttype@CS\else%
    \@projecttype@EN\fi\fi}
  \iftoggle{slovak_used}{
  \mkuctxtt{8}{\@projecttype@EN}
  }{
  \mkuctxtt{8}{\ifenslovak\@projecttype@SK\else\ifczech\@projecttype@EN%
    \else\@projecttype@CS\fi\fi}
  }

  \vspace{3mm}

  \mktxtt{10}{\MakeUppercase{\ifslovak\@author@SK\else\ifczech\@author@CS\else%
    \@author@EN\fi\fi} \hfill \get@author}
  \iftoggle{slovak_used}{
    \mkuctxtt{8}{\@author@EN}
  }{
    \mkuctxtt{8}{\ifenslovak\@author@SK\else\ifczech\@author@EN\else%
      \@author@CS\fi\fi}
  }

  \vspace{3mm}

  \mktxtt{10}{\MakeUppercase{\ifslovak\@supervisor@SK\else\ifczech%
    \@supervisor@CS\else\@supervisor@EN\fi\fi} \hfill \get@supervisor}
  \iftoggle{slovak_used}{
    \mkuctxtt{8}{\@supervisor@EN}
  }{
    \mkuctxtt{8}{\ifenslovak\@supervisor@SK\else\ifczech\@supervisor@EN\else%
      \@supervisor@CS\fi\fi}
  }

  \vspace{8mm}

  \mktxtt{9}{BRNO \@year}

  \iftwoside
    \newgeometry{left=1.8cm, text={11cm, 16.5cm}, top=2.5cm}
  \fi

}{ % !phd_summary

  % Thesis title
  \iftoggle{long_title}{
    \mkuctxttl{18}{\@titlelen}{\ifslovak\@title@CS\else\ifczech\@title@CS\else%
      \@title@EN\fi\fi}
    \iftoggle{long_sectitle}{
      \mkuctxttls{10}{\@sectitlelen}{\ifslovak\@title@EN\else\ifczech%
        \@title@EN\else\@title@CS\fi\fi}
    }{
      \mkuctxtt{10}{\ifslovak\@title@EN\else\ifczech\@title@EN\else%
        \@title@CS\fi\fi}
    }
  }{
    \mkuctxtt{18}{\ifslovak\@title@CS\else\ifczech\@title@CS\else%
      \@title@EN\fi\fi}
    \mkuctxtt{10}{\ifslovak\@title@EN\else\ifczech\@title@EN\else%
      \@title@CS\fi\fi}
  }
  \vfill

  \mkuctxtt{14}{\ifslovak\@projecttype@SK\else\ifczech\@projecttype@CS\else%
    \@projecttype@EN\fi\fi}
  \iftoggle{slovak_used}{
    \mkuctxtt{10}{\@projecttype@EN}
  }{
    \mkuctxtt{10}{\ifenslovak\@projecttype@SK\else\ifczech\@projecttype@EN%
      \else\@projecttype@CS\fi\fi}
  }

  \vspace{5mm}

  \mktxtt{14}{\MakeUppercase{\ifslovak\@author@SK\else\ifczech\@author@CS\else%
    \@author@EN\fi\fi} \hfill \get@author}
  \iftoggle{slovak_used}{
    \mkuctxtt{10}{\@author@EN}
  }{
    \mkuctxtt{10}{\ifenslovak\@author@SK\else\ifczech\@author@EN\else%
      \@author@CS\fi\fi}
  }

  \vspace{5mm}

  \mktxtt{14}{\MakeUppercase{\ifslovak\@supervisor@SK\else\ifczech%
    \@supervisor@CS\else\@supervisor@EN\fi\fi} \hfill \get@supervisor}
  \iftoggle{slovak_used}{
    \mkuctxtt{10}{\@supervisor@EN}
  }{
    \mkuctxtt{10}{\ifenslovak\@supervisor@SK\else\ifczech\@supervisor@EN\else%
      \@supervisor@CS\fi\fi}
  }

  \vspace{10mm}

  \mktxtt{11}{BRNO \@year}

  \iftwoside
    \newgeometry{left=3.46cm, text={15.2cm, 23cm}, top=2.96cm}
  \fi

} % !phd_summary

% assignment
\iftoggle{zadaniTwop}{
  \cleardoublepage
  \includepdf[pages=-, offset=-0.1cm -0.2cm]{assignment.pdf}
}{
  \ifzadani
    \includepdf[pages=-, offset=.6cm -1.7cm]{assignment.pdf}
  \fi
}

\ifODSAZ
  \setlength{\parindent}{0pt}
  \setlength{\parskip}{.5\bigskipamount}
\else
  \setlength\parindent{17\p@}
  \setlength{\parskip}{0pt}
\fi

\iftwoside
  \cleardoublepage
  \pagestyle{plain}
\else
  \newpage
\fi
\fontfamily{\familydefault}\selectfont%

%===============================================================================
\makeabstract
\ifx\@textendedabstract\@empty
\else
  \makeextendedabstract
\fi
\makedeclaration
\clearpage
\setcounter{tocdepth}{1}
\setcounter{page}{1}
}


%-------------------------------------------------------------------------------


\def\uv#1{\iflanguage{british}{``#1''}{\quotedblbase#1\textquotedblleft}}

% Now, switch on what is appropriate for czech:

% czech quotation marks
% \bq - begin quotation, \eq - end quotation
\def\bq{\mbox{\kern.1ex\protect\raisebox{-1.3ex}[0pt][0pt]{''}\kern-.1ex}}
\def\eq{\mbox{\kern-.1ex``\kern.1ex}}

% Definition of czech \uv.
\newcommand{\csuv}[1]{\bq#1\eq}


% Alignment in description list
% http://tex.stackexchange.com/questions/7008/change-hanging-indent-in-%
% description-list
\makeatletter
\newcommand{\DESCRIPTION@original@item}{}
\let\DESCRIPTION@original@item\item
\newcommand*{\DESCRIPTION@envir}{DESCRIPTION}
\newlength{\DESCRIPTION@totalleftmargin}
\newlength{\DESCRIPTION@linewidth}
\newcommand{\DESCRIPTION@makelabel}[1]{\llap{#1}}%
\newcommand{\DESCRIPTION@item}[1][]{%
  \setlength{\@totalleftmargin}%
       {\DESCRIPTION@totalleftmargin+\widthof{\textbf{#1 }}-\leftmargin}%
  \setlength{\linewidth}
       {\DESCRIPTION@linewidth-\widthof{\textbf{#1 }}+\leftmargin}%
  \par\parshape \@ne \@totalleftmargin \linewidth
  \DESCRIPTION@original@item[\textbf{#1}]%
}
\newenvironment{DESCRIPTION}
  {\list{}{\setlength{\labelwidth}{0cm}%
           \let\makelabel\DESCRIPTION@makelabel}%
   \setlength{\DESCRIPTION@totalleftmargin}{\@totalleftmargin}%
   \setlength{\DESCRIPTION@linewidth}{\linewidth}%
   \renewcommand{\item}{\ifx\@currenvir\DESCRIPTION@envir
                           \expandafter\DESCRIPTION@item
                        \else
                           \expandafter\DESCRIPTION@original@item
                        \fi}}
  {\endlist}
\makeatother


% Packages
\usepackage[czech, slovak, british]{babel}
\usepackage[]{opensans}
\usepackage{calc}
\usepackage{longtable, booktabs}
\usepackage{xcolor, colortbl}
\usepackage{multirow}
\usepackage{tabularx}
\usepackage{graphicx}
\DeclareUrlCommand\url{\def\UrlLeft{<}\def\UrlRight{>} \urlstyle{tt}}
\def\UrlBreaks{\do\/\do-}

\usepackage{blindtext}
\usepackage{listings}
\usepackage[toc, page, header]{appendix}
\RequirePackage{titletoc}
\ifczech
  \usepackage{ae}
\fi

\RequirePackage{float}
\floatstyle{plaintop}
\restylefloat{table}


%-------------------------------------------------------------------------------
% Fix for CZECH and SLOVAK -- needs up to date packages!
% http://tex.stackexchange.com/questions/111999/slovak-and-czech-babel-gives-%
% problems-with-cmidrule-and-cline
%-------------------------------------------------------------------------------
\usepackage{regexpatch}
%\ifczechslovak
  \makeatletter
  % Change the `-` delimiter to an active character
    \begingroup
      \toks0=\expandafter{\@cline{#1}-{#2}\@nil}
      \@ifpackageloaded{booktabs}{%
        \toks2=\expandafter{\@@@cmidrule[{#1}-{#2}]{#3}{#4}}%
      }{}
      \catcode`-=\active
      \edef\x{\gdef\unexpanded{\@cline#1-#2\@nil}{\the\toks0}}\x
      \@ifpackageloaded{booktabs}{%
        \edef\x{\gdef\unexpanded{\@@@cmidrule[#1-#2]#3#4}{\the\toks2}}\x
      }{}
    \endgroup
  \makeatother
%\fi


\ifczechslovak
  \renewcommand{\lstlistingname}{Výpis} % Výpis instead of Listing
\fi

% BEGIN Jan Pluskal (ipluskal), Dominik Harmim (xharmi00) listings
\definecolor{bluekeywords}{rgb}{.13, .13, 1}
\definecolor{greencomments}{rgb}{0, .5, 0}
\definecolor{redstrings}{rgb}{.9, 0, 0}
\definecolor{gray}{rgb}{.4, .4, .4}

\lstset{
  basicstyle=\ttfamily,
  backgroundcolor=\color{yellow!10},
  columns=fullflexible,
  showstringspaces=false,
  commentstyle=\color{greencomments},
  keywordstyle=\color{bluekeywords},
  stringstyle=\color{redstrings},
  captionpos=b,
  tabsize=4,
  keepspaces=true,
  showspaces=false,
  showtabs=false,
  frame=trBL,
  escapeinside={<@}{@>},
  breaklines=true,
  breakatwhitespace=true,
  numbers=left,
  belowskip=-.5\baselineskip,
  aboveskip=1\baselineskip
}
\lstdefinestyle{plain}{
  numbers=none,
  morecomment=[l]{\# }
}
\lstdefinestyle{bash}{
  language=bash,
  numbers=none,
  morekeywords={sudo, make, infer}
}
\lstdefinestyle{c}{language=c}
\lstdefinestyle{c++}{
  language=c++,
  morekeywords={this}
}
\lstdefinestyle{ocaml}{
  language=caml,
  morekeywords={
    Some, None, option, bool, int, when, module, struct, list,
    string
  }
}
\lstdefinestyle{java}{language=java}
% END Jan Pluskal (ipluskal), Dominik Harmim (xharmi00) listings


% TODO helpers.
\newcommand{\todo}[1]{\iftodo\textcolor{red}{\textbf{[[#1]]}}\fi}
\newcommand{\phony}[1]{\textcolor{gray}{#1}}
\newcommand{\blind}[1]{\iftodo\textcolor{gray}{\Blindtext[#1]}\fi}

% Useful macros.
\newcommand{\kw}[1]{\textcolor{bluekeywords}{#1}}
\newcommand{\bb}[1]{\boldsymbol#1}
\newcommand{\bA}[1]{\textcolor{bluekeywords}{\boldsymbol#1}}
\newcommand{\bB}[1]{\textcolor{orange}{\boldsymbol#1}}
\newcommand{\bC}[1]{\textcolor{red}{\boldsymbol#1}}
\newcommand{\bD}[1]{\textcolor{green}{\boldsymbol#1}}
\newcommand{\red}[1]{\textcolor{red}{#1}}

% \leftsquigarrow
\makeatletter
\newcommand{\reflect@squig}[2]{\protect\reflectbox{$\m@th#1\rightsquigarrow$}}
\providecommand{\leftsquigarrow}{\mathrel{\mathpalette\reflect@squig\relax}}
\makeatother

% Left aligned column with a fixed width
\newcolumntype{L}[1]{>{\RaggedRight\hspace{0pt}}p{#1}}

% \hyptt as tt with hyphenation enabled
\DeclareTextFontCommand{\hyptt}{\ttfamily\hyphenchar\font=45\relax}

% visible spaces
\newcommand\Vtextvisiblespace[1][.3em]{\textcolor{lightgray}{%
  \mbox{\kern.06em\vrule height.5ex}%
  \vbox{\hrule width#1}%
  \hbox{\vrule height.5ex}}}
\newcommand{\visiblespace}[0]{\Vtextvisiblespace[.5em]}
\newcommand{\visibletab}[0]{\Vtextvisiblespace[1.5em]}
\newcommand{\visiblenl}[0]{\textcolor{lightgray}{\P}}


\endinput
