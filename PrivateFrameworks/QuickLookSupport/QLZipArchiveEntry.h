//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLZipArchiveEntry_h
#define QLZipArchiveEntry_h
@import Foundation;

#include "QLZipArchive.h"

@class NSData, NSError, NSURL;

@interface QLZipArchiveEntry : NSObject {
  /* instance variables */
  NSError *_error;
}

@property struct archive_entry * entry;
@property (weak) QLZipArchive *archive;
@property (retain) NSData *data;
@property (readonly, nonatomic) NSURL *url;

/* instance methods */
- (id)readDataWithError:(id *)error;
@end

#endif /* QLZipArchiveEntry_h */
