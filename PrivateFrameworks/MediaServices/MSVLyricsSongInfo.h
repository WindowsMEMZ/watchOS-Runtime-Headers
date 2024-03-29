//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVLyricsSongInfo_h
#define MSVLyricsSongInfo_h
@import Foundation;

@class NSArray, NSDictionary, NSString;

@interface MSVLyricsSongInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) double songDuration;
@property (nonatomic) double leadingSilence;
@property (retain, nonatomic) NSArray *songwriters;
@property (copy, nonatomic) NSString *lyricGenId;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *lyricsSections;
@property (retain, nonatomic) NSArray *lyricsLines;
@property (retain, nonatomic) NSArray *agents;
@property (retain, nonatomic) NSDictionary *translationsMap;
@property (readonly, nonatomic) NSArray *availableTranslations;

/* class methods */
+ (id)_elementsInArray:(id)array atTimeOffset:(double)offset errorMargin:(double)margin;
+ (id)_descriptionForLyricsInfoType:(long long)type;

/* instance methods */
- (id)init;
- (id)lyricsLinesAtTimeOffset:(double)offset errorMargin:(double)margin;
- (id)lyricsWordsAtTimeOffset:(double)offset errorMargin:(double)margin;
- (id)lyricsLineStartingBeforeTimeOffset:(double)offset;
- (id)translatedTextForLyricsLine:(id)line language:(id)language;
- (id)description;
- (void)setLyricsLinesSortedByStartTime:(id)time;
- (id)_sortLyricsLinesByStartTime:(id)time;
@end

#endif /* MSVLyricsSongInfo_h */
