//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSDialog_h
#define SSDialog_h
@import Foundation;

#include "SSDialogButton.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface SSDialog : NSObject

@property (readonly, nonatomic) NSDictionary *dialogDictionary;
@property (readonly, nonatomic) NSString *dialogKind;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) SSDialogButton *defaultButton;

/* instance methods */
- (id)init;
- (id)initWithDialogDictionary:(id)dictionary;
- (void)dealloc;
- (id)valueForProperty:(id)property;
- (void)_setValue:(id)value forProperty:(id)property;
@end

#endif /* SSDialog_h */
