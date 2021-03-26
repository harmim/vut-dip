# Master's Thesis
### Advanced Static Analysis of Atomicity in Concurrent Programs through Facebook Infer

---

# Diplomová práce
### Pokročilá statická analýza atomičnosti v paralelních programech v prostředí Facebook Infer

---

##### Author: Harmim Dominik, Bc. <xharmi00@stud.fit.vutbr.cz>

##### Supervisor: [Vojnar Tomáš, prof. Ing. Ph.D.](https://www.fit.vutbr.cz/~vojnar) (UITS FIT VUT) <vojnar@fit.vutbr.cz>

##### Reviewer: [Rogalewicz Adam, doc. Mgr., Ph.D.](https://www.fit.vutbr.cz/~rogalew) (UITS FIT VUT) <rogalew@fit.vut.cz>

##### Specification:
1. Study limitations of the atomicity analyser Atomer developed in your bachelor
   thesis as well as the latest developments concerning the Facebook Infer
   framework.
2. Propose ways of significantly improving precision and/or scalability of the
   analysis even if for the price of the user providing more input and/or
   combining it with dynamic analysis.
3. Implement a new version of Atomer including the proposed improvements and
   supporting analysis of programs written in more programming languages than
   just C supported by the first version of Atomer.
4. Evaluate the new version of Atomer on suitable benchmarks, including at least
   real-life code in which some atomicity problems were previously detected.
5. Describe and discuss the achieved results and their further possible
   improvements.

##### Category: Software analysis and testing

##### Implementation language: [OCaml](
s://ocaml.org)

##### Free software: [Facebook Infer](https://fbinfer.com)

##### Literature:
1. Rival, X., Yi, K.: Introduction to Static Analysis: An Abstract
   Interpretation Perspective. MIT Press, 2020.
2. Blackshear, S., Gorogiannis, N., O'Hearn, P. W., Sergey, I.: RacerD:
   Compositional Static Race Detection. In: Proc. of OOPSLA'18,
   PACMPL 2(OOPSLA):144:1-144:28, 2018.
3. Gorogiannis, N., O'Hearn, P.W., Sergey, I.: A True Positives Theorem for a
   Static Race Detector. In: Proc. of POPL'19, PACMPL 3(POPL):57:1-57:29, 2019.
4. Dias, R.J., Ferreira, C., Fiedor, J., Lourenço, J.M., Smrčka, A., Sousa,
   D.G., Vojnar, T.: Verifying Concurrent Programs Using Contracts, In: Proc.
   of ICST'17, IEEE, 2017.
5. Harmim, D.: Static Analysis Using Facebook Infer to Find Atomicity
   Violations. Bachelor thesis, Brno University of Technology, 2019.
6. Marcin, V.: Static Analysis Using Facebook Infer Focused on Deadlock
   Detection. Bachelor thesis, Brno University of Technology, 2019.

## Implementation
The implementation is in the repository
[harmim/infer](https://github.com/harmim/infer). It is a fork of the repository
[facebook/infer](https://github.com/facebook/infer). It is implemented under
the branch
[atomicity-sets](https://github.com/harmim/infer/tree/atomicity-sets), see the
[diff](https://github.com/facebook/infer/compare/master...harmim:atomicity-sets).

## Wiki
More information about the tool, including examples, installation and usage
instructions are available at the
[Wiki](https://github.com/harmim/infer/wiki/Atomer:-Atomicity-Violations-Analyser).

## Useful links:
- [Facebook Infer](https://fbinfer.com)
- [Facebook Infer repository](https://github.com/facebook/infer)
- [OCaml](https://ocaml.org)
- [Patrick Cousot - Abstract Interpretation](https://www.di.ens.fr/~cousot/AI)
- [Patrick Cousot - Abstract Interpretation in a Nutshell](https://www.di.ens.fr/~cousot/AI/IntroAbsInt.html)
- [Facebook Infer lab](https://github.com/facebook/infer/tree/master/infer/src/labs)
- [Facebook Infer talk](https://atscaleconference.com/videos/getting-the-most-out-of-static-analyzers)
- [Facebook Infer INSTALL.md](https://github.com/facebook/infer/blob/master/INSTALL.md)
- [Facebook Infer CONTRIBUTING.md](https://github.com/facebook/infer/blob/master/CONTRIBUTING.md)
- [Open-sourcing RacerD: Fast static race detection at scale](https://code.fb.com/android/open-sourcing-racerd-fast-static-race-detection-at-scale)
- [ThreadSafe: Static Analysis for Java Concurrency](https://bentnib.org/threadsafe.html)
- [ThreadSafe: Static Analysis for Java Concurrency - benchmark](https://researcher.watson.ibm.com/researcher/view_person_subpage.php?id=5722)
- [Gluon](https://github.com/trxsys/gluon)
- [Gluon - validation examples](https://github.com/trxsys/gluon/tree/master/test/validation)
- [VeriFIT Static Analysis Plugins](http://www.fit.vutbr.cz/research/groups/verifit/tools/sa-plugins)
- [ANaConDA Framework](http://www.fit.vutbr.cz/research/groups/verifit/tools/anaconda)
- [Apache Cassandra repository](https://github.com/apache/cassandra)
- [Apache Cassandra - reported bugs](https://issues.apache.org/jira/browse/CASSANDRA-7757)
- [Apache Tomcat repository](https://github.com/apache/tomcat)
- [Apache Tomcat - reported bugs](https://bz.apache.org/bugzilla/show_bug.cgi?id=56784)
- [Inferbo: Infer-based buffer overrun analyzer](https://research.fb.com/inferbo-infer-based-buffer-overrun-analyzer)
