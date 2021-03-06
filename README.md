# Newspaper Solution Pack [![Build Status](https://travis-ci.org/Islandora/islandora_solution_pack_newspaper.png?branch=7.x)](https://travis-ci.org/Islandora/islandora_solution_pack_newspaper)

## Introduction

This module packages functions for ingesting and displaying newspaper content.

## Requirements

This module requires the following modules/libraries:

* [Islandora](https://github.com/islandora/islandora)
* [Tuque](https://github.com/islandora/tuque)
* [Islandora Paged Content](https://github.com/islandora_paged_content)
* [Islandora OCR](https://github.com/Islandora/islandora_ocr)
* [Islandora Large Image Solution Pack](https://github.com/Islandora/islandora_solution_pack_large_image)
* [Islandora Openseadragon](https://github.com/islandora_openseadragon) (optional)

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Configuration

Select configuration options for page derivatives, Parent Solr Field, and select a viewer for the issue view and page view in  Administration » Islandora » Solution pack configuration » Newspapers (admin/islandora/solution_pack_config/newspaper).


![Configuration](https://camo.githubusercontent.com/00b3d34d5927b733689ce0d1598a79c832082937/687474703a2f2f692e696d6775722e636f6d2f56764b6a6479462e706e67)

## Documentation
:warning: <br/>Deleting a newspaper object directly (Manage > Properties >  Delete Newspaper) will delete all its child Issue objects, and their associated Page objects. Highlighted in red in this diagram shows all that will be deleted if the newspaper Locusta Newspaper is deleted. 
+![newspaper_diagram](https://user-images.githubusercontent.com/2738244/30652457-6ea939e0-9df6-11e7-851b-d298ca1e631b.png)

However, deleting a newspaper via its parent collection (by deleting the collection or by using "Delete members of this collection") will cause that newspaper's Issue objects to be orphaned.

Further documentation for this module is available at [our wiki](https://wiki.duraspace.org/display/ISLANDORA/Newspaper+Solution+Pack).

## Troubleshooting/Issues

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## Maintainers/Sponsors

Current maintainers:

* [Jared Whiklo](https://github.com/whikloj)

## Development

If you would like to contribute to this module, please check out [CONTRIBUTING.md](CONTRIBUTING.md). In addition, we have helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the [Islandora.ca](http://islandora.ca) site.

## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)
