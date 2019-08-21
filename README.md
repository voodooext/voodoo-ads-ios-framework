# voodoo-ads-ios
This repository hosts releases of the Voodoo Ads iOS SDK with the relative podspecs. To release a new version of the SDK to the internal Voodoo pod repo:

- Override the existing `VoodooAds.framework` with the new version (the new version is x.y.z).
- run the following command to update the `VoodooAds.podspec` file and upload it to the VoodooSauce pod repo

```sh
$ sh podrelease.sh x.y.z  #where x.y.z is your new SDK version to be release 
```

If you do not have registered the VoodooSauce pod repo to your local repo, use the following command

```sh
$ pod repo add VoodooSauce git@github.com:VoodooTeam/VoodooSauceCocoapods-Specs.git
```

The first command line will execute the following changes:

- Update the `VoodooAds.podspec` by inserting the new version in the spec file
- Commit your changes and tag it under the new version tag name (x.y.z)
- Publish the new podspec to the Voodoo Sauce private pod repo.