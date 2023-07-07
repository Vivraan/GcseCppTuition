# GcseCppTuition

Consolidated VS solution for all kids.

## Lesson plan with corresponding GCSE 9-1 (2021) J277/02 Section and scheduled and completed lesson dates

1. Revision of C++ types, loops, branches, input and output, and functions, and basic input validation. (2.2.1, 2.2.3, 2.3.1) / 24 June 2023 `COMPLETE (James); ONGOING (Joshua)` 
1. Arrays. (2.2.3) / 2 July 2023 `ONGOING (James)` 
1. Strings as special arrays, string manipulation, maintainability. (2.2.3, 2.3.1) / 8 July 2023
1. Structs as record data types. (2.2.3) / 15 July 2023
1. Pointers and File I/O. (2.2.3) / 22 July 2023
1. Random number generation, C-style. (2.2.3) / 29 July 2023
1. Random number generation, C++-style. (2.2.3) / 5 August 2023
1. Visual Studio and the debugger. (2.5.2) / 12 August 2023
1. SQL basics. (2.2.3) / TBD
1. Searching algorithms. (2.1.3) / TBD
1. Sorting algorithms. (2.1.3) / TBD
1. Introduction to object-oriented programming. (N/A) / TBD

## Keywords used inside the code

### `HOMEWORK <0-5>` exercises: 1-5 stars

An assignment which the student must improvise and complete on their own. There shouldn't be more than 5 homework assignments per lesson. The student is expected to complete this assignment before the next lesson.

### `REVISE` exercises: 1-2 stars

A section of code which the student revises to improve their understanding of the code. The student is encouraged to make changes to it and observe the effects.

`REVISE` exercises should ideally be completed immediately after the lesson, but may be completed at any time before the next lesson.

### `QUESTION`s: 2-5 stars

A question which the student must answer. The student is expected to answer in their own words. 

`QUESTION`s usually start at higher stars than `REVISE` exercises since the context may not have been introduced in the class, and the student is encouraged to research the answer on their own time. 

`QUESTION`s from one lesson should be answered in the next.

### `CONSIDER` activities: 3-5 stars

An optional activity which the student is encouraged to think about. The student is encouraged to complete this activity on their own time.

`CONSIDER` activities pertain to code which is likely to appear in the syllabus but a few steps ahead of the lesson material.

### `EXTRA CREDIT` activities: 7 stars

An optional activity meant to challenge the student. The student is encouraged to complete this activity on their own time, preferably after dealing with the `CONSIDER` activities.

`EXTRA CREDIT` activities may be unrelated to the syllabus, but are expected to be answered after a certain amount of experience in the related topic is gained, or if the student is keen on the topic.

*The regular expression for matching these keywords in text can be debugged [here](https://www.debuggex.com/r/lBZe033_m_1584xV)*.

## Quality of life stuff (optional)
1. On Visual Studio, install the `SelectionTodoHighlighter.vsix` extension and add the following to its settings under *Environment > Selection and TODO Highlighter*:

	1. *Features > Highlight selection* = `False`
	1. *Search > Include strings* = `False`
	1. *Search > Search whole words only* = `False`
	1. *Selection > Select letter or digit only* = `False`
	1. *TODO > TODO words* = `TODO|HACK|EXTRA CREDIT|HOMEWORK ?[0-9]*|REVISE|QUESTION|CONSIDER| ?-? ?[0-9] STARS?:?`

1. Install ReSharper for Visual Studio and use the provided `*.sln.DotSettings` file.

This will highlight all the keywords used in the code comments.
