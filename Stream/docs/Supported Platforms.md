# Stream Platforms

The Stream  code is supported on the following platforms. By "platforms",
we mean the union of operating system, architecture (e.g. little-endian vs.
big-endian), compiler, and standard library.

## Language Requirements

Stream  requires a code base that supports C++11 and our code is
C++11-compliant. C code is required to be compliant to C11.

We guarantee that our code will compile under the following compilation flags:

Windows 10:

* MSVC 2015+,  `-std=c++11`

(TL;DR; All code at this time must be built under C++11. We will update this
list if circumstances change.)

## Supported Platforms

The document below lists each platform, broken down by Operating System,
Architecture, Specific Compiler, and Standard Library implementation.

### Windows

**Supported**

<table width="80%">
  <col width="360">
  <col width="120">
  <tbody>
    <tr>
      <th>Operating System</th>
      <th>Endianness/Word Size</th>
      <th>Processor Architectures</th>
      <th>Compilers*</th>
    </tr>
    <tr>
      <td>Windows</td>
      <td>little-endian, 64-bit</td>
      <td>x64, PPC</td>
      <td>MSVC 2015+</td>      
    </tr>
  </tbody>
</table>

\* We test on MSVC 2015 64 bit, though MSVC versions (which support C++11) prior to that
release should also work.