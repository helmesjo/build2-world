# libyello - A C++ library

The `libyello` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libyello` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libyello ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libyello%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libyello.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
