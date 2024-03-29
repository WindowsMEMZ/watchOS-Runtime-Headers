//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPersistedContentArchive_h
#define FCPersistedContentArchive_h
@import Foundation;

#include "FCContentArchive.h"

@class NSString;

@interface FCPersistedContentArchive : FCContentArchive {
  /* instance variables */
  NSString *_archivePath;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)unarchiveIntoContentContext:(id)context;
- (id)manifest;
@end

#endif /* FCPersistedContentArchive_h */
