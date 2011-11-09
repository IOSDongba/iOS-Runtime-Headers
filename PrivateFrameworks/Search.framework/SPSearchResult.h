/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSURL, NSString, NSNumber;

@interface SPSearchResult : NSObject <SPSearchResult, SPSearchResultCursor> {
    int _domain;
    int _resultDomain;
    NSString *_resultDisplayIdentifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_auxiliaryTitle;
    NSString *_auxiliarySubtitle;
    unsigned long long _identifier;
    NSURL *_URL;
    NSNumber *_badge;
}

@property int domain;
@property int resultDomain;
@property(retain) NSString * resultDisplayIdentifier;
@property(retain) NSString * title;
@property(retain) NSString * subtitle;
@property(retain) NSString * summary;
@property(retain) NSString * auxiliaryTitle;
@property(retain) NSString * auxiliarySubtitle;
@property unsigned long long identifier;
@property(retain) NSURL * URL;
@property(copy) NSNumber * badge;


- (void)setDomain:(int)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (int)domain;
- (void)setURL:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)URL;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)auxiliarySubtitle;
- (id)auxiliaryTitle;
- (id)badge;
- (id)resultDisplayIdentifier;
- (void)setBadge:(id)arg1;
- (void)setAuxiliarySubtitle:(id)arg1;
- (void)setAuxiliaryTitle:(id)arg1;
- (void)setResultDisplayIdentifier:(id)arg1;
- (void)setResultDomain:(int)arg1;
- (BOOL)getBadgeValue:(float*)arg1;
- (const char *)URLUTF8String;
- (const char *)auxiliarySubtitleUTF8String;
- (const char *)auxiliaryTitleUTF8String;
- (const char *)summaryUTF8String;
- (const char *)subtitleUTF8String;
- (const char *)titleUTF8String;
- (const char *)resultDisplayIdentifierUTF8String;
- (int)resultDomain;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end