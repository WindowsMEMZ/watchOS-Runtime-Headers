//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCompoundLocalizableStringKey_h
#define HFCompoundLocalizableStringKey_h
@import Foundation;

#include "HFLocalizableStringKey.h"

@class NSMutableArray, NSString;

@interface HFCompoundLocalizableStringKey : HFLocalizableStringKey

@property (retain, nonatomic) NSString *format;
@property (readonly, nonatomic) NSMutableArray *localizableStrings;

/* instance methods */
- (id)initWithFormat:(id)format localizableStrings:(id)strings;
- (id)localizedStringWithArgumentBlock:(id /* block */)block;
@end

#endif /* HFCompoundLocalizableStringKey_h */
