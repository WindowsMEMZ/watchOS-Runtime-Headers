//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLMockKeyValueDomain_h
#define NLMockKeyValueDomain_h
@import Foundation;

#include "HDKeyValueDomain.h"

@class NSMutableDictionary;

@interface NLMockKeyValueDomain : HDKeyValueDomain {
  /* instance variables */
  NSMutableDictionary *_dataStore;
}

/* instance methods */
- (id)initWithCategory:(long long)category domainName:(id)name profile:(id)profile;
- (BOOL)setDate:(id)date forKey:(id)key error:(id *)error;
- (id)dateForKey:(id)key error:(id *)error;
- (BOOL)setData:(id)data forKey:(id)key error:(id *)error;
- (id)dataForKey:(id)key error:(id *)error;
- (BOOL)setQuantity:(id)quantity unit:(id)unit forKey:(id)key error:(id *)error;
- (id)quantityForKey:(id)key unit:(id)unit error:(id *)error;
- (BOOL)setNumber:(id)number forKey:(id)key error:(id *)error;
- (id)numberForKey:(id)key error:(id *)error;
- (BOOL)setString:(id)string forKey:(id)key error:(id *)error;
- (id)stringForKey:(id)key error:(id *)error;
- (BOOL)setValuesWithDictionary:(id)dictionary error:(id *)error;
- (id)valuesForKeys:(id)keys error:(id *)error;
- (id)allValuesWithError:(id *)error;
@end

#endif /* NLMockKeyValueDomain_h */
