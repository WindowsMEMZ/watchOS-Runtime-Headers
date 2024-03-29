//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICEllipticItemIdentifier_h
#define PUICEllipticItemIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSIndexPath, NSString;

@interface PUICEllipticItemIdentifier : NSObject<NSCopying>

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSString *representedKind;

/* class methods */
+ (id)identifierWithIndexPath:(id)path representedKind:(id)kind;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PUICEllipticItemIdentifier_h */
