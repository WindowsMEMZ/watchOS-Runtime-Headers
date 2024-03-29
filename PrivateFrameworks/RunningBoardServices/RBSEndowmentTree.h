//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSEndowmentTree_h
#define RBSEndowmentTree_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface RBSEndowmentTree : NSObject<NSCopying, RBSXPCSecureCoding> {
  /* instance variables */
  NSMutableDictionary *_tree;
}

@property (readonly, nonatomic) NSString *endowmentNamespace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)endowmentTreeForNamespace:(id)namespace;
+ (id)endowmentTreeForLinks:(id)links;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)rootLinks;
- (id)childrenLinks:(id)links;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSEndowmentTree_h */
