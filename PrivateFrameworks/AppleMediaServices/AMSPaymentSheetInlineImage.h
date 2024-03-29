//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPaymentSheetInlineImage_h
#define AMSPaymentSheetInlineImage_h
@import Foundation;

#include "AMSPaymentSheetAssetConfiguration-Protocol.h"

@class NSString;

@interface AMSPaymentSheetInlineImage : NSObject

@property (readonly, nonatomic) NSObject<AMSPaymentSheetAssetConfiguration> *localAssetConfiguration;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) BOOL serverSupplied;
@property (readonly, nonatomic) BOOL tint;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *value;

/* class methods */
+ (id)textEncapsulationForServerValue:(id)value;

/* instance methods */
- (id)initWithURLString:(id)urlstring;
- (id)initWithDictionary:(id)dictionary;
- (BOOL)isServerSupplied;
- (long long)_defaultAssetType;
- (id)_imageAssetConfigurationForDictionary:(id)dictionary;
- (long long)_ratingTypeForType:(id)type;
- (long long)_scaleForString:(id)string;
- (id)_symbolAssetConfigurationForDictionary:(id)dictionary;
@end

#endif /* AMSPaymentSheetInlineImage_h */
