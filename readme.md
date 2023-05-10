<div id="top"></div>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->

<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/kennethtegrado/competitive-programming-practice">
    <img src="images/logo.png" alt="No logo yet" width="80" height="80">
  </a>

<h3 align="center">Competitive Programming Practice</h3>

  <p align="center">
Let&apos;s embark on a journey to solve competitive programming problems!
<br />
<a href="https://github.com/kennethtegrado/competitive-programming-practice"><strong>Explore the docs »</strong></a>
<br />
<br />
·
<a href="https://github.com/kennethtegrado/competitive-programming-practice/issues">Report Bug</a>
·
<a href="https://github.com/kennethtegrado/competitive-programming-practice/issues">Request Feature</a>

  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#introduction">Introduction</a>
    </li>
    <li>
      <a href="#directory-structure">Directory Structure</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
         <li><a href="#prerequisites">Prerequisites</a></li>
           <li><a href="#prerequisites">Installation</a></li>
      </ul>
    </li>
    <li><a href="#general-guidelines">General Guidelines</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#resources">Resources</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

## Introduction

Welcome to my competitive programming practice repository! This repository contains my solutions to a variety of data structures, algorithms, and problems from popular online judges such as Codeforces, AtCoder, LeetCode, Kattis, etc. This repository is intended to serve as a resource for other competitive programmers who want to learn from my solutions or use them as a reference for their own coding practice.<br />

Each problem solution includes a description of the problem, my approach to solving it, and the source code for my solution. The solutions are organized by difficulty level, data structure, algorithm, and online judge for easy navigation.<br />

I hope that you find this repository helpful in your own journey as a competitive programmer. If you have any questions or suggestions for improvement, please feel free to reach out to me!<br />

<p align="right">(<a href="#top">back to top</a>)</p>

## Directory Structure

```ascii
.
├── README.md
├── algorithms
│   ├── trivial
│   ├── ad_hoc
│   ├── search
│   ├── greedy
│   ├── divide_and_conquer
│   ├── dynamic_programming
│   ├── graph
│   ├── mathematics
│   ├── strings
│   ├── geometry
│   └── readme.md
├── data_structures
│   ├── [data_structure_name]
│   │   ├── [implementation].cpp
│   │   ├── readme.md
│   ├── ...
│   └── readme.md
├── online_judges
│   ├── leetcode
│   ├── atcoder
│   ├── codeforces
│   ├── kattis
│   └── readme.md
└── online_judges
│   ├── leetcode
│   ├── atcoder
│   ├── codeforces
│   ├── kattis
│   └── readme.md
└── contests
    ├── codeforces
    │   ├── [contest_code]
    │   │   ├── [implementation].cpp
    │   │   └── readme.md
    │   └── ...
    ├── atcoder
    │   ├── [contest_code]
    │   │   ├── [implementation].cpp
    │   │   └── readme.md
    │   └── ...
    └── ...
```

-   readme.md: This file should contain an introduction to the repository and any relevant information about how to use it.
-   algorithms: This directory contains subdirectories for various algorithm categories such as `trivial`, `ad_hoc`, `search`, `greedy`, `divide_and_conquer`, `dynamic_programming`, `graph`, `mathematics`, `strings`, `geometry`, etc. Each subdirectory contains solutions to problems that belong to that particular algorithm category. The `readme.md` file for this subdirectory categorizes all algorithms inside this folder to `easy`, `medium`, `hard`, and `advance` so that you can explore these problems progressively.
-   data_structures: This directory contains subdirectories for different data structures. Each subdirectory contains one or more implementations of that data structure along with a readme.md file that describes the data structure and provides information about the implementations.
-   online_judges: This directory contains subdirectories for popular online judges such as `leetcode`, `atcoder`, `codeforces`, `kattis`, etc. Each subdirectory contains solutions to problems from the corresponding online judge. The `readme.md` file for this subdirectory categorizes all algorithms inside this folder to `easy`, `medium`, `hard`, and `advance` so that you can explore these problems progressively.
-   contests: This directory contains subdirectories for different coding contests from `codeforces`, `atcoder`, etc. Each subdirectory contains subdirectories for each individual contest, and each contest subdirectory contains solutions to the problems from that contest. The solutions are organized by the problem's implementation and contain a `readme.md` file that describes the problem and solution.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- GETTING STARTED -->

## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites

To test out solutions

-   g++ compiler (I am using `11.3.0`)

    ```sh
    g++ --version
    ```

### Installation

1. Clone the repo
    ```sh
    git clone https://github.com/kennethtegrado/competitive-programming-practice.git
    ```
2. Have fun learning!

<p align="right">(<a href="#top">back to top</a>)</p>

## General Guidelines

-   To kickstart your journey in competitive programming, you may use `template.cpp` as a guide for a general program structure for solving a problem in competitive programming. All codes in this repository assumes that you are using the provided template.
-   To test inputs and outputs faster of your program. You may use this command when running your executable file. The `test.in` should contain the inputs that you are trying to test. The `test.out` file is automatically generated when you run this command in your terminal.

    ```bash
    ./a.out < test.in > test.out
    ```

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTRIBUTING -->

## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Branch in the **Forked repository** (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>

## Resources

-   [Competitive Programming 4](https://cpbook.net/)
-   [Discrete Mathematics with its Applications](https://www.amazon.com/Discrete-Mathematics-Applications-Susanna-Epp/dp/0495391328)
-   [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
-   [C++ Reference](https://en.cppreference.com/w/)

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- LICENSE -->

## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->

## Contact

Your Name - [@renz.ts](https://www.instagram.com/renz.ts/) - kentegrado@gmail.com

Project Link: [https://github.com/kennethtegrado/competitive-programming-practice](https://github.com/kennethtegrado/competitive-programming-practice)

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- ACKNOWLEDGMENTS -->

## Acknowledgments

I would like to thank these people for being my motivation and contributor for my journey in becoming a very competitive programmer!

-   Isaac Villamin
-   Vivekjeet Chambal
-   Perico Dionisio

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/kennethtegrado/competitive-programming-practice.svg?style=for-the-badge
[contributors-url]: https://github.com/kennethtegrado/competitive-programming-practice/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/kennethtegrado/competitive-programming-practice.svg?style=for-the-badge
[forks-url]: https://github.com/kennethtegrado/competitive-programming-practice/network/members
[stars-shield]: https://img.shields.io/github/stars/kennethtegrado/competitive-programming-practice.svg?style=for-the-badge
[stars-url]: https://github.com/kennethtegrado/competitive-programming-practice/stargazers
[issues-shield]: https://img.shields.io/github/issues/kennethtegrado/competitive-programming-practice.svg?style=for-the-badge
[issues-url]: https://github.com/kennethtegrado/competitive-programming-practice/issues
[license-shield]: https://img.shields.io/github/license/kennethtegrado/competitive-programming-practice.svg?style=for-the-badge
[license-url]: https://github.com/kennethtegrado/competitive-programming-practice/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/linkedin_username
[product-screenshot]: images/screenshot.png
