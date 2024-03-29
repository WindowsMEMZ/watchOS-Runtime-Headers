//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSDoubleLinkedListNode_h
#define AMSDoubleLinkedListNode_h
@import Foundation;

#include "AMSDoubleLinkedListNode.h"

@class NSString;

@interface AMSDoubleLinkedListNode : NSObject

@property (retain, nonatomic) NSString *listIdentifier;
@property (weak, nonatomic) AMSDoubleLinkedListNode *previous;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) AMSDoubleLinkedListNode *next;

/* instance methods */
- (id)init;
- (id)initWithObject:(id)object;
@end

#endif /* AMSDoubleLinkedListNode_h */
