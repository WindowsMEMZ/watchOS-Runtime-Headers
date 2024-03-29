//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureCIFilterUnarchiverDelegate_h
#define FigCaptureCIFilterUnarchiverDelegate_h
@import Foundation;

#include "NSKeyedUnarchiverDelegate-Protocol.h"

@class NSString;

@interface FigCaptureCIFilterUnarchiverDelegate : NSObject<NSKeyedUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)name originalClasses:(id)classes;
@end

#endif /* FigCaptureCIFilterUnarchiverDelegate_h */
