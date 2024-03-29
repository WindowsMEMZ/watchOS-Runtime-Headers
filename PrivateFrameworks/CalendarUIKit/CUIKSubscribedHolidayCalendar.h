//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKSubscribedHolidayCalendar_h
#define CUIKSubscribedHolidayCalendar_h
@import Foundation;

@class NSLocale, NSString, NSURL;

@interface CUIKSubscribedHolidayCalendar : NSObject {
  /* instance variables */
  NSString *_cachedLocalizedDescription;
  NSString *_cachedDescriptionInLocaleLanguage;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _localizedDescriptionCacheLock;
}

@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSURL *URL;

/* instance methods */
- (id)initWithLocale:(id)locale languageCode:(id)code URL:(id)url;
- (id)localizedTitle;
- (id)localizedDescription;
- (id)descriptionInLocaleLanguage;
@end

#endif /* CUIKSubscribedHolidayCalendar_h */
