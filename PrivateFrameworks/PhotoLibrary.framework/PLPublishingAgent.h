/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSData, NSMutableArray, NSString, UINavigationController;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate> {
    double _changeRate;
    long long _currentValue;
    id _delegate;
    BOOL _deleteAfterPublishing;
    double _estimatedTimeRemaining;
    long long _maxValue;
    NSData *_mediaData;
    NSString *_mediaPath;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    UINavigationController *_parentNavigationController;
    float _percentComplete;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    id _userInfo;
}

@property <PLPublishingAgentDelegate> *delegate; /* unknown property attribute: V_delegate */

+ (id)publishingAgentForBundleNamed:(id)arg1;

- (void)_snapshot;
- (void)_updateStatisticsFromSnapshots;
- (void)cancelButtonClicked;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteMediaFileAfterPublishing;
- (void)dismiss;
- (void)doneButtonClicked;
- (double)estimatedTimeRemaining;
- (id)initWithMediaPath:(id)arg1;
- (double)maximumVideoDuration;
- (id)mediaData;
- (id)mediaPath;
- (id)mediaTitle;
- (id)mediaURL;
- (id)navigationController;
- (id)parentNavigationController;
- (float)percentComplete;
- (void)presentModalSheetInNavigationController:(id)arg1;
- (void)publish;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setDeleteMediaFileAfterPublishing:(BOOL)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaPath:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)tellAFriendURL;
- (id)userInfo;

@end