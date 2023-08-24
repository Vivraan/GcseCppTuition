# GcseCppTuition

Consolidated VS solution for all kids.

## Lesson plan with corresponding GCSE 9-1 (2021) J277/02 Section

1. Revision of C++ types, loops, branches, input and output, and functions, and basic input validation. (2.2.1, 2.2.3, 2.3.1) `COMPLETE (James); ONGOING (Josiah)` 
1. Arrays and array-like containers, strings as special arrays. (2.2.3) `COMPLETE (James)`
1. String manipulation; maintainability. (2.2.3, 2.3.1) `COMPLETE (James)`
1. Structs as record data types. (2.2.3) `COMPLETE (James)`
1. Pointers and File I/O. (2.2.3) `ONGOING (James)`
1. Random number generation, C-style. (2.2.3)
1. Visual Studio and the debugger. (2.5.2)
1. SQL basics. (2.2.3) / TBD
1. Searching algorithms. (2.1.3) / TBD
1. Sorting algorithms. (2.1.3) / TBD
1. Introduction to object-oriented programming. (N/A) / TBD

## Keywords used inside the code

### `HOMEWORK <0-5>` exercises

An assignment which the student must improvise and complete on their own. There shouldn't be more than 5 homework assignments per lesson. The student is expected to complete this assignment before the next lesson.

### `REVISE` exercises

A section of code which the student revises to improve their understanding of the code. The student is encouraged to make changes to it and observe the effects.

`REVISE` exercises should ideally be completed immediately after the lesson, but may be completed at any time before the next lesson.

### `QUESTION`s

A question which the student must answer. The student is expected to answer in their own words. 

`QUESTION`s usually start at higher stars than `REVISE` exercises since the context may not have been introduced in the class, and the student is encouraged to research the answer on their own time. 

`QUESTION`s from one lesson should be answered in the next.

### `CONSIDER` activities

An optional activity which the student is encouraged to think about. The student is encouraged to complete this activity on their own time.

`CONSIDER` activities pertain to code which is likely to appear in the syllabus but a few steps ahead of the lesson material.

### `EXTRA CREDIT` activities

An optional activity meant to challenge the student. The student is encouraged to complete this activity on their own time, preferably after dealing with the `CONSIDER` activities.

`EXTRA CREDIT` activities may be unrelated to the syllabus, but are expected to be answered after a certain amount of experience in the related topic is gained, or if the student is keen on the topic.

*The regular expression for matching these keywords in text can be debugged [here](https://www.debuggex.com/r/lBZe033_m_1584xV)*.

## Quality of life stuff (optional)
1. On Visual Studio, install the `SelectionTodoHighlighter.vsix` extension and add the following to its settings under *Environment > Selection and TODO Highlighter* to highlight all the keywords used in the code comments.:

	1. *Features > Highlight selection* = `False`
	1. *Search > Include strings* = `False`
	1. *Search > Search whole words only* = `False`
	1. *Selection > Select letter or digit only* = `False`
	1. *TODO > TODO words* = `TODO|HACK|EXTRA CREDIT|HOMEWORK ?[0-9]*|REVISE|QUESTION|CONSIDER| ?-? ?[0-9] STARS?:?`

1. Install the `Editor Guidelines.vsix` extension. Everything is already set up in the project to use it.

1. Install ReSharper for Visual Studio and use the provided `*.sln.DotSettings` file.
