//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKGPXExporter_h
#define HKGPXExporter_h
@import Foundation;

#include "HKWorkoutRoute.h"

@class NSFileHandle, NSISO8601DateFormatter, NSURL;

@interface HKGPXExporter : NSObject {
  /* instance variables */
  HKWorkoutRoute *_route;
  NSFileHandle *_fileHandle;
  NSISO8601DateFormatter *_isoFormatter;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL isFinished;

/* class methods */
+ (id)fileNameForRoute:(id)route;
+ (id)_displayNameForRoute:(id)route;

/* instance methods */
- (id)initWithURL:(id)url route:(id)route;
- (BOOL)appendLocations:(id)locations error:(id *)error;
- (BOOL)finishWithError:(id *)error;
- (id)_trackpointEntryForLocation:(id)location;
- (BOOL)_appendGPXHeaderWithError:(id *)error;
- (BOOL)_appendString:(id)string error:(id *)error;
@end

#endif /* HKGPXExporter_h */
