# Linked list

My take on a simple linked list, written while reading [this](https://solarianprogrammer.com/2019/02/22/cpp-17-implementing-singly-linked-list-smart-pointers/) article. Mostly a straight copy, with the addition that it's templatized and I took the opportunity to learn a bit about unit testing with Catch2.

## Compiling

You need to Catch2 installed on your system, see instructions [here](https://github.com/catchorg/Catch2/blob/master/docs/cmake-integration.md#installing-catch2-from-git-repository).

### Debug build

````bash
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
````

### Debug build with tests

````bash
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug cmake -DBUILD_TEST:bool=on ..
make
````

### Release build

````bash
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make
````

## TODO

TBD

## Contributing

Contributions are always welcome!

When contributing to this repository, please first discuss the change you wish to make via the issue tracker, email, or any other method with the owner of this repository before making a change.

Please note that we have a code of conduct, you are required to follow it in all your interactions with the project.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/frklan/linked-list/tags).

## Authors

* **Fredrik Andersson** - *Initial work* - [frklan](https://github.com/frklan)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
