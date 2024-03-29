//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebHTMLRepresentationPrivate_h
#define WebHTMLRepresentationPrivate_h
@import Foundation;

#include "WebDataSource.h"
#include "WebPluginManualLoader-Protocol.h"

@class WAKView;

@interface WebHTMLRepresentationPrivate : NSObject {
  /* instance variables */
  WebDataSource *dataSource;
  BOOL hasSentResponseToPlugin;
  BOOL includedInWebKitStatistics;
  NSObject<WebPluginManualLoader> *manualLoader;
  WAKView *pluginView;
}

@end

#endif /* WebHTMLRepresentationPrivate_h */
