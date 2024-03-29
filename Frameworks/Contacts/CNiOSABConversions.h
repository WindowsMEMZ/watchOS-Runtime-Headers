//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNiOSABConversions_h
#define CNiOSABConversions_h
@import Foundation;

@interface CNiOSABConversions : NSObject
/* class methods */
+ (id)stringFromABBytes:(char *)abbytes length:(unsigned long long)length;
+ (id)dateFromABBytes:(char *)abbytes length:(unsigned long long)length;
+ (id)dataFromABBytes:(char *)abbytes length:(unsigned long long)length;
+ (id)numberFromIntegerABBytes:(char *)abbytes length:(unsigned long long)length;
+ (id)os_log;
+ (void)initialize;
+ (id)contactFromABPerson:(void *)abperson uniqueKeysToConvert:(id)convert mutable:(BOOL)mutable;
+ (void)updateContact:(id)contact fromABPerson:(void *)abperson keysToConvert:(id)convert availableKeyDescriptor:(id *)descriptor;
+ (id)arrayByMappingTransform:(id /* block */)transform onCFArray:(struct __CFArray *)cfarray;
@end

#endif /* CNiOSABConversions_h */
