//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMMutationEvent_h
#define DOMMutationEvent_h
@import Foundation;

#include "DOMEvent.h"
#include "DOMNode.h"

@class NSString;

@interface DOMMutationEvent : DOMEvent

@property (readonly) DOMNode *relatedNode;
@property (readonly, copy) NSString *prevValue;
@property (readonly, copy) NSString *newValue;
@property (readonly, copy) NSString *attrName;
@property (readonly) unsigned short attrChange;

/* instance methods */
- (void)initMutationEvent:(id)event;
- (void)initMutationEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable relatedNode:(id)node prevValue:(id)value newValue:(id)value attrName:(id)name attrChange:(unsigned short)change;
@end

#endif /* DOMMutationEvent_h */
