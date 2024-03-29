//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLOrderIntermediate_h
#define NSSQLOrderIntermediate_h
@import Foundation;

#include "NSSQLIntermediate.h"

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
  /* instance variables */
  NSArray *_sortDescriptors;
}

/* instance methods */
- (id)initWithSortDescriptors:(id)descriptors inScope:(id)scope;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)context;
@end

#endif /* NSSQLOrderIntermediate_h */
