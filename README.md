# Q Screensaver
Drupal site code base for providing a back end administration system where image files in landscape and portrait orientations can be uploaded and provided via an XML API output, which is consumed by supplemental Android and Windows apps, which display the images as screensavers on their devices.

## API

By navigating to /xml , XML output is provided ( via the [qscreensaver_api.module](https://github.com/ninthlink/qscreensaver/tree/master/sites/all/modules/custom/qscreensaver_api) ) in the format as follows :

    <rss xmlns:atom="http://www.w3.org/2005/Atom" version="2.0" xml:base="http://screensaver.deviceshowcase.com/">
      <channel>
        <title>Qualcomm Screensaver</title>
        <link>{base url here}</link>
        <atom:link rel="self" href="{base url here}/xml"/>
        <pubDate>Wed, 14 Nov 2013 16:43:58 -0600</pubDate>
        <lastBuildDate>Wed, 15 Nov 2013 12:24:20 -0500</lastBuildDate>
        <folders count="10">
          <folder name="landscape_folder1name" count="21" enabled="true">
            <item>
              <source>
                {base url here}/sites/default/files/styles/s/public/images/01_0.jpg
              </source>
              <filesize>155760</filesize>
            </item>
            ...
          </folder>
          <folder name="portrait_folder1name" count="21" enabled="true">
            <item>
              <source>
                {base url here}/sites/default/files/styles/s/public/images/p/01_0.jpg
              </source>
              <filesize>120987</filesize>
            </item>
          ...
          </folder>
        </folders>
      </channel>
    </rss>
    
Where the following information is provided :

* `folders` contains an attribute `count` which specifies the number of `folder` 's provided
* each `folder` therein..
  1. has attributes..
    1. `name` = either `landscape_` or `portrait_` + the actual `{foldername}`, where the `landscape` or `portrait` designation specifies whether the images are for using when a device is in landscape mode or portrait mode.
    2. `count` = the number of items (images) in that particular "folder"
    3. `enabled` = either `true` or `false` as to whether that folder should be active by default on initial screensaver installation & download sync, or not.
  2. contains a number of `item` 's inside with two children elements (is that what you call them?)
    1. `source` = the full URL of the image asset to download and show
    2. `filesize` = the file size in bytes of that particular asset. This could be useful for calculating total filesize of all items, to show a donload / loading Progress.

Note : it is safe to assume that for every `{foldername}` , there will be both a `<folder name="landscape_foldername"...` and a `<folder name="portrait_foldername"...`    

## Apps

The latest versions of the Android and Windows apps can be found at http://apps.nlkdev.net/s/

Installation instructions and previous versions (which may not work any more with newer API updates) are provided there for reference as well.
