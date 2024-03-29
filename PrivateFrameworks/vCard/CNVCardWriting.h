//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNVCardWriting_h
#define CNVCardWriting_h
@import Foundation;

@interface CNVCardWriting : NSObject
/* class methods */
+ (id)stringWithPeople:(id)people options:(id)options error:(id *)error;
+ (id)stringWithPerson:(id)person options:(id)options error:(id *)error;
+ (id)dataWithPeople:(id)people options:(id)options error:(id *)error;
+ (id)dataWithPerson:(id)person options:(id)options error:(id *)error;
+ (id)excludedFieldsForPerson:(id)person options:(id)options;
+ (id)excludedMeCardFields;
+ (id)scopeForPerson:(id)person options:(id)options;
+ (void)serializePerson:(id)person withSerializer:(id)serializer options:(id)options;
+ (void)makevCardWithBuilder:(id)builder serializer:(id)serializer options:(id)options;
@end

#endif /* CNVCardWriting_h */
