//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateModularSmallStackText_h
#define CLKComplicationTemplateModularSmallStackText_h
@import Foundation;

#include "CLKComplicationTemplate.h"
#include "CLKTextProvider.h"

@interface CLKComplicationTemplateModularSmallStackText : CLKComplicationTemplate

@property (nonatomic) unsigned long long highlightMode;
@property (copy, nonatomic) CLKTextProvider *line1TextProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;
@property (nonatomic) BOOL highlightLine2;

/* class methods */
+ (id)templateWithLine1TextProvider:(id)provider line2TextProvider:(id)provider;

/* instance methods */
- (id)initWithLine1TextProvider:(id)provider line2TextProvider:(id)provider;
- (long long)compatibleFamily;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)block;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)block;
- (id)initPrivateWithJSONObjectRepresentation:(id)representation bundle:(id)bundle;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)path;
@end

#endif /* CLKComplicationTemplateModularSmallStackText_h */
