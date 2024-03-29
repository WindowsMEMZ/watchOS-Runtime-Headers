//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSCNAutocompleteFeedbackErasedHandle_h
#define _PSCNAutocompleteFeedbackErasedHandle_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class CNContact;

@interface _PSCNAutocompleteFeedbackErasedHandle : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) CNContact *contact;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContact:(id)contact;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _PSCNAutocompleteFeedbackErasedHandle_h */
